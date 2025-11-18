import os
import subprocess
import json
import shutil
from pathlib import Path
import requests

# ==================== 配置参数 ====================
REPO_URL = "https://github.com/lei261/Baros.git"
TARGET_DIR = "/home/lei/baros/"  # 仓库克隆目录（作为 Git 仓库根目录）
BRANCH = "main"
LAST_COMMIT_FILE = "/home/lei/baros/.last_commit"
REPO_SUB_DIR = "bartender-ui"  # 需要稀疏检出的子目录
WORK_DIR = os.path.join(TARGET_DIR, REPO_SUB_DIR)  # 前端项目所在目录（npm 在这里执行）
# =================================================

def run_command(command, cwd=None, timeout=None):
    try:
        result = subprocess.run(
            command,
            cwd=cwd or TARGET_DIR,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            check=True,
            timeout=timeout
        )
        return {"success": True, "output": result.stdout.strip()}
    except subprocess.TimeoutExpired:
        return {"success": False, "error": f"命令超时：{' '.join(command)}"}
    except subprocess.CalledProcessError as e:
        return {"success": False, "error": e.stderr.strip() or str(e)}

def init_repo():
    Path(TARGET_DIR).mkdir(parents=True, exist_ok=True)
    git_dir = os.path.join(TARGET_DIR, ".git")
    
    # 如果还未初始化 Git 仓库，则进行稀疏检出配置
    if not os.path.exists(git_dir):
        print("Path 不存在 克隆仓库（启用 sparse-checkout)")
        # 确保目标目录为空（Git 要求目标目录为空才能 clone）
        files = os.listdir(TARGET_DIR)
        if len(files) > 0:
            return {"success": False, "error": f"目标目录 {TARGET_DIR} 非空，请先手动清理后再运行。"}

        parent_dir = os.path.dirname(os.path.abspath(TARGET_DIR.rstrip("/")))
        target_name = os.path.basename(os.path.abspath(TARGET_DIR.rstrip("/")))

        # 使用稀疏克隆，只获取必要对象
        clone_res = run_command(
            ["git", "clone", "--filter=blob:none", "--sparse", REPO_URL, target_name],
            cwd=parent_dir,
            timeout=10
        )
        if not clone_res["success"]:
            return clone_res

        print("设置 sparse-checkout 只检出指定子目录...")
        sc_res = run_command(["git", "sparse-checkout", "set", REPO_SUB_DIR], cwd=TARGET_DIR)
        if not sc_res["success"]:
            return sc_res

        print("切换到目标分支...")
        checkout_res = run_command(["git", "checkout", BRANCH], cwd=TARGET_DIR)
        if not checkout_res["success"]:
            return checkout_res
    
    return run_command(["git", "rev-parse", "HEAD"])

def check_update():
    local_hash = None
    if os.path.exists(LAST_COMMIT_FILE):
        with open(LAST_COMMIT_FILE, "r") as f:
            local_hash = f.read().strip()
    
    try:
        result = run_command(["git", "ls-remote", REPO_URL, BRANCH])
        if not result["success"]:
            return {"success": False, "error": f"获取远程版本失败：{result['error']}"}
        remote_hash = result["output"].split()[0]
        return {
            "success": True,
            "local_hash": local_hash,
            "remote_hash": remote_hash,
            "has_update": local_hash is None or remote_hash != local_hash
        }
    except Exception as e:
        return {"success": False, "error": f"检查更新失败：{e}"}

def pull_update():
    print("拉取远程最新代码...")
    pull_res = run_command(["git", "reset", "--hard", f"origin/{BRANCH}"], cwd=TARGET_DIR)
    if not pull_res["success"]:
        return pull_res
    
    rev_res = run_command(["git", "rev-parse", "HEAD"])
    if rev_res["success"]:
        with open(LAST_COMMIT_FILE, "w") as f:
            f.write(rev_res["output"])
    return rev_res

def main():
    print("===== 开始更新工程 =====")
    
    init_result = init_repo()
    if not init_result["success"]:
        print(f"? 初始化失败：{init_result['error']}")
        return
    
    check_result = check_update()
    if not check_result["success"]:
        print(f"? 检查更新失败：{check_result['error']}")
        return
    
    local_ver = check_result["local_hash"][:7] if check_result["local_hash"] else "未初始化"
    remote_ver = check_result["remote_hash"][:7]
    print(f"本地版本：{local_ver} | 远程版本：{remote_ver}")
    
    if check_result["has_update"]:
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