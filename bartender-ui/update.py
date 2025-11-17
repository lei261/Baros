import os
import subprocess
import json
import shutil  # 新增：用于移动文件和删除目录
from pathlib import Path
import requests

# ==================== 配置参数（根据实际情况修改） ====================
REPO_URL = "https://github.com/lei261/Baros.git"  # GitHub仓库地址
TARGET_DIR = "/home/lei/bartender-ui/"  # 目标目录（直接覆盖此目录）
BRANCH = "main"  # 分支名
LAST_COMMIT_FILE = "/home/lei/bartender-ui/.last_commit"  # 版本记录文件
# 注意：如果仓库根目录下有嵌套的子目录（如bartender-ui），需指定该子目录名
REPO_SUB_DIR = "bartender-ui"  # 仓库中实际存放文件的子目录（根据你的仓库结构修改）
# ==================================================================

def run_command(command, cwd=None):
    """执行系统命令并返回结果"""
    try:
        result = subprocess.run(
            command,
            cwd=cwd or TARGET_DIR,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            check=True
        )
        return {"success": True, "output": result.stdout.strip()}
    except subprocess.CalledProcessError as e:
        return {"success": False, "error": e.stderr.strip() or str(e)}

def init_repo():
    """初始化仓库（自动清理目标目录，克隆后将子目录文件移动到根目录）"""
    Path(TARGET_DIR).mkdir(parents=True, exist_ok=True)
    git_dir = os.path.join(TARGET_DIR, ".git")
    
    # 检查目标目录是否非空且不是Git仓库
    if not os.path.exists(git_dir):
        # 列出目标目录中所有文件（包括隐藏文件）
        files = os.listdir(TARGET_DIR)
        if len(files) > 0:
            print(f"检测到目标目录 {TARGET_DIR} 非空且不是Git仓库，自动删除所有内容...")
            # 直接删除目录内所有文件和子目录（无需询问）
            for f in files:
                f_path = os.path.join(TARGET_DIR, f)
                try:
                    if os.path.isfile(f_path) or os.path.islink(f_path):
                        os.unlink(f_path)  # 删除文件/链接
                    elif os.path.isdir(f_path):
                        shutil.rmtree(f_path)  # 删除目录（包括子目录）
                except Exception as e:
                    return {"success": False, "error": f"删除文件失败：{f_path}，错误：{str(e)}"}
            print("目标目录已清空（包括隐藏文件）")
    
    # 继续克隆/初始化
    if not os.path.exists(git_dir):
        print(f"首次克隆仓库到临时目录...")
        # 先克隆到临时目录（避免直接克隆到目标目录导致的路径问题）
        temp_clone_dir = os.path.join(TARGET_DIR, "temp_clone")
        shutil.rmtree(temp_clone_dir, ignore_errors=True)  # 清理旧临时目录
        clone_res = run_command(["git", "clone", REPO_URL, temp_clone_dir])
        if not clone_res["success"]:
            return clone_res
        
        # 切换到目标分支
        print("切换到目标分支...")
        checkout_res = run_command(["git", "checkout", BRANCH], cwd=temp_clone_dir)
        if not checkout_res["success"]:
            shutil.rmtree(temp_clone_dir)  # 清理临时目录
            return checkout_res
        
        # 核心：将仓库子目录（REPO_SUB_DIR）的内容移动到目标目录根目录
        repo_files_dir = os.path.join(temp_clone_dir, REPO_SUB_DIR)
        if not os.path.exists(repo_files_dir):
            shutil.rmtree(temp_clone_dir)
            return {"success": False, "error": f"仓库中未找到子目录 {REPO_SUB_DIR}，无法移动文件"}
        
        # 移动子目录中的所有文件到目标目录
        for item in os.listdir(repo_files_dir):
            src = os.path.join(repo_files_dir, item)
            dst = os.path.join(TARGET_DIR, item)
            # 若目标已存在，先删除（确保覆盖）
            if os.path.exists(dst):
                if os.path.isfile(dst):
                    os.unlink(dst)
                else:
                    shutil.rmtree(dst)
            # 移动文件/目录
            shutil.move(src, dst)
        
        # 移动.git目录（保留版本控制）
        src_git = os.path.join(temp_clone_dir, ".git")
        dst_git = os.path.join(TARGET_DIR, ".git")
        if os.path.exists(dst_git):
            shutil.rmtree(dst_git)
        shutil.move(src_git, dst_git)
        
        # 清理临时目录
        shutil.rmtree(temp_clone_dir)
        print(f"仓库文件已移动到目标目录：{TARGET_DIR}")
    
    return run_command(["git", "rev-parse", "HEAD"])

def check_update():
    """检查远程是否有更新（本地未初始化时也视为需要更新）"""
    # 获取本地版本
    local_hash = None
    if os.path.exists(LAST_COMMIT_FILE):
        with open(LAST_COMMIT_FILE, "r") as f:
            local_hash = f.read().strip()
    
    # 获取远程版本（使用git ls-remote更可靠，避免API缓存）
    try:
        result = run_command(["git", "ls-remote", REPO_URL, BRANCH])
        if not result["success"]:
            return {"success": False, "error": f"获取远程版本失败：{result['error']}"}
        remote_hash = result["output"].split()[0]  # 提取commit hash
        return {
            "success": True,
            "local_hash": local_hash,
            "remote_hash": remote_hash,
            "has_update": local_hash is None or remote_hash != local_hash
        }
    except Exception as e:
        return {"success": False, "error": f"检查更新失败：{str(e)}"}

def pull_update():
    """拉取最新代码并覆盖到目标目录"""
    print("拉取远程最新代码...")
    # 强制拉取（忽略本地修改，确保与远程一致）
    pull_res = run_command(["git", "pull", "origin", BRANCH, "--force"])
    if not pull_res["success"]:
        return pull_res
    
    # 核心：如果仓库有子目录，将子目录内容移动到目标目录根目录（覆盖现有文件）
    repo_files_dir = os.path.join(TARGET_DIR, REPO_SUB_DIR)
    if os.path.exists(repo_files_dir):
        print(f"将 {REPO_SUB_DIR} 子目录内容移动到目标目录根目录...")
        for item in os.listdir(repo_files_dir):
            src = os.path.join(repo_files_dir, item)
            dst = os.path.join(TARGET_DIR, item)
            # 覆盖目标文件/目录
            if os.path.exists(dst):
                if os.path.isfile(dst):
                    os.unlink(dst)
                else:
                    shutil.rmtree(dst)
            shutil.move(src, dst)
    
    print("安装前端依赖...")
    npm_res = run_command(["npm", "install"])
    if not npm_res["success"]:
        return npm_res
    
    # 更新版本记录
    rev_res = run_command(["git", "rev-parse", "HEAD"])
    if rev_res["success"]:
        with open(LAST_COMMIT_FILE, "w") as f:
            f.write(rev_res["output"])
    return rev_res

def main():
    print("===== 开始更新工程 =====")
    
    # 初始化仓库（首次运行时克隆）
    init_result = init_repo()
    if not init_result["success"]:
        print(f"? 仓库初始化失败：{init_result['error']}")
        return
    
    # 检查更新
    check_result = check_update()
    if not check_result["success"]:
        print(f"? 检查更新失败：{check_result['error']}")
        return
    
    local_ver = check_result["local_hash"][:7] if check_result["local_hash"] else "未初始化"
    remote_ver = check_result["remote_hash"][:7]
    print(f"本地版本：{local_ver} | 远程版本：{remote_ver}")
    
    if check_result["has_update"]:
        # 执行更新
        pull_result = pull_update()
        if pull_result["success"]:
            print(f"? 更新完成，新版本：{pull_result['output'][:7]}")
        else:
            print(f"? 更新失败：{pull_result['error']}")
    else:
        print("? 当前已是最新版本，无需更新")
    
    print("===== 更新流程结束 =====")

if __name__ == "__main__":
    main()