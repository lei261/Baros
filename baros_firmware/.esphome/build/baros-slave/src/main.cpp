// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace binary_sensor;
using namespace switch_;
using namespace fan;
using namespace light;
using namespace button;
logger::Logger *logger_logger_id;
web_server_base::WebServerBase *web_server_base_webserverbase_id;
wifi::WiFiComponent *wifi_wificomponent_id;
mdns::MDNSComponent *mdns_mdnscomponent_id;
esphome::ESPHomeOTAComponent *esphome_esphomeotacomponent_id;
safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
web_server::WebServer *web_server_webserver_id;
const uint8_t ESPHOME_WEBSERVER_INDEX_HTML[174] PROGMEM = {60, 33, 68, 79, 67, 84, 89, 80, 69, 32, 104, 116, 109, 108, 62, 60, 104, 116, 109, 108, 62, 60, 104, 101, 97, 100, 62, 60, 109, 101, 116, 97, 32, 99, 104, 97, 114, 115, 101, 116, 61, 85, 84, 70, 45, 56, 62, 60, 108, 105, 110, 107, 32, 114, 101, 108, 61, 105, 99, 111, 110, 32, 104, 114, 101, 102, 61, 100, 97, 116, 97, 58, 62, 60, 47, 104, 101, 97, 100, 62, 60, 98, 111, 100, 121, 62, 60, 101, 115, 112, 45, 97, 112, 112, 62, 60, 47, 101, 115, 112, 45, 97, 112, 112, 62, 60, 115, 99, 114, 105, 112, 116, 32, 115, 114, 99, 61, 34, 104, 116, 116, 112, 115, 58, 47, 47, 111, 105, 46, 101, 115, 112, 104, 111, 109, 101, 46, 105, 111, 47, 118, 50, 47, 119, 119, 119, 46, 106, 115, 34, 62, 60, 47, 115, 99, 114, 105, 112, 116, 62, 60, 47, 98, 111, 100, 121, 62, 60, 47, 104, 116, 109, 108, 62};
const size_t ESPHOME_WEBSERVER_INDEX_HTML_SIZE = 174;
StartupTrigger *startuptrigger_id;
Automation<> *automation_id;
using namespace json;
binary_sensor::BinarySensor *wifi_status;
binary_sensor::BinarySensor *server_status;
template_::TemplateBinarySensor *pi_started_slave;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id;
Automation<> *automation_id_2;
binary_sensor::BinarySensor *binary_sensor_binarysensor_id;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_2;
Automation<> *automation_id_3;
template_::TemplateBinarySensor *clean_system_slave;
template_::TemplateBinarySensor *water_pump_slave_sensor;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_3;
Automation<> *automation_id_5;
template_::TemplateBinarySensor *valve1_slave_sensor;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_4;
Automation<> *automation_id_7;
template_::TemplateBinarySensor *valve2_slave_sensor;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_5;
Automation<> *automation_id_9;
gpio::GPIOBinarySensor *tank4_slave;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id;
binary_sensor::StateTrigger *binary_sensor_statetrigger_id;
Automation<bool> *automation_id_11;
gpio::GPIOBinarySensor *tank3_slave;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_2;
binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id;
binary_sensor::StateTrigger *binary_sensor_statetrigger_id_2;
Automation<bool> *automation_id_12;
gpio::GPIOBinarySensor *tank2_slave;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_3;
binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id_2;
binary_sensor::StateTrigger *binary_sensor_statetrigger_id_3;
Automation<bool> *automation_id_13;
gpio::GPIOBinarySensor *tank1_slave;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_4;
binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id_3;
binary_sensor::StateTrigger *binary_sensor_statetrigger_id_4;
Automation<bool> *automation_id_14;
gpio::GPIOBinarySensor *tank5_slave;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_5;
binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id_4;
binary_sensor::StateTrigger *binary_sensor_statetrigger_id_5;
Automation<bool> *automation_id_15;
gpio::GPIOBinarySensor *tank6_slave;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_6;
binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id_5;
binary_sensor::StateTrigger *binary_sensor_statetrigger_id_6;
Automation<bool> *automation_id_16;
gpio::GPIOBinarySensor *tank7_slave;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_7;
binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id_6;
binary_sensor::StateTrigger *binary_sensor_statetrigger_id_7;
Automation<bool> *automation_id_17;
gpio::GPIOBinarySensor *tank8_slave;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_8;
binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id_7;
binary_sensor::StateTrigger *binary_sensor_statetrigger_id_8;
Automation<bool> *automation_id_18;
gpio::GPIOBinarySensor *liquid1_slave;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_9;
binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id_8;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_6;
Automation<> *automation_id_19;
gpio::GPIOBinarySensor *liquid2_slave;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_10;
binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id_9;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_7;
Automation<> *automation_id_21;
psram::PsramComponent *psram_psramcomponent_id;
using namespace uart;
uart::IDFUARTComponent *uart_com;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_11;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_12;
using namespace uart;
uart::IDFUARTComponent *uart_pi;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_13;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_14;
uart::UARTDebugger *uart_uartdebugger_id;
Automation<uart::UARTDirection, std::vector<uint8_t>> *automation_id_23;
LambdaAction<uart::UARTDirection, std::vector<uint8_t>> *lambdaaction_id_7;
uart::UARTDummyReceiver *uart_uartdummyreceiver_id;
uart::UARTTransport *uart_uarttransport_id;
gpio::GPIOSwitch *restart_master;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_15;
gpio::GPIOSwitch *water_pump_slave_switch;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_16;
gpio::GPIOSwitch *o3_en;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_17;
gpio::GPIOSwitch *ice1;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_18;
gpio::GPIOSwitch *ice2;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_19;
gpio::GPIOSwitch *valve1;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_20;
gpio::GPIOSwitch *valve2;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_21;
using namespace output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_22;
ledc::LEDCOutput *fridge_fan1_output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_23;
ledc::LEDCOutput *fridge_fan2_output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_24;
ledc::LEDCOutput *exhaust_fan_output;
speed::SpeedFan *fridge_fan1;
speed::SpeedFan *exhaust_fan;
esp32_rmt_led_strip::ESP32RMTLEDStripLightOutput *esp32_rmt_led_strip_esp32rmtledstriplightoutput_id;
light::AddressableLightState *led_rgb2;
light::LightTurnOnTrigger *light_lightturnontrigger_id;
Automation<> *automation_id_24;
light::LightControlAction<> *light_lightcontrolaction_id_2;
script::QueueingScript<uint8_t, uint16_t, uint16_t> *send_to_pi;
script::SingleScript<> *update_all_tank_status;
Automation<uint8_t, uint16_t, uint16_t> *automation_id_25;
LambdaAction<uint8_t, uint16_t, uint16_t> *lambdaaction_id_8;
DelayAction<uint8_t, uint16_t, uint16_t> *delayaction_id_2;
LambdaAction<uint8_t, uint16_t, uint16_t> *lambdaaction_id_9;
Automation<> *automation_id_26;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>> *script_scriptexecuteaction_id_12;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>> *script_scriptexecuteaction_id_13;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>> *script_scriptexecuteaction_id_14;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>> *script_scriptexecuteaction_id_15;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>> *script_scriptexecuteaction_id_16;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>> *script_scriptexecuteaction_id_17;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>> *script_scriptexecuteaction_id_18;
template_::TemplateButton *template__templatebutton_id;
button::ButtonPressTrigger *button_buttonpresstrigger_id;
Automation<> *automation_id_27;
switch_::TurnOffAction<> *switch__turnoffaction_id_4;
DelayAction<> *delayaction_id_3;
switch_::TurnOnAction<> *switch__turnonaction_id_4;
template_::TemplateButton *template__templatebutton_id_2;
button::ButtonPressTrigger *button_buttonpresstrigger_id_2;
Automation<> *automation_id_28;
LambdaAction<> *lambdaaction_id_10;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>> *script_scriptexecuteaction_id_19;
template_::TemplateButton *template__templatebutton_id_3;
button::ButtonPressTrigger *button_buttonpresstrigger_id_3;
Automation<> *automation_id_29;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>> *script_scriptexecuteaction_id_20;
DelayAction<> *delayaction_id_4;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>> *script_scriptexecuteaction_id_21;
interval::IntervalTrigger *interval_intervaltrigger_id;
Automation<> *automation_id_30;
script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id_22;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_2;
DelayAction<> *delayaction_id;
light::LightControlAction<> *light_lightcontrolaction_id;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>> *script_scriptexecuteaction_id;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>> *script_scriptexecuteaction_id_2;
binary_sensor::ReleaseTrigger *binary_sensor_releasetrigger_id;
Automation<> *automation_id_4;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>> *script_scriptexecuteaction_id_3;
switch_::TurnOnAction<> *switch__turnonaction_id;
binary_sensor::ReleaseTrigger *binary_sensor_releasetrigger_id_2;
Automation<> *automation_id_6;
switch_::TurnOffAction<> *switch__turnoffaction_id;
switch_::TurnOnAction<> *switch__turnonaction_id_2;
binary_sensor::ReleaseTrigger *binary_sensor_releasetrigger_id_3;
Automation<> *automation_id_8;
switch_::TurnOffAction<> *switch__turnoffaction_id_2;
switch_::TurnOnAction<> *switch__turnonaction_id_3;
binary_sensor::ReleaseTrigger *binary_sensor_releasetrigger_id_4;
Automation<> *automation_id_10;
switch_::TurnOffAction<> *switch__turnoffaction_id_3;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool> *script_scriptexecuteaction_id_4;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool> *script_scriptexecuteaction_id_5;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_2;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool> *script_scriptexecuteaction_id_6;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_3;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool> *script_scriptexecuteaction_id_7;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_4;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool> *script_scriptexecuteaction_id_8;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_5;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool> *script_scriptexecuteaction_id_9;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_6;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool> *script_scriptexecuteaction_id_10;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_7;
script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool> *script_scriptexecuteaction_id_11;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_8;
globals::GlobalsComponent<unsigned long> *liquid1_last_time;
globals::GlobalsComponent<unsigned long> *liquid2_last_time;
globals::GlobalsComponent<unsigned long> *liquid3_last_time;
globals::GlobalsComponent<unsigned long> *liquid4_last_time;
globals::GlobalsComponent<unsigned long> *liquid5_last_time;
globals::GlobalsComponent<unsigned long> *liquid6_last_time;
globals::GlobalsComponent<unsigned long> *liquid7_last_time;
globals::GlobalsComponent<unsigned long> *liquid8_last_time;
globals::GlobalsComponent<unsigned long> *liquid1_8_interval;
globals::GlobalsComponent<unsigned long> *liquid2_8_interval;
globals::GlobalsComponent<unsigned long> *liquid3_8_interval;
globals::GlobalsComponent<unsigned long> *liquid4_8_interval;
globals::GlobalsComponent<unsigned long> *liquid5_8_interval;
globals::GlobalsComponent<unsigned long> *liquid6_8_interval;
globals::GlobalsComponent<unsigned long> *liquid7_8_interval;
globals::GlobalsComponent<unsigned long> *liquid_time_threshold;
LambdaAction<> *lambdaaction_id;
LambdaAction<> *lambdaaction_id_2;
binary_sensor::ReleaseTrigger *binary_sensor_releasetrigger_id_5;
Automation<> *automation_id_20;
LambdaAction<> *lambdaaction_id_3;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_9;
LambdaAction<> *lambdaaction_id_4;
LambdaAction<> *lambdaaction_id_5;
binary_sensor::ReleaseTrigger *binary_sensor_releasetrigger_id_6;
Automation<> *automation_id_22;
LambdaAction<> *lambdaaction_id_6;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_10;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // esphome:
  //   name: baros-slave
  //   on_boot:
  //     - priority: -100.0
  //       then:
  //         - binary_sensor.template.publish:
  //             id: clean_system_slave
  //             state: false
  //           type_id: binary_sensor_binarysensorpublishaction_id
  //         - binary_sensor.template.publish:
  //             id: pi_started_slave
  //             state: false
  //           type_id: binary_sensor_binarysensorpublishaction_id_2
  //         - delay: 3s
  //           type_id: delayaction_id
  //         - light.turn_on:
  //             id: led_rgb2
  //             state: true
  //           type_id: light_lightcontrolaction_id
  //       automation_id: automation_id
  //       trigger_id: startuptrigger_id
  //   min_version: 2025.10.4
  //   build_path: build\baros-slave
  //   friendly_name: ''
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   debug_scheduler: false
  //   areas: []
  //   devices: []
  App.pre_setup("baros-slave", "", "", __DATE__ ", " __TIME__, false);
  // binary_sensor:
  // switch:
  // fan:
  // light:
  // button:
  // logger:
  //   logs:
  //     interval: NONE
  //     binary_sensor: NONE
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   task_log_buffer_size: 768
  //   hardware_uart: USB_SERIAL_JTAG
  //   level: DEBUG
  //   runtime_tag_levels: false
  logger_logger_id = new logger::Logger(115200, 512);
  logger_logger_id->create_pthread_key();
  logger_logger_id->init_log_buffer(768);
  logger_logger_id->set_log_level(ESPHOME_LOG_LEVEL_DEBUG);
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_USB_SERIAL_JTAG);
  logger_logger_id->pre_setup();
  logger_logger_id->set_log_level("interval", ESPHOME_LOG_LEVEL_NONE);
  logger_logger_id->set_log_level("binary_sensor", ESPHOME_LOG_LEVEL_NONE);
  logger_logger_id->set_component_source(LOG_STR("logger"));
  App.register_component(logger_logger_id);
  // web_server_base:
  //   id: web_server_base_webserverbase_id
  web_server_base_webserverbase_id = new web_server_base::WebServerBase();
  web_server_base_webserverbase_id->set_component_source(LOG_STR("web_server_base"));
  App.register_component(web_server_base_webserverbase_id);
  web_server_base::global_web_server_base = web_server_base_webserverbase_id;
  // wifi:
  //   networks:
  //     - ssid: Latent Spice
  //       password: bqsj123456
  //       priority: 0.0
  //       id: wifi_wifiap_id
  //     - ssid: bqsj-nono
  //       password: Qzpm!234..
  //       priority: 1.0
  //       id: wifi_wifiap_id_2
  //   power_save_mode: NONE
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   fast_connect: false
  //   enable_btm: false
  //   enable_rrm: false
  //   passive_scan: false
  //   enable_on_boot: true
  //   use_address: baros-slave.local
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("baros-slave.local");
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("Latent Spice");
  wifi_wifiap_id.set_password("bqsj123456");
  wifi_wifiap_id.set_priority(0.0f);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id);
  }
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("bqsj-nono");
  wifi_wifiap_id_2.set_password("Qzpm!234..");
  wifi_wifiap_id_2.set_priority(1.0f);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id_2);
  }
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent_id->set_fast_connect(false);
  wifi_wificomponent_id->set_passive_scan(false);
  wifi_wificomponent_id->set_enable_on_boot(true);
  wifi_wificomponent_id->set_component_source(LOG_STR("wifi"));
  App.register_component(wifi_wificomponent_id);
  // mdns:
  //   id: mdns_mdnscomponent_id
  //   disabled: false
  //   services: []
  mdns_mdnscomponent_id = new mdns::MDNSComponent();
  mdns_mdnscomponent_id->set_component_source(LOG_STR("mdns"));
  App.register_component(mdns_mdnscomponent_id);
  // ota:
  // ota.esphome:
  //   platform: esphome
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  esphome_esphomeotacomponent_id->set_component_source(LOG_STR("esphome.ota"));
  App.register_component(esphome_esphomeotacomponent_id);
  // safe_mode:
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  //   num_attempts: 10
  //   reboot_timeout: 5min
  safe_mode_safemodecomponent_id = new safe_mode::SafeModeComponent();
  safe_mode_safemodecomponent_id->set_component_source(LOG_STR("safe_mode"));
  App.register_component(safe_mode_safemodecomponent_id);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000)) return;
  // web_server:
  //   port: 80
  //   id: web_server_webserver_id
  //   version: 2
  //   enable_private_network_access: true
  //   web_server_base_id: web_server_base_webserverbase_id
  //   include_internal: false
  //   log: true
  //   css_url: ''
  //   js_url: https:oi.esphome.io/v2/www.js
  web_server_webserver_id = new web_server::WebServer(web_server_base_webserverbase_id);
  web_server_webserver_id->set_component_source(LOG_STR("web_server"));
  App.register_component(web_server_webserver_id);
  web_server_base_webserverbase_id->set_port(80);
  web_server_webserver_id->set_expose_log(true);
  web_server_webserver_id->set_include_internal(false);
  startuptrigger_id = new StartupTrigger(-100.0f);
  startuptrigger_id->set_component_source(LOG_STR("esphome.coroutine"));
  App.register_component(startuptrigger_id);
  automation_id = new Automation<>(startuptrigger_id);
  // json:
  //   {}
  // esp32:
  //   board: esp32-s3-devkitc-1
  //   framework:
  //     type: esp-idf
  //     version: 5.4.2
  //     sdkconfig_options: {}
  //     log_level: ERROR
  //     advanced:
  //       compiler_optimization: SIZE
  //       enable_lwip_assert: true
  //       ignore_efuse_custom_mac: false
  //       enable_lwip_mdns_queries: true
  //       enable_lwip_bridge_interface: false
  //       enable_lwip_tcpip_core_locking: true
  //       enable_lwip_check_thread_safety: true
  //     components: []
  //     platform_version: https:github.com/pioarduino/platform-espressif32/releases/download/54.03.21-2/platform-espressif32.zip
  //     source: pioarduino/framework-espidf@https:github.com/pioarduino/esp-idf/releases/download/v5.4.2/esp-idf-v5.4.2.zip
  //   flash_size: 4MB
  //   variant: ESP32S3
  //   cpu_frequency: 160MHZ
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   name: Wifi Status
  //   provider: baros
  //   remote_id: wifi_status_main
  //   internal: false
  //   id: wifi_status
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   type: data
  wifi_status = new binary_sensor::BinarySensor();
  App.register_binary_sensor(wifi_status);
  wifi_status->set_name("Wifi Status");
  wifi_status->set_object_id("wifi_status");
  wifi_status->set_disabled_by_default(false);
  wifi_status->set_internal(false);
  wifi_status->set_trigger_on_initial_state(false);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   name: Server Status
  //   provider: baros
  //   remote_id: server_status_main
  //   internal: false
  //   id: server_status
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   type: data
  server_status = new binary_sensor::BinarySensor();
  App.register_binary_sensor(server_status);
  server_status->set_name("Server Status");
  server_status->set_object_id("server_status");
  server_status->set_disabled_by_default(false);
  server_status->set_internal(false);
  server_status->set_trigger_on_initial_state(false);
  // binary_sensor.template:
  //   platform: template
  //   name: PI Started
  //   id: pi_started_slave
  //   on_press:
  //     - then:
  //         - script.execute:
  //             id: send_to_pi
  //             module: 255
  //             data1: 0
  //             data2: 0
  //           type_id: script_scriptexecuteaction_id
  //       automation_id: automation_id_2
  //       trigger_id: binary_sensor_presstrigger_id
  //   disabled_by_default: false
  pi_started_slave = new template_::TemplateBinarySensor();
  App.register_binary_sensor(pi_started_slave);
  pi_started_slave->set_name("PI Started");
  pi_started_slave->set_object_id("pi_started");
  pi_started_slave->set_disabled_by_default(false);
  pi_started_slave->set_trigger_on_initial_state(false);
  binary_sensor_presstrigger_id = new binary_sensor::PressTrigger(pi_started_slave);
  automation_id_2 = new Automation<>(binary_sensor_presstrigger_id);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   name: Recipe Pouring
  //   provider: baros
  //   remote_id: pouring
  //   internal: false
  //   on_press:
  //     - then:
  //         - script.execute:
  //             id: send_to_pi
  //             module: 0
  //             data1: 2
  //             data2: 1
  //           type_id: script_scriptexecuteaction_id_2
  //       automation_id: automation_id_3
  //       trigger_id: binary_sensor_presstrigger_id_2
  //   on_release:
  //     - then:
  //         - script.execute:
  //             id: send_to_pi
  //             module: 0
  //             data1: 2
  //             data2: 0
  //           type_id: script_scriptexecuteaction_id_3
  //       automation_id: automation_id_4
  //       trigger_id: binary_sensor_releasetrigger_id
  //   disabled_by_default: false
  //   id: binary_sensor_binarysensor_id
  //   transport_id: uart_uarttransport_id
  //   type: data
  binary_sensor_binarysensor_id = new binary_sensor::BinarySensor();
  App.register_binary_sensor(binary_sensor_binarysensor_id);
  binary_sensor_binarysensor_id->set_name("Recipe Pouring");
  binary_sensor_binarysensor_id->set_object_id("recipe_pouring");
  binary_sensor_binarysensor_id->set_disabled_by_default(false);
  binary_sensor_binarysensor_id->set_internal(false);
  binary_sensor_binarysensor_id->set_trigger_on_initial_state(false);
  binary_sensor_presstrigger_id_2 = new binary_sensor::PressTrigger(binary_sensor_binarysensor_id);
  automation_id_3 = new Automation<>(binary_sensor_presstrigger_id_2);
  // binary_sensor.template:
  //   platform: template
  //   name: Clean System
  //   id: clean_system_slave
  //   disabled_by_default: false
  clean_system_slave = new template_::TemplateBinarySensor();
  App.register_binary_sensor(clean_system_slave);
  clean_system_slave->set_name("Clean System");
  clean_system_slave->set_object_id("clean_system");
  clean_system_slave->set_disabled_by_default(false);
  clean_system_slave->set_trigger_on_initial_state(false);
  clean_system_slave->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(clean_system_slave);
  // binary_sensor.template:
  //   platform: template
  //   id: water_pump_slave_sensor
  //   lambda: !lambda |-
  //     return id(water_pump_slave_switch).state;
  //   on_press:
  //     - then:
  //         - switch.turn_on:
  //             id: water_pump_slave_switch
  //           type_id: switch__turnonaction_id
  //       automation_id: automation_id_5
  //       trigger_id: binary_sensor_presstrigger_id_3
  //   on_release:
  //     - then:
  //         - switch.turn_off:
  //             id: water_pump_slave_switch
  //           type_id: switch__turnoffaction_id
  //       automation_id: automation_id_6
  //       trigger_id: binary_sensor_releasetrigger_id_2
  //   disabled_by_default: false
  //   name: water_pump_slave_sensor
  //   internal: true
  water_pump_slave_sensor = new template_::TemplateBinarySensor();
  App.register_binary_sensor(water_pump_slave_sensor);
  water_pump_slave_sensor->set_name("water_pump_slave_sensor");
  water_pump_slave_sensor->set_object_id("water_pump_slave_sensor");
  water_pump_slave_sensor->set_disabled_by_default(false);
  water_pump_slave_sensor->set_internal(true);
  water_pump_slave_sensor->set_trigger_on_initial_state(false);
  binary_sensor_presstrigger_id_3 = new binary_sensor::PressTrigger(water_pump_slave_sensor);
  automation_id_5 = new Automation<>(binary_sensor_presstrigger_id_3);
  // binary_sensor.template:
  //   platform: template
  //   id: valve1_slave_sensor
  //   lambda: !lambda |-
  //     return id(valve1).state;
  //   on_press:
  //     - then:
  //         - switch.turn_on:
  //             id: valve1
  //           type_id: switch__turnonaction_id_2
  //       automation_id: automation_id_7
  //       trigger_id: binary_sensor_presstrigger_id_4
  //   on_release:
  //     - then:
  //         - switch.turn_off:
  //             id: valve1
  //           type_id: switch__turnoffaction_id_2
  //       automation_id: automation_id_8
  //       trigger_id: binary_sensor_releasetrigger_id_3
  //   disabled_by_default: false
  //   name: valve1_slave_sensor
  //   internal: true
  valve1_slave_sensor = new template_::TemplateBinarySensor();
  App.register_binary_sensor(valve1_slave_sensor);
  valve1_slave_sensor->set_name("valve1_slave_sensor");
  valve1_slave_sensor->set_object_id("valve1_slave_sensor");
  valve1_slave_sensor->set_disabled_by_default(false);
  valve1_slave_sensor->set_internal(true);
  valve1_slave_sensor->set_trigger_on_initial_state(false);
  binary_sensor_presstrigger_id_4 = new binary_sensor::PressTrigger(valve1_slave_sensor);
  automation_id_7 = new Automation<>(binary_sensor_presstrigger_id_4);
  // binary_sensor.template:
  //   platform: template
  //   id: valve2_slave_sensor
  //   lambda: !lambda |-
  //     return id(valve2).state;
  //   on_press:
  //     - then:
  //         - switch.turn_on:
  //             id: valve2
  //           type_id: switch__turnonaction_id_3
  //       automation_id: automation_id_9
  //       trigger_id: binary_sensor_presstrigger_id_5
  //   on_release:
  //     - then:
  //         - switch.turn_off:
  //             id: valve2
  //           type_id: switch__turnoffaction_id_3
  //       automation_id: automation_id_10
  //       trigger_id: binary_sensor_releasetrigger_id_4
  //   disabled_by_default: false
  //   name: valve2_slave_sensor
  //   internal: true
  valve2_slave_sensor = new template_::TemplateBinarySensor();
  App.register_binary_sensor(valve2_slave_sensor);
  valve2_slave_sensor->set_name("valve2_slave_sensor");
  valve2_slave_sensor->set_object_id("valve2_slave_sensor");
  valve2_slave_sensor->set_disabled_by_default(false);
  valve2_slave_sensor->set_internal(true);
  valve2_slave_sensor->set_trigger_on_initial_state(false);
  binary_sensor_presstrigger_id_5 = new binary_sensor::PressTrigger(valve2_slave_sensor);
  automation_id_9 = new Automation<>(binary_sensor_presstrigger_id_5);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 12
  //     inverted: true
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Tank4
  //   id: tank4_slave
  //   internal: false
  //   filters:
  //     - delayed_on: 900ms
  //       type_id: binary_sensor_delayedonfilter_id
  //   on_state:
  //     - then:
  //         - script.execute:
  //             id: send_to_pi
  //             module: 1
  //             data1: 4
  //             data2: !lambda |-
  //               return x;
  //           type_id: script_scriptexecuteaction_id_4
  //       automation_id: automation_id_11
  //       trigger_id: binary_sensor_statetrigger_id
  //   disabled_by_default: false
  //   use_interrupt: true
  //   interrupt_type: ANY
  tank4_slave = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(tank4_slave);
  tank4_slave->set_name("Tank4");
  tank4_slave->set_object_id("tank4");
  tank4_slave->set_disabled_by_default(false);
  tank4_slave->set_internal(false);
  tank4_slave->set_trigger_on_initial_state(false);
  binary_sensor_delayedonfilter_id = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedonfilter_id);
  binary_sensor_delayedonfilter_id->set_delay(900);
  tank4_slave->add_filters({binary_sensor_delayedonfilter_id});
  binary_sensor_statetrigger_id = new binary_sensor::StateTrigger(tank4_slave);
  automation_id_11 = new Automation<bool>(binary_sensor_statetrigger_id);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 11
  //     inverted: true
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_2
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Tank3
  //   id: tank3_slave
  //   internal: false
  //   filters:
  //     - delayed_on: 900ms
  //       type_id: binary_sensor_delayedonfilter_id_2
  //     - delayed_off: 100ms
  //       type_id: binary_sensor_delayedofffilter_id
  //   on_state:
  //     - then:
  //         - script.execute:
  //             id: send_to_pi
  //             module: 1
  //             data1: 3
  //             data2: !lambda |-
  //               return x;
  //           type_id: script_scriptexecuteaction_id_5
  //       automation_id: automation_id_12
  //       trigger_id: binary_sensor_statetrigger_id_2
  //   disabled_by_default: false
  //   use_interrupt: true
  //   interrupt_type: ANY
  tank3_slave = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(tank3_slave);
  tank3_slave->set_name("Tank3");
  tank3_slave->set_object_id("tank3");
  tank3_slave->set_disabled_by_default(false);
  tank3_slave->set_internal(false);
  tank3_slave->set_trigger_on_initial_state(false);
  binary_sensor_delayedonfilter_id_2 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_2->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedonfilter_id_2);
  binary_sensor_delayedonfilter_id_2->set_delay(900);
  binary_sensor_delayedofffilter_id = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id);
  binary_sensor_delayedofffilter_id->set_delay(100);
  tank3_slave->add_filters({binary_sensor_delayedonfilter_id_2, binary_sensor_delayedofffilter_id});
  binary_sensor_statetrigger_id_2 = new binary_sensor::StateTrigger(tank3_slave);
  automation_id_12 = new Automation<bool>(binary_sensor_statetrigger_id_2);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 10
  //     inverted: true
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_3
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Tank2
  //   id: tank2_slave
  //   internal: false
  //   filters:
  //     - delayed_on: 900ms
  //       type_id: binary_sensor_delayedonfilter_id_3
  //     - delayed_off: 100ms
  //       type_id: binary_sensor_delayedofffilter_id_2
  //   on_state:
  //     - then:
  //         - script.execute:
  //             id: send_to_pi
  //             module: 1
  //             data1: 2
  //             data2: !lambda |-
  //               return x;
  //           type_id: script_scriptexecuteaction_id_6
  //       automation_id: automation_id_13
  //       trigger_id: binary_sensor_statetrigger_id_3
  //   disabled_by_default: false
  //   use_interrupt: true
  //   interrupt_type: ANY
  tank2_slave = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(tank2_slave);
  tank2_slave->set_name("Tank2");
  tank2_slave->set_object_id("tank2");
  tank2_slave->set_disabled_by_default(false);
  tank2_slave->set_internal(false);
  tank2_slave->set_trigger_on_initial_state(false);
  binary_sensor_delayedonfilter_id_3 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_3->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedonfilter_id_3);
  binary_sensor_delayedonfilter_id_3->set_delay(900);
  binary_sensor_delayedofffilter_id_2 = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id_2->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id_2);
  binary_sensor_delayedofffilter_id_2->set_delay(100);
  tank2_slave->add_filters({binary_sensor_delayedonfilter_id_3, binary_sensor_delayedofffilter_id_2});
  binary_sensor_statetrigger_id_3 = new binary_sensor::StateTrigger(tank2_slave);
  automation_id_13 = new Automation<bool>(binary_sensor_statetrigger_id_3);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 9
  //     inverted: true
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_4
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Tank1
  //   id: tank1_slave
  //   internal: false
  //   filters:
  //     - delayed_on: 900ms
  //       type_id: binary_sensor_delayedonfilter_id_4
  //     - delayed_off: 100ms
  //       type_id: binary_sensor_delayedofffilter_id_3
  //   on_state:
  //     - then:
  //         - script.execute:
  //             id: send_to_pi
  //             module: 1
  //             data1: 1
  //             data2: !lambda |-
  //               return x;
  //           type_id: script_scriptexecuteaction_id_7
  //       automation_id: automation_id_14
  //       trigger_id: binary_sensor_statetrigger_id_4
  //   disabled_by_default: false
  //   use_interrupt: true
  //   interrupt_type: ANY
  tank1_slave = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(tank1_slave);
  tank1_slave->set_name("Tank1");
  tank1_slave->set_object_id("tank1");
  tank1_slave->set_disabled_by_default(false);
  tank1_slave->set_internal(false);
  tank1_slave->set_trigger_on_initial_state(false);
  binary_sensor_delayedonfilter_id_4 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_4->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedonfilter_id_4);
  binary_sensor_delayedonfilter_id_4->set_delay(900);
  binary_sensor_delayedofffilter_id_3 = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id_3->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id_3);
  binary_sensor_delayedofffilter_id_3->set_delay(100);
  tank1_slave->add_filters({binary_sensor_delayedonfilter_id_4, binary_sensor_delayedofffilter_id_3});
  binary_sensor_statetrigger_id_4 = new binary_sensor::StateTrigger(tank1_slave);
  automation_id_14 = new Automation<bool>(binary_sensor_statetrigger_id_4);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 13
  //     inverted: true
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_5
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Tank5
  //   id: tank5_slave
  //   internal: false
  //   filters:
  //     - delayed_on: 900ms
  //       type_id: binary_sensor_delayedonfilter_id_5
  //     - delayed_off: 100ms
  //       type_id: binary_sensor_delayedofffilter_id_4
  //   on_state:
  //     - then:
  //         - script.execute:
  //             id: send_to_pi
  //             module: 1
  //             data1: 5
  //             data2: !lambda |-
  //               return x;
  //           type_id: script_scriptexecuteaction_id_8
  //       automation_id: automation_id_15
  //       trigger_id: binary_sensor_statetrigger_id_5
  //   disabled_by_default: false
  //   use_interrupt: true
  //   interrupt_type: ANY
  tank5_slave = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(tank5_slave);
  tank5_slave->set_name("Tank5");
  tank5_slave->set_object_id("tank5");
  tank5_slave->set_disabled_by_default(false);
  tank5_slave->set_internal(false);
  tank5_slave->set_trigger_on_initial_state(false);
  binary_sensor_delayedonfilter_id_5 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_5->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedonfilter_id_5);
  binary_sensor_delayedonfilter_id_5->set_delay(900);
  binary_sensor_delayedofffilter_id_4 = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id_4->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id_4);
  binary_sensor_delayedofffilter_id_4->set_delay(100);
  tank5_slave->add_filters({binary_sensor_delayedonfilter_id_5, binary_sensor_delayedofffilter_id_4});
  binary_sensor_statetrigger_id_5 = new binary_sensor::StateTrigger(tank5_slave);
  automation_id_15 = new Automation<bool>(binary_sensor_statetrigger_id_5);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 14
  //     inverted: true
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_6
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Tank6
  //   id: tank6_slave
  //   internal: false
  //   filters:
  //     - delayed_on: 900ms
  //       type_id: binary_sensor_delayedonfilter_id_6
  //     - delayed_off: 100ms
  //       type_id: binary_sensor_delayedofffilter_id_5
  //   on_state:
  //     - then:
  //         - script.execute:
  //             id: send_to_pi
  //             module: 1
  //             data1: 6
  //             data2: !lambda |-
  //               return x;
  //           type_id: script_scriptexecuteaction_id_9
  //       automation_id: automation_id_16
  //       trigger_id: binary_sensor_statetrigger_id_6
  //   disabled_by_default: false
  //   use_interrupt: true
  //   interrupt_type: ANY
  tank6_slave = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(tank6_slave);
  tank6_slave->set_name("Tank6");
  tank6_slave->set_object_id("tank6");
  tank6_slave->set_disabled_by_default(false);
  tank6_slave->set_internal(false);
  tank6_slave->set_trigger_on_initial_state(false);
  binary_sensor_delayedonfilter_id_6 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_6->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedonfilter_id_6);
  binary_sensor_delayedonfilter_id_6->set_delay(900);
  binary_sensor_delayedofffilter_id_5 = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id_5->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id_5);
  binary_sensor_delayedofffilter_id_5->set_delay(100);
  tank6_slave->add_filters({binary_sensor_delayedonfilter_id_6, binary_sensor_delayedofffilter_id_5});
  binary_sensor_statetrigger_id_6 = new binary_sensor::StateTrigger(tank6_slave);
  automation_id_16 = new Automation<bool>(binary_sensor_statetrigger_id_6);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 21
  //     inverted: true
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_7
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Tank7
  //   id: tank7_slave
  //   internal: false
  //   filters:
  //     - delayed_on: 900ms
  //       type_id: binary_sensor_delayedonfilter_id_7
  //     - delayed_off: 100ms
  //       type_id: binary_sensor_delayedofffilter_id_6
  //   on_state:
  //     - then:
  //         - script.execute:
  //             id: send_to_pi
  //             module: 1
  //             data1: 7
  //             data2: !lambda |-
  //               return x;
  //           type_id: script_scriptexecuteaction_id_10
  //       automation_id: automation_id_17
  //       trigger_id: binary_sensor_statetrigger_id_7
  //   disabled_by_default: false
  //   use_interrupt: true
  //   interrupt_type: ANY
  tank7_slave = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(tank7_slave);
  tank7_slave->set_name("Tank7");
  tank7_slave->set_object_id("tank7");
  tank7_slave->set_disabled_by_default(false);
  tank7_slave->set_internal(false);
  tank7_slave->set_trigger_on_initial_state(false);
  binary_sensor_delayedonfilter_id_7 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_7->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedonfilter_id_7);
  binary_sensor_delayedonfilter_id_7->set_delay(900);
  binary_sensor_delayedofffilter_id_6 = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id_6->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id_6);
  binary_sensor_delayedofffilter_id_6->set_delay(100);
  tank7_slave->add_filters({binary_sensor_delayedonfilter_id_7, binary_sensor_delayedofffilter_id_6});
  binary_sensor_statetrigger_id_7 = new binary_sensor::StateTrigger(tank7_slave);
  automation_id_17 = new Automation<bool>(binary_sensor_statetrigger_id_7);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 47
  //     inverted: true
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_8
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Tank8
  //   id: tank8_slave
  //   internal: false
  //   filters:
  //     - delayed_on: 900ms
  //       type_id: binary_sensor_delayedonfilter_id_8
  //     - delayed_off: 100ms
  //       type_id: binary_sensor_delayedofffilter_id_7
  //   on_state:
  //     - then:
  //         - script.execute:
  //             id: send_to_pi
  //             module: 1
  //             data1: 8
  //             data2: !lambda |-
  //               return x;
  //           type_id: script_scriptexecuteaction_id_11
  //       automation_id: automation_id_18
  //       trigger_id: binary_sensor_statetrigger_id_8
  //   disabled_by_default: false
  //   use_interrupt: true
  //   interrupt_type: ANY
  tank8_slave = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(tank8_slave);
  tank8_slave->set_name("Tank8");
  tank8_slave->set_object_id("tank8");
  tank8_slave->set_disabled_by_default(false);
  tank8_slave->set_internal(false);
  tank8_slave->set_trigger_on_initial_state(false);
  binary_sensor_delayedonfilter_id_8 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_8->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedonfilter_id_8);
  binary_sensor_delayedonfilter_id_8->set_delay(900);
  binary_sensor_delayedofffilter_id_7 = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id_7->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id_7);
  binary_sensor_delayedofffilter_id_7->set_delay(100);
  tank8_slave->add_filters({binary_sensor_delayedonfilter_id_8, binary_sensor_delayedofffilter_id_7});
  binary_sensor_statetrigger_id_8 = new binary_sensor::StateTrigger(tank8_slave);
  automation_id_18 = new Automation<bool>(binary_sensor_statetrigger_id_8);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 39
  //     mode:
  //       input: true
  //       pulldown: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //     inverted: true
  //     id: esp32_esp32internalgpiopin_id_9
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Liquid1
  //   id: liquid1_slave
  //   internal: false
  //   filters:
  //     - delayed_on: 900ms
  //       type_id: binary_sensor_delayedonfilter_id_9
  //     - delayed_off: 100ms
  //       type_id: binary_sensor_delayedofffilter_id_8
  //   on_press:
  //     - then:
  //         - lambda: !lambda |-
  //             auto now = millis();
  //             id(liquid1_last_time) = now;
  //             ESP_LOGI("liquid1", "Liquid1 开启，记录时间: %lu ms", now);
  //           type_id: lambdaaction_id
  //         - logger.log:
  //             format: ' Liquid1 状态变化: 开启'
  //             level: INFO
  //             tag: main
  //             args: []
  //             logger_id: logger_logger_id
  //           type_id: lambdaaction_id_2
  //       automation_id: automation_id_19
  //       trigger_id: binary_sensor_presstrigger_id_6
  //   on_release:
  //     - then:
  //         - logger.log:
  //             format: ' Liquid1 状态变化: 关闭'
  //             level: INFO
  //             tag: main
  //             args: []
  //             logger_id: logger_logger_id
  //           type_id: lambdaaction_id_3
  //       automation_id: automation_id_20
  //       trigger_id: binary_sensor_releasetrigger_id_5
  //   disabled_by_default: false
  //   use_interrupt: true
  //   interrupt_type: ANY
  liquid1_slave = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(liquid1_slave);
  liquid1_slave->set_name("Liquid1");
  liquid1_slave->set_object_id("liquid1");
  liquid1_slave->set_disabled_by_default(false);
  liquid1_slave->set_internal(false);
  liquid1_slave->set_trigger_on_initial_state(false);
  binary_sensor_delayedonfilter_id_9 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_9->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedonfilter_id_9);
  binary_sensor_delayedonfilter_id_9->set_delay(900);
  binary_sensor_delayedofffilter_id_8 = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id_8->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id_8);
  binary_sensor_delayedofffilter_id_8->set_delay(100);
  liquid1_slave->add_filters({binary_sensor_delayedonfilter_id_9, binary_sensor_delayedofffilter_id_8});
  binary_sensor_presstrigger_id_6 = new binary_sensor::PressTrigger(liquid1_slave);
  automation_id_19 = new Automation<>(binary_sensor_presstrigger_id_6);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 38
  //     mode:
  //       input: true
  //       pulldown: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //     inverted: true
  //     id: esp32_esp32internalgpiopin_id_10
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Liquid2
  //   id: liquid2_slave
  //   internal: false
  //   filters:
  //     - delayed_on: 900ms
  //       type_id: binary_sensor_delayedonfilter_id_10
  //     - delayed_off: 100ms
  //       type_id: binary_sensor_delayedofffilter_id_9
  //   on_press:
  //     - then:
  //         - lambda: !lambda |-
  //             auto now = millis();
  //             id(liquid2_last_time) = now;
  //             ESP_LOGI("liquid2", "Liquid2 开启，记录时间: %lu ms", now);
  //           type_id: lambdaaction_id_4
  //         - logger.log:
  //             format: ' Liquid2 状态变化: 开启'
  //             level: INFO
  //             tag: main
  //             args: []
  //             logger_id: logger_logger_id
  //           type_id: lambdaaction_id_5
  //       automation_id: automation_id_21
  //       trigger_id: binary_sensor_presstrigger_id_7
  //   on_release:
  //     - then:
  //         - logger.log:
  //             format: ' Liquid2 状态变化: 关闭'
  //             level: INFO
  //             tag: main
  //             args: []
  //             logger_id: logger_logger_id
  //           type_id: lambdaaction_id_6
  //       automation_id: automation_id_22
  //       trigger_id: binary_sensor_releasetrigger_id_6
  //   disabled_by_default: false
  //   use_interrupt: true
  //   interrupt_type: ANY
  liquid2_slave = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(liquid2_slave);
  liquid2_slave->set_name("Liquid2");
  liquid2_slave->set_object_id("liquid2");
  liquid2_slave->set_disabled_by_default(false);
  liquid2_slave->set_internal(false);
  liquid2_slave->set_trigger_on_initial_state(false);
  binary_sensor_delayedonfilter_id_10 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_10->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedonfilter_id_10);
  binary_sensor_delayedonfilter_id_10->set_delay(900);
  binary_sensor_delayedofffilter_id_9 = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id_9->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id_9);
  binary_sensor_delayedofffilter_id_9->set_delay(100);
  liquid2_slave->add_filters({binary_sensor_delayedonfilter_id_10, binary_sensor_delayedofffilter_id_9});
  binary_sensor_presstrigger_id_7 = new binary_sensor::PressTrigger(liquid2_slave);
  automation_id_21 = new Automation<>(binary_sensor_presstrigger_id_7);
  // psram:
  //   mode: octal
  //   speed: 80MHZ
  //   id: psram_psramcomponent_id
  //   enable_ecc: false
  //   disabled: false
  psram_psramcomponent_id = new psram::PsramComponent();
  psram_psramcomponent_id->set_component_source(LOG_STR("psram"));
  App.register_component(psram_psramcomponent_id);
  // uart:
  //   id: uart_com
  //   tx_pin:
  //     number: 17
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_11
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   rx_pin:
  //     number: 18
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_12
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   baud_rate: 115200
  //   rx_buffer_size: 256
  //   rx_timeout: 2
  //   stop_bits: 1
  //   data_bits: 8
  //   parity: NONE
  uart_com = new uart::IDFUARTComponent();
  uart_com->set_component_source(LOG_STR("uart"));
  App.register_component(uart_com);
  uart_com->set_baud_rate(115200);
  esp32_esp32internalgpiopin_id_11 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_11->set_pin(::GPIO_NUM_17);
  esp32_esp32internalgpiopin_id_11->set_inverted(false);
  esp32_esp32internalgpiopin_id_11->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_11->set_flags(gpio::Flags::FLAG_OUTPUT);
  uart_com->set_tx_pin(esp32_esp32internalgpiopin_id_11);
  esp32_esp32internalgpiopin_id_12 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_12->set_pin(::GPIO_NUM_18);
  esp32_esp32internalgpiopin_id_12->set_inverted(false);
  esp32_esp32internalgpiopin_id_12->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_12->set_flags(gpio::Flags::FLAG_INPUT);
  uart_com->set_rx_pin(esp32_esp32internalgpiopin_id_12);
  uart_com->set_rx_buffer_size(256);
  uart_com->set_rx_full_threshold(114);
  uart_com->set_rx_timeout(2);
  uart_com->set_stop_bits(1);
  uart_com->set_data_bits(8);
  uart_com->set_parity(uart::UART_CONFIG_PARITY_NONE);
  // uart:
  //   id: uart_pi
  //   tx_pin:
  //     number: 19
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_13
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   rx_pin:
  //     number: 20
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_14
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   baud_rate: 9600
  //   debug:
  //     direction: BOTH
  //     dummy_receiver: true
  //     after:
  //       delimiter:
  //         - 0xAA
  //       bytes: 150
  //       timeout: 100ms
  //     sequence:
  //       - then:
  //           - lambda: !lambda "UARTDebug::log_string(direction, bytes);\nif (direction
  //               \ == UARTDirection::UART_DIRECTION_RX) {\n  if(bytes[0] == 0x0f && bytes[7]
  //               \ == 0xAA) {\n    uint8_t module = bytes[2];\n    uint16_t data1 = bytes[3]
  //               \ << 8 | bytes[4];\n    uint16_t data2 = bytes[5] << 8 | bytes[6];\n 
  //               \   if(module == 0 && data1 == 1 && data2 == 1) {\n      id(clean_system_slave).publish_state(true);\n
  //               \    }\n    if (module == 0xFF) {\n      id(pi_started_slave).publish_state(true);\n
  //               \    } \n  }\n}"
  //             type_id: lambdaaction_id_7
  //         trigger_id: trigger_id
  //         automation_id: automation_id_23
  //     trigger_id: uart_uartdebugger_id
  //     dummy_receiver_id: uart_uartdummyreceiver_id
  //   rx_buffer_size: 256
  //   rx_timeout: 2
  //   stop_bits: 1
  //   data_bits: 8
  //   parity: NONE
  uart_pi = new uart::IDFUARTComponent();
  uart_pi->set_component_source(LOG_STR("uart"));
  App.register_component(uart_pi);
  uart_pi->set_baud_rate(9600);
  esp32_esp32internalgpiopin_id_13 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_13->set_pin(::GPIO_NUM_19);
  esp32_esp32internalgpiopin_id_13->set_inverted(false);
  esp32_esp32internalgpiopin_id_13->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_13->set_flags(gpio::Flags::FLAG_OUTPUT);
  uart_pi->set_tx_pin(esp32_esp32internalgpiopin_id_13);
  esp32_esp32internalgpiopin_id_14 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_14->set_pin(::GPIO_NUM_20);
  esp32_esp32internalgpiopin_id_14->set_inverted(false);
  esp32_esp32internalgpiopin_id_14->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_14->set_flags(gpio::Flags::FLAG_INPUT);
  uart_pi->set_rx_pin(esp32_esp32internalgpiopin_id_14);
  uart_pi->set_rx_buffer_size(256);
  uart_pi->set_rx_full_threshold(8);
  uart_pi->set_rx_timeout(2);
  uart_pi->set_stop_bits(1);
  uart_pi->set_data_bits(8);
  uart_pi->set_parity(uart::UART_CONFIG_PARITY_NONE);
  uart_uartdebugger_id = new uart::UARTDebugger(uart_pi);
  uart_uartdebugger_id->set_component_source(LOG_STR("uart"));
  App.register_component(uart_uartdebugger_id);
  automation_id_23 = new Automation<uart::UARTDirection, std::vector<uint8_t>>(uart_uartdebugger_id);
  lambdaaction_id_7 = new LambdaAction<uart::UARTDirection, std::vector<uint8_t>>([=](uart::UARTDirection direction, std::vector<uint8_t> bytes) -> void {
      #line 115 "baros-slave2.yaml"
      UARTDebug::log_string(direction, bytes);
      if (direction == UARTDirection::UART_DIRECTION_RX) {
        if(bytes[0] == 0x0f && bytes[7] == 0xAA) {
          uint8_t module = bytes[2];
          uint16_t data1 = bytes[3] << 8 | bytes[4];
          uint16_t data2 = bytes[5] << 8 | bytes[6];
          if(module == 0 && data1 == 1 && data2 == 1) {
            clean_system_slave->publish_state(true);
          }
          if (module == 0xFF) {
            pi_started_slave->publish_state(true);
          } 
        }
      }
  });
  automation_id_23->add_actions({lambdaaction_id_7});
  uart_uartdebugger_id->set_direction(uart::UART_DIRECTION_BOTH);
  uart_uartdebugger_id->set_after_bytes(150);
  uart_uartdebugger_id->set_after_timeout(100);
  uart_uartdebugger_id->add_delimiter_byte(0xAA);
  uart_uartdummyreceiver_id = new uart::UARTDummyReceiver(uart_pi);
  uart_uartdummyreceiver_id->set_component_source(LOG_STR("uart"));
  App.register_component(uart_uartdummyreceiver_id);
  // packet_transport.uart:
  //   platform: uart
  //   uart_id: uart_com
  //   update_interval: 1s
  //   binary_sensors:
  //     - id: tank1_slave
  //     - id: tank2_slave
  //     - id: tank3_slave
  //     - id: tank4_slave
  //     - id: tank5_slave
  //     - id: tank6_slave
  //     - id: tank7_slave
  //     - id: tank8_slave
  //     - id: liquid1_slave
  //     - id: liquid2_slave
  //     - id: valve1_slave_sensor
  //     - id: valve2_slave_sensor
  //     - id: water_pump_slave_sensor
  //     - id: clean_system_slave
  //     - id: pi_started_slave
  //   rolling_code_enable: false
  //   ping_pong_enable: false
  //   ping_pong_recycle_time: 600s
  //   providers: []
  //   id: uart_uarttransport_id
  uart_uarttransport_id = new uart::UARTTransport();
  uart_uarttransport_id->set_platform_name("uart");
  uart_uarttransport_id->set_update_interval(1000);
  uart_uarttransport_id->set_component_source(LOG_STR("packet_transport"));
  App.register_component(uart_uarttransport_id);
  uart_uarttransport_id->set_rolling_code_enable(false);
  uart_uarttransport_id->set_ping_pong_enable(false);
  uart_uarttransport_id->set_ping_pong_recycle_time(600);
  uart_uarttransport_id->add_provider("baros");
  uart_uarttransport_id->add_binary_sensor("tank1_slave", tank1_slave);
  uart_uarttransport_id->add_binary_sensor("tank2_slave", tank2_slave);
  uart_uarttransport_id->add_binary_sensor("tank3_slave", tank3_slave);
  uart_uarttransport_id->add_binary_sensor("tank4_slave", tank4_slave);
  uart_uarttransport_id->add_binary_sensor("tank5_slave", tank5_slave);
  uart_uarttransport_id->add_binary_sensor("tank6_slave", tank6_slave);
  uart_uarttransport_id->add_binary_sensor("tank7_slave", tank7_slave);
  uart_uarttransport_id->add_binary_sensor("tank8_slave", tank8_slave);
  uart_uarttransport_id->add_binary_sensor("liquid1_slave", liquid1_slave);
  uart_uarttransport_id->add_binary_sensor("liquid2_slave", liquid2_slave);
  uart_uarttransport_id->add_binary_sensor("valve1_slave_sensor", valve1_slave_sensor);
  uart_uarttransport_id->add_binary_sensor("valve2_slave_sensor", valve2_slave_sensor);
  uart_uarttransport_id->add_binary_sensor("water_pump_slave_sensor", water_pump_slave_sensor);
  uart_uarttransport_id->add_binary_sensor("clean_system_slave", clean_system_slave);
  uart_uarttransport_id->add_binary_sensor("pi_started_slave", pi_started_slave);
  uart_uarttransport_id->set_uart_parent(uart_com);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 4
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_15
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   id: restart_master
  //   restore_mode: ALWAYS_ON
  //   disabled_by_default: false
  //   interlock_wait_time: 0ms
  //   name: restart_master
  //   internal: true
  restart_master = new gpio::GPIOSwitch();
  App.register_switch(restart_master);
  restart_master->set_name("restart_master");
  restart_master->set_object_id("restart_master");
  restart_master->set_disabled_by_default(false);
  restart_master->set_internal(true);
  restart_master->set_restore_mode(switch_::SWITCH_ALWAYS_ON);
  restart_master->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(restart_master);
  esp32_esp32internalgpiopin_id_15 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_15->set_pin(::GPIO_NUM_4);
  esp32_esp32internalgpiopin_id_15->set_inverted(false);
  esp32_esp32internalgpiopin_id_15->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_15->set_flags(gpio::Flags::FLAG_OUTPUT);
  restart_master->set_pin(esp32_esp32internalgpiopin_id_15);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 5
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_16
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: pump 水泵
  //   id: water_pump_slave_switch
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  water_pump_slave_switch = new gpio::GPIOSwitch();
  App.register_switch(water_pump_slave_switch);
  water_pump_slave_switch->set_name("pump \346\260\264\346\263\265");
  water_pump_slave_switch->set_object_id("pump___");
  water_pump_slave_switch->set_disabled_by_default(false);
  water_pump_slave_switch->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  water_pump_slave_switch->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(water_pump_slave_switch);
  esp32_esp32internalgpiopin_id_16 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_16->set_pin(::GPIO_NUM_5);
  esp32_esp32internalgpiopin_id_16->set_inverted(false);
  esp32_esp32internalgpiopin_id_16->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_16->set_flags(gpio::Flags::FLAG_OUTPUT);
  water_pump_slave_switch->set_pin(esp32_esp32internalgpiopin_id_16);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 48
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_17
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: 电解模块
  //   id: o3_en
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  o3_en = new gpio::GPIOSwitch();
  App.register_switch(o3_en);
  o3_en->set_name("\347\224\265\350\247\243\346\250\241\345\235\227");
  o3_en->set_object_id("____");
  o3_en->set_disabled_by_default(false);
  o3_en->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  o3_en->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(o3_en);
  esp32_esp32internalgpiopin_id_17 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_17->set_pin(::GPIO_NUM_48);
  esp32_esp32internalgpiopin_id_17->set_inverted(false);
  esp32_esp32internalgpiopin_id_17->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_17->set_flags(gpio::Flags::FLAG_OUTPUT);
  o3_en->set_pin(esp32_esp32internalgpiopin_id_17);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 1
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_18
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: 半导体1
  //   id: ice1
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  ice1 = new gpio::GPIOSwitch();
  App.register_switch(ice1);
  ice1->set_name("\345\215\212\345\257\274\344\275\2231");
  ice1->set_object_id("___1");
  ice1->set_disabled_by_default(false);
  ice1->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  ice1->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(ice1);
  esp32_esp32internalgpiopin_id_18 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_18->set_pin(::GPIO_NUM_1);
  esp32_esp32internalgpiopin_id_18->set_inverted(false);
  esp32_esp32internalgpiopin_id_18->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_18->set_flags(gpio::Flags::FLAG_OUTPUT);
  ice1->set_pin(esp32_esp32internalgpiopin_id_18);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 2
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_19
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: 半导体2
  //   id: ice2
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  ice2 = new gpio::GPIOSwitch();
  App.register_switch(ice2);
  ice2->set_name("\345\215\212\345\257\274\344\275\2232");
  ice2->set_object_id("___2");
  ice2->set_disabled_by_default(false);
  ice2->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  ice2->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(ice2);
  esp32_esp32internalgpiopin_id_19 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_19->set_pin(::GPIO_NUM_2);
  esp32_esp32internalgpiopin_id_19->set_inverted(false);
  esp32_esp32internalgpiopin_id_19->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_19->set_flags(gpio::Flags::FLAG_OUTPUT);
  ice2->set_pin(esp32_esp32internalgpiopin_id_19);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 45
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_20
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Valve 1
  //   id: valve1
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  valve1 = new gpio::GPIOSwitch();
  App.register_switch(valve1);
  valve1->set_name("Valve 1");
  valve1->set_object_id("valve_1");
  valve1->set_disabled_by_default(false);
  valve1->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  valve1->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(valve1);
  esp32_esp32internalgpiopin_id_20 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_20->set_pin(::GPIO_NUM_45);
  esp32_esp32internalgpiopin_id_20->set_inverted(false);
  esp32_esp32internalgpiopin_id_20->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_20->set_flags(gpio::Flags::FLAG_OUTPUT);
  valve1->set_pin(esp32_esp32internalgpiopin_id_20);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 46
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_21
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Valve 2
  //   id: valve2
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  valve2 = new gpio::GPIOSwitch();
  App.register_switch(valve2);
  valve2->set_name("Valve 2");
  valve2->set_object_id("valve_2");
  valve2->set_disabled_by_default(false);
  valve2->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  valve2->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(valve2);
  esp32_esp32internalgpiopin_id_21 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_21->set_pin(::GPIO_NUM_46);
  esp32_esp32internalgpiopin_id_21->set_inverted(false);
  esp32_esp32internalgpiopin_id_21->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_21->set_flags(gpio::Flags::FLAG_OUTPUT);
  valve2->set_pin(esp32_esp32internalgpiopin_id_21);
  // output:
  // output.ledc:
  //   platform: ledc
  //   id: fridge_fan1_output
  //   frequency: 5000.0
  //   pin:
  //     number: 42
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_22
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   zero_means_zero: false
  esp32_esp32internalgpiopin_id_22 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_22->set_pin(::GPIO_NUM_42);
  esp32_esp32internalgpiopin_id_22->set_inverted(false);
  esp32_esp32internalgpiopin_id_22->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_22->set_flags(gpio::Flags::FLAG_OUTPUT);
  fridge_fan1_output = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_22);
  fridge_fan1_output->set_component_source(LOG_STR("ledc.output"));
  App.register_component(fridge_fan1_output);
  fridge_fan1_output->set_zero_means_zero(false);
  fridge_fan1_output->set_frequency(5000.0f);
  // output.ledc:
  //   platform: ledc
  //   id: fridge_fan2_output
  //   frequency: 5000.0
  //   pin:
  //     number: 41
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_23
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   zero_means_zero: false
  esp32_esp32internalgpiopin_id_23 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_23->set_pin(::GPIO_NUM_41);
  esp32_esp32internalgpiopin_id_23->set_inverted(false);
  esp32_esp32internalgpiopin_id_23->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_23->set_flags(gpio::Flags::FLAG_OUTPUT);
  fridge_fan2_output = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_23);
  fridge_fan2_output->set_component_source(LOG_STR("ledc.output"));
  App.register_component(fridge_fan2_output);
  fridge_fan2_output->set_zero_means_zero(false);
  fridge_fan2_output->set_frequency(5000.0f);
  // output.ledc:
  //   platform: ledc
  //   id: exhaust_fan_output
  //   frequency: 5000.0
  //   pin:
  //     number: 40
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_24
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   zero_means_zero: false
  esp32_esp32internalgpiopin_id_24 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_24->set_pin(::GPIO_NUM_40);
  esp32_esp32internalgpiopin_id_24->set_inverted(false);
  esp32_esp32internalgpiopin_id_24->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_24->set_flags(gpio::Flags::FLAG_OUTPUT);
  exhaust_fan_output = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_24);
  exhaust_fan_output->set_component_source(LOG_STR("ledc.output"));
  App.register_component(exhaust_fan_output);
  exhaust_fan_output->set_zero_means_zero(false);
  exhaust_fan_output->set_frequency(5000.0f);
  // fan.speed:
  //   platform: speed
  //   output: fridge_fan1_output
  //   name: 冰箱风扇1
  //   id: fridge_fan1
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   speed_count: 100
  fridge_fan1 = new speed::SpeedFan(100);
  App.register_fan(fridge_fan1);
  fridge_fan1->set_name("\345\206\260\347\256\261\351\243\216\346\211\2071");
  fridge_fan1->set_object_id("____1");
  fridge_fan1->set_disabled_by_default(false);
  fridge_fan1->set_restore_mode(fan::FanRestoreMode::ALWAYS_OFF);
  fridge_fan1->set_component_source(LOG_STR("speed.fan"));
  App.register_component(fridge_fan1);
  fridge_fan1->set_output(fridge_fan1_output);
  // fan.speed:
  //   platform: speed
  //   output: exhaust_fan_output
  //   name: 散热风扇
  //   id: exhaust_fan
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   speed_count: 100
  exhaust_fan = new speed::SpeedFan(100);
  App.register_fan(exhaust_fan);
  exhaust_fan->set_name("\346\225\243\347\203\255\351\243\216\346\211\207");
  exhaust_fan->set_object_id("____");
  exhaust_fan->set_disabled_by_default(false);
  exhaust_fan->set_restore_mode(fan::FanRestoreMode::ALWAYS_OFF);
  exhaust_fan->set_component_source(LOG_STR("speed.fan"));
  App.register_component(exhaust_fan);
  exhaust_fan->set_output(exhaust_fan_output);
  // light.esp32_rmt_led_strip:
  //   platform: esp32_rmt_led_strip
  //   id: led_rgb2
  //   name: 底座LED
  //   rgb_order: RGB
  //   pin: 15
  //   num_leds: 30
  //   use_psram: false
  //   rmt_symbols: 96
  //   bit0_high: 300ns
  //   bit1_high: 790ns
  //   bit0_low: 790ns
  //   bit1_low: 790ns
  //   reset_low: 320us
  //   on_turn_on:
  //     - then:
  //         - light.turn_on:
  //             id: led_rgb2
  //             red: 0.598
  //             green: 0.688
  //             blue: 1.0
  //             brightness: 1.0
  //             state: true
  //           type_id: light_lightcontrolaction_id_2
  //       automation_id: automation_id_24
  //       trigger_id: light_lightturnontrigger_id
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   flash_transition_length: 0s
  //   output_id: esp32_rmt_led_strip_esp32rmtledstriplightoutput_id
  //   is_rgbw: false
  //   is_wrgb: false
  //   reset_high: 0us
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id = new esp32_rmt_led_strip::ESP32RMTLEDStripLightOutput();
  led_rgb2 = new light::AddressableLightState(esp32_rmt_led_strip_esp32rmtledstriplightoutput_id);
  App.register_light(led_rgb2);
  led_rgb2->set_component_source(LOG_STR("light"));
  App.register_component(led_rgb2);
  led_rgb2->set_name("\345\272\225\345\272\247LED");
  led_rgb2->set_object_id("__led");
  led_rgb2->set_disabled_by_default(false);
  led_rgb2->set_restore_mode(light::LIGHT_ALWAYS_OFF);
  led_rgb2->set_default_transition_length(1000);
  led_rgb2->set_flash_transition_length(0);
  led_rgb2->set_gamma_correct(2.8f);
  led_rgb2->add_effects({});
  light_lightturnontrigger_id = new light::LightTurnOnTrigger(led_rgb2);
  automation_id_24 = new Automation<>(light_lightturnontrigger_id);
  light_lightcontrolaction_id_2 = new light::LightControlAction<>(led_rgb2);
  light_lightcontrolaction_id_2->set_state(true);
  light_lightcontrolaction_id_2->set_brightness(1.0f);
  light_lightcontrolaction_id_2->set_red(0.598f);
  light_lightcontrolaction_id_2->set_green(0.688f);
  light_lightcontrolaction_id_2->set_blue(1.0f);
  automation_id_24->add_actions({light_lightcontrolaction_id_2});
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_component_source(LOG_STR("esp32_rmt_led_strip.light"));
  App.register_component(esp32_rmt_led_strip_esp32rmtledstriplightoutput_id);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_num_leds(30);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_pin(15);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_led_params(300, 790, 790, 790, 0, 320000);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_rgb_order(esp32_rmt_led_strip::ORDER_RGB);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_is_rgbw(false);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_is_wrgb(false);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_use_psram(false);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_rmt_symbols(96);
  // script:
  //   - id: send_to_pi
  //     mode: queued
  //     parameters:
  //       module: uint8_t
  //       data1: uint16_t
  //       data2: uint16_t
  //     then:
  //       - logger.log:
  //           format: 'Sending to PI: module=%d, data1=%d, data2=%d'
  //           level: INFO
  //           args:
  //             - !lambda |-
  //               module
  //             - !lambda |-
  //               data1
  //             - !lambda |-
  //               data2
  //           tag: main
  //           logger_id: logger_logger_id
  //         type_id: lambdaaction_id_8
  //       - delay: 100ms
  //         type_id: delayaction_id_2
  //       - lambda: !lambda "uint8_t frame[8] = {\n  0x0f, 0x00, \n  module,\n  (uint8_t)((data1
  //           \ >> 8) & 0xff),\n  (uint8_t)(data1 & 0xff),\n  (uint8_t)((data2 >> 8) & 0xff),\n
  //           \  (uint8_t)(data2 & 0xff),\n  0xAA\n};\nid(uart_pi).write_array(frame, 8);"
  //         type_id: lambdaaction_id_9
  //     trigger_id: trigger_id_2
  //     automation_id: automation_id_25
  //   - id: update_all_tank_status
  //     mode: single
  //     then:
  //       - script.execute:
  //           id: send_to_pi
  //           module: 1
  //           data1: 1
  //           data2: !lambda |-
  //             return id(tank1_slave).state;
  //         type_id: script_scriptexecuteaction_id_12
  //       - script.execute:
  //           id: send_to_pi
  //           module: 1
  //           data1: 2
  //           data2: !lambda |-
  //             return id(tank2_slave).state;
  //         type_id: script_scriptexecuteaction_id_13
  //       - script.execute:
  //           id: send_to_pi
  //           module: 1
  //           data1: 3
  //           data2: !lambda |-
  //             return id(tank3_slave).state;
  //         type_id: script_scriptexecuteaction_id_14
  //       - script.execute:
  //           id: send_to_pi
  //           module: 1
  //           data1: 4
  //           data2: !lambda |-
  //             return id(tank4_slave).state;
  //         type_id: script_scriptexecuteaction_id_15
  //       - script.execute:
  //           id: send_to_pi
  //           module: 1
  //           data1: 5
  //           data2: !lambda |-
  //             return id(tank5_slave).state;
  //         type_id: script_scriptexecuteaction_id_16
  //       - script.execute:
  //           id: send_to_pi
  //           module: 1
  //           data1: 6
  //           data2: !lambda |-
  //             return id(tank6_slave).state;
  //         type_id: script_scriptexecuteaction_id_17
  //       - script.execute:
  //           id: send_to_pi
  //           module: 1
  //           data1: 7
  //           data2: !lambda |-
  //             return id(tank7_slave).state;
  //         type_id: script_scriptexecuteaction_id_18
  //     trigger_id: trigger_id_3
  //     automation_id: automation_id_26
  //     parameters: {}
  send_to_pi = new script::QueueingScript<uint8_t, uint16_t, uint16_t>();
  send_to_pi->set_name(LOG_STR("send_to_pi"));
  send_to_pi->set_component_source(LOG_STR("script"));
  App.register_component(send_to_pi);
  update_all_tank_status = new script::SingleScript<>();
  update_all_tank_status->set_name(LOG_STR("update_all_tank_status"));
  automation_id_25 = new Automation<uint8_t, uint16_t, uint16_t>(send_to_pi);
  lambdaaction_id_8 = new LambdaAction<uint8_t, uint16_t, uint16_t>([=](uint8_t module, uint16_t data1, uint16_t data2) -> void {
      ESP_LOGI("main", "Sending to PI: module=%d, data1=%d, data2=%d", module, data1, data2);
  });
  delayaction_id_2 = new DelayAction<uint8_t, uint16_t, uint16_t>();
  delayaction_id_2->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_2);
  delayaction_id_2->set_delay(100);
  lambdaaction_id_9 = new LambdaAction<uint8_t, uint16_t, uint16_t>([=](uint8_t module, uint16_t data1, uint16_t data2) -> void {
      #line 483 "baros-slave2.yaml"
      uint8_t frame[8] = {
        0x0f, 0x00, 
        module,
        (uint8_t)((data1 >> 8) & 0xff),
        (uint8_t)(data1 & 0xff),
        (uint8_t)((data2 >> 8) & 0xff),
        (uint8_t)(data2 & 0xff),
        0xAA
      };
      uart_pi->write_array(frame, 8);
  });
  automation_id_25->add_actions({lambdaaction_id_8, delayaction_id_2, lambdaaction_id_9});
  automation_id_26 = new Automation<>(update_all_tank_status);
  script_scriptexecuteaction_id_12 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>>(send_to_pi);
  script_scriptexecuteaction_id_12->set_args(1, 1, [=]() -> uint16_t {
      #line 501 "baros-slave2.yaml"
      return tank1_slave->state;
  });
  script_scriptexecuteaction_id_13 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>>(send_to_pi);
  script_scriptexecuteaction_id_13->set_args(1, 2, [=]() -> uint16_t {
      #line 506 "baros-slave2.yaml"
      return tank2_slave->state;
  });
  script_scriptexecuteaction_id_14 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>>(send_to_pi);
  script_scriptexecuteaction_id_14->set_args(1, 3, [=]() -> uint16_t {
      #line 511 "baros-slave2.yaml"
      return tank3_slave->state;
  });
  script_scriptexecuteaction_id_15 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>>(send_to_pi);
  script_scriptexecuteaction_id_15->set_args(1, 4, [=]() -> uint16_t {
      #line 516 "baros-slave2.yaml"
      return tank4_slave->state;
  });
  script_scriptexecuteaction_id_16 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>>(send_to_pi);
  script_scriptexecuteaction_id_16->set_args(1, 5, [=]() -> uint16_t {
      #line 521 "baros-slave2.yaml"
      return tank5_slave->state;
  });
  script_scriptexecuteaction_id_17 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>>(send_to_pi);
  script_scriptexecuteaction_id_17->set_args(1, 6, [=]() -> uint16_t {
      #line 526 "baros-slave2.yaml"
      return tank6_slave->state;
  });
  script_scriptexecuteaction_id_18 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>>(send_to_pi);
  script_scriptexecuteaction_id_18->set_args(1, 7, [=]() -> uint16_t {
      #line 531 "baros-slave2.yaml"
      return tank7_slave->state;
  });
  automation_id_26->add_actions({script_scriptexecuteaction_id_12, script_scriptexecuteaction_id_13, script_scriptexecuteaction_id_14, script_scriptexecuteaction_id_15, script_scriptexecuteaction_id_16, script_scriptexecuteaction_id_17, script_scriptexecuteaction_id_18});
  // button.template:
  //   platform: template
  //   name: 重启主MCU
  //   on_press:
  //     - then:
  //         - switch.turn_off:
  //             id: restart_master
  //           type_id: switch__turnoffaction_id_4
  //         - delay: 500ms
  //           type_id: delayaction_id_3
  //         - switch.turn_on:
  //             id: restart_master
  //           type_id: switch__turnonaction_id_4
  //       automation_id: automation_id_27
  //       trigger_id: button_buttonpresstrigger_id
  //   disabled_by_default: false
  //   id: template__templatebutton_id
  template__templatebutton_id = new template_::TemplateButton();
  App.register_button(template__templatebutton_id);
  template__templatebutton_id->set_name("\351\207\215\345\220\257\344\270\273MCU");
  template__templatebutton_id->set_object_id("___mcu");
  template__templatebutton_id->set_disabled_by_default(false);
  button_buttonpresstrigger_id = new button::ButtonPressTrigger(template__templatebutton_id);
  automation_id_27 = new Automation<>(button_buttonpresstrigger_id);
  switch__turnoffaction_id_4 = new switch_::TurnOffAction<>(restart_master);
  delayaction_id_3 = new DelayAction<>();
  delayaction_id_3->set_component_source(LOG_STR("button"));
  App.register_component(delayaction_id_3);
  delayaction_id_3->set_delay(500);
  switch__turnonaction_id_4 = new switch_::TurnOnAction<>(restart_master);
  automation_id_27->add_actions({switch__turnoffaction_id_4, delayaction_id_3, switch__turnonaction_id_4});
  // button.template:
  //   platform: template
  //   name: Test UART
  //   on_press:
  //     - then:
  //         - logger.log:
  //             format: Test UART
  //             tag: main
  //             args: []
  //             logger_id: logger_logger_id
  //             level: DEBUG
  //           type_id: lambdaaction_id_10
  //         - script.execute:
  //             id: send_to_pi
  //             module: 1
  //             data1: 3
  //             data2: 0
  //           type_id: script_scriptexecuteaction_id_19
  //       automation_id: automation_id_28
  //       trigger_id: button_buttonpresstrigger_id_2
  //   disabled_by_default: false
  //   id: template__templatebutton_id_2
  template__templatebutton_id_2 = new template_::TemplateButton();
  App.register_button(template__templatebutton_id_2);
  template__templatebutton_id_2->set_name("Test UART");
  template__templatebutton_id_2->set_object_id("test_uart");
  template__templatebutton_id_2->set_disabled_by_default(false);
  button_buttonpresstrigger_id_2 = new button::ButtonPressTrigger(template__templatebutton_id_2);
  automation_id_28 = new Automation<>(button_buttonpresstrigger_id_2);
  lambdaaction_id_10 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Test UART");
  });
  script_scriptexecuteaction_id_19 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>>(send_to_pi);
  script_scriptexecuteaction_id_19->set_args(1, 3, 0);
  automation_id_28->add_actions({lambdaaction_id_10, script_scriptexecuteaction_id_19});
  // button.template:
  //   platform: template
  //   name: Test MP4
  //   on_press:
  //     - then:
  //         - script.execute:
  //             id: send_to_pi
  //             module: 0
  //             data1: 2
  //             data2: 1
  //           type_id: script_scriptexecuteaction_id_20
  //         - delay: 5s
  //           type_id: delayaction_id_4
  //         - script.execute:
  //             id: send_to_pi
  //             module: 0
  //             data1: 2
  //             data2: 0
  //           type_id: script_scriptexecuteaction_id_21
  //       automation_id: automation_id_29
  //       trigger_id: button_buttonpresstrigger_id_3
  //   disabled_by_default: false
  //   id: template__templatebutton_id_3
  template__templatebutton_id_3 = new template_::TemplateButton();
  App.register_button(template__templatebutton_id_3);
  template__templatebutton_id_3->set_name("Test MP4");
  template__templatebutton_id_3->set_object_id("test_mp4");
  template__templatebutton_id_3->set_disabled_by_default(false);
  button_buttonpresstrigger_id_3 = new button::ButtonPressTrigger(template__templatebutton_id_3);
  automation_id_29 = new Automation<>(button_buttonpresstrigger_id_3);
  script_scriptexecuteaction_id_20 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>>(send_to_pi);
  script_scriptexecuteaction_id_20->set_args(0, 2, 1);
  delayaction_id_4 = new DelayAction<>();
  delayaction_id_4->set_component_source(LOG_STR("button"));
  App.register_component(delayaction_id_4);
  delayaction_id_4->set_delay(5000);
  script_scriptexecuteaction_id_21 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>>(send_to_pi);
  script_scriptexecuteaction_id_21->set_args(0, 2, 0);
  automation_id_29->add_actions({script_scriptexecuteaction_id_20, delayaction_id_4, script_scriptexecuteaction_id_21});
  // interval:
  //   - interval: 30s
  //     then:
  //       - script.execute:
  //           id: update_all_tank_status
  //         type_id: script_scriptexecuteaction_id_22
  //     trigger_id: trigger_id_4
  //     automation_id: automation_id_30
  //     id: interval_intervaltrigger_id
  //     startup_delay: 0s
  interval_intervaltrigger_id = new interval::IntervalTrigger();
  interval_intervaltrigger_id->set_component_source(LOG_STR("interval"));
  App.register_component(interval_intervaltrigger_id);
  automation_id_30 = new Automation<>(interval_intervaltrigger_id);
  script_scriptexecuteaction_id_22 = new script::ScriptExecuteAction<script::Script<>>(update_all_tank_status);
  script_scriptexecuteaction_id_22->set_args();
  automation_id_30->add_actions({script_scriptexecuteaction_id_22});
  interval_intervaltrigger_id->set_update_interval(30000);
  interval_intervaltrigger_id->set_startup_delay(0);
  // preferences:
  //   id: preferences_intervalsyncer_id
  //   flash_write_interval: 60s
  preferences_intervalsyncer_id = new preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  preferences_intervalsyncer_id->set_component_source(LOG_STR("preferences"));
  App.register_component(preferences_intervalsyncer_id);
  // md5:
  // socket:
  //   implementation: bsd_sockets
  // sha256:
  //   {}
  // web_server_idf:
  //   {}
  binary_sensor_binarysensorpublishaction_id = new binary_sensor::BinarySensorPublishAction<>(clean_system_slave);
  binary_sensor_binarysensorpublishaction_id->set_state(false);
  binary_sensor_binarysensorpublishaction_id_2 = new binary_sensor::BinarySensorPublishAction<>(pi_started_slave);
  binary_sensor_binarysensorpublishaction_id_2->set_state(false);
  delayaction_id = new DelayAction<>();
  delayaction_id->set_component_source(LOG_STR("esphome.coroutine"));
  App.register_component(delayaction_id);
  delayaction_id->set_delay(3000);
  light_lightcontrolaction_id = new light::LightControlAction<>(led_rgb2);
  light_lightcontrolaction_id->set_state(true);
  automation_id->add_actions({binary_sensor_binarysensorpublishaction_id, binary_sensor_binarysensorpublishaction_id_2, delayaction_id, light_lightcontrolaction_id});
  uart_uarttransport_id->add_remote_binary_sensor("baros", "wifi_status_main", wifi_status);
  uart_uarttransport_id->add_remote_binary_sensor("baros", "server_status_main", server_status);
  script_scriptexecuteaction_id = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>>(send_to_pi);
  script_scriptexecuteaction_id->set_args(255, 0, 0);
  automation_id_2->add_actions({script_scriptexecuteaction_id});
  pi_started_slave->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(pi_started_slave);
  script_scriptexecuteaction_id_2 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>>(send_to_pi);
  script_scriptexecuteaction_id_2->set_args(0, 2, 1);
  automation_id_3->add_actions({script_scriptexecuteaction_id_2});
  binary_sensor_releasetrigger_id = new binary_sensor::ReleaseTrigger(binary_sensor_binarysensor_id);
  automation_id_4 = new Automation<>(binary_sensor_releasetrigger_id);
  script_scriptexecuteaction_id_3 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>>(send_to_pi);
  script_scriptexecuteaction_id_3->set_args(0, 2, 0);
  automation_id_4->add_actions({script_scriptexecuteaction_id_3});
  uart_uarttransport_id->add_remote_binary_sensor("baros", "pouring", binary_sensor_binarysensor_id);
  switch__turnonaction_id = new switch_::TurnOnAction<>(water_pump_slave_switch);
  automation_id_5->add_actions({switch__turnonaction_id});
  binary_sensor_releasetrigger_id_2 = new binary_sensor::ReleaseTrigger(water_pump_slave_sensor);
  automation_id_6 = new Automation<>(binary_sensor_releasetrigger_id_2);
  switch__turnoffaction_id = new switch_::TurnOffAction<>(water_pump_slave_switch);
  automation_id_6->add_actions({switch__turnoffaction_id});
  water_pump_slave_sensor->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(water_pump_slave_sensor);
  water_pump_slave_sensor->set_template([=]() -> esphome::optional<bool> {
      #line 244 "baros-slave2.yaml"
      return water_pump_slave_switch->state;
  });
  switch__turnonaction_id_2 = new switch_::TurnOnAction<>(valve1);
  automation_id_7->add_actions({switch__turnonaction_id_2});
  binary_sensor_releasetrigger_id_3 = new binary_sensor::ReleaseTrigger(valve1_slave_sensor);
  automation_id_8 = new Automation<>(binary_sensor_releasetrigger_id_3);
  switch__turnoffaction_id_2 = new switch_::TurnOffAction<>(valve1);
  automation_id_8->add_actions({switch__turnoffaction_id_2});
  valve1_slave_sensor->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(valve1_slave_sensor);
  valve1_slave_sensor->set_template([=]() -> esphome::optional<bool> {
      #line 253 "baros-slave2.yaml"
      return valve1->state;
  });
  switch__turnonaction_id_3 = new switch_::TurnOnAction<>(valve2);
  automation_id_9->add_actions({switch__turnonaction_id_3});
  binary_sensor_releasetrigger_id_4 = new binary_sensor::ReleaseTrigger(valve2_slave_sensor);
  automation_id_10 = new Automation<>(binary_sensor_releasetrigger_id_4);
  switch__turnoffaction_id_3 = new switch_::TurnOffAction<>(valve2);
  automation_id_10->add_actions({switch__turnoffaction_id_3});
  valve2_slave_sensor->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(valve2_slave_sensor);
  valve2_slave_sensor->set_template([=]() -> esphome::optional<bool> {
      #line 262 "baros-slave2.yaml"
      return valve2->state;
  });
  script_scriptexecuteaction_id_4 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool>(send_to_pi);
  script_scriptexecuteaction_id_4->set_args(1, 4, [=](bool x) -> uint16_t {
      #line 283 "baros-slave2.yaml"
      return x;
  });
  automation_id_11->add_actions({script_scriptexecuteaction_id_4});
  tank4_slave->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(tank4_slave);
  esp32_esp32internalgpiopin_id = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_12);
  esp32_esp32internalgpiopin_id->set_inverted(true);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_INPUT);
  tank4_slave->set_pin(esp32_esp32internalgpiopin_id);
  tank4_slave->set_use_interrupt(true);
  tank4_slave->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  script_scriptexecuteaction_id_5 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool>(send_to_pi);
  script_scriptexecuteaction_id_5->set_args(1, 3, [=](bool x) -> uint16_t {
      #line 301 "baros-slave2.yaml"
      return x;
  });
  automation_id_12->add_actions({script_scriptexecuteaction_id_5});
  tank3_slave->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(tank3_slave);
  esp32_esp32internalgpiopin_id_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_2->set_pin(::GPIO_NUM_11);
  esp32_esp32internalgpiopin_id_2->set_inverted(true);
  esp32_esp32internalgpiopin_id_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_2->set_flags(gpio::Flags::FLAG_INPUT);
  tank3_slave->set_pin(esp32_esp32internalgpiopin_id_2);
  tank3_slave->set_use_interrupt(true);
  tank3_slave->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  script_scriptexecuteaction_id_6 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool>(send_to_pi);
  script_scriptexecuteaction_id_6->set_args(1, 2, [=](bool x) -> uint16_t {
      #line 319 "baros-slave2.yaml"
      return x;
  });
  automation_id_13->add_actions({script_scriptexecuteaction_id_6});
  tank2_slave->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(tank2_slave);
  esp32_esp32internalgpiopin_id_3 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_3->set_pin(::GPIO_NUM_10);
  esp32_esp32internalgpiopin_id_3->set_inverted(true);
  esp32_esp32internalgpiopin_id_3->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_3->set_flags(gpio::Flags::FLAG_INPUT);
  tank2_slave->set_pin(esp32_esp32internalgpiopin_id_3);
  tank2_slave->set_use_interrupt(true);
  tank2_slave->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  script_scriptexecuteaction_id_7 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool>(send_to_pi);
  script_scriptexecuteaction_id_7->set_args(1, 1, [=](bool x) -> uint16_t {
      #line 337 "baros-slave2.yaml"
      return x;
  });
  automation_id_14->add_actions({script_scriptexecuteaction_id_7});
  tank1_slave->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(tank1_slave);
  esp32_esp32internalgpiopin_id_4 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_4->set_pin(::GPIO_NUM_9);
  esp32_esp32internalgpiopin_id_4->set_inverted(true);
  esp32_esp32internalgpiopin_id_4->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_4->set_flags(gpio::Flags::FLAG_INPUT);
  tank1_slave->set_pin(esp32_esp32internalgpiopin_id_4);
  tank1_slave->set_use_interrupt(true);
  tank1_slave->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  script_scriptexecuteaction_id_8 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool>(send_to_pi);
  script_scriptexecuteaction_id_8->set_args(1, 5, [=](bool x) -> uint16_t {
      #line 355 "baros-slave2.yaml"
      return x;
  });
  automation_id_15->add_actions({script_scriptexecuteaction_id_8});
  tank5_slave->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(tank5_slave);
  esp32_esp32internalgpiopin_id_5 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_5->set_pin(::GPIO_NUM_13);
  esp32_esp32internalgpiopin_id_5->set_inverted(true);
  esp32_esp32internalgpiopin_id_5->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_5->set_flags(gpio::Flags::FLAG_INPUT);
  tank5_slave->set_pin(esp32_esp32internalgpiopin_id_5);
  tank5_slave->set_use_interrupt(true);
  tank5_slave->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  script_scriptexecuteaction_id_9 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool>(send_to_pi);
  script_scriptexecuteaction_id_9->set_args(1, 6, [=](bool x) -> uint16_t {
      #line 373 "baros-slave2.yaml"
      return x;
  });
  automation_id_16->add_actions({script_scriptexecuteaction_id_9});
  tank6_slave->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(tank6_slave);
  esp32_esp32internalgpiopin_id_6 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_6->set_pin(::GPIO_NUM_14);
  esp32_esp32internalgpiopin_id_6->set_inverted(true);
  esp32_esp32internalgpiopin_id_6->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_6->set_flags(gpio::Flags::FLAG_INPUT);
  tank6_slave->set_pin(esp32_esp32internalgpiopin_id_6);
  tank6_slave->set_use_interrupt(true);
  tank6_slave->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  script_scriptexecuteaction_id_10 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool>(send_to_pi);
  script_scriptexecuteaction_id_10->set_args(1, 7, [=](bool x) -> uint16_t {
      #line 391 "baros-slave2.yaml"
      return x;
  });
  automation_id_17->add_actions({script_scriptexecuteaction_id_10});
  tank7_slave->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(tank7_slave);
  esp32_esp32internalgpiopin_id_7 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_7->set_pin(::GPIO_NUM_21);
  esp32_esp32internalgpiopin_id_7->set_inverted(true);
  esp32_esp32internalgpiopin_id_7->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_7->set_flags(gpio::Flags::FLAG_INPUT);
  tank7_slave->set_pin(esp32_esp32internalgpiopin_id_7);
  tank7_slave->set_use_interrupt(true);
  tank7_slave->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  script_scriptexecuteaction_id_11 = new script::ScriptExecuteAction<script::Script<uint8_t, uint16_t, uint16_t>, bool>(send_to_pi);
  script_scriptexecuteaction_id_11->set_args(1, 8, [=](bool x) -> uint16_t {
      #line 409 "baros-slave2.yaml"
      return x;
  });
  automation_id_18->add_actions({script_scriptexecuteaction_id_11});
  tank8_slave->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(tank8_slave);
  esp32_esp32internalgpiopin_id_8 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_8->set_pin(::GPIO_NUM_47);
  esp32_esp32internalgpiopin_id_8->set_inverted(true);
  esp32_esp32internalgpiopin_id_8->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_8->set_flags(gpio::Flags::FLAG_INPUT);
  tank8_slave->set_pin(esp32_esp32internalgpiopin_id_8);
  tank8_slave->set_use_interrupt(true);
  tank8_slave->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  // globals:
  //   id: liquid1_last_time
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  liquid1_last_time = new globals::GlobalsComponent<unsigned long>(0);
  liquid1_last_time->set_component_source(LOG_STR("globals"));
  App.register_component(liquid1_last_time);
  // globals:
  //   id: liquid2_last_time
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  liquid2_last_time = new globals::GlobalsComponent<unsigned long>(0);
  liquid2_last_time->set_component_source(LOG_STR("globals"));
  App.register_component(liquid2_last_time);
  // globals:
  //   id: liquid3_last_time
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  liquid3_last_time = new globals::GlobalsComponent<unsigned long>(0);
  liquid3_last_time->set_component_source(LOG_STR("globals"));
  App.register_component(liquid3_last_time);
  // globals:
  //   id: liquid4_last_time
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  liquid4_last_time = new globals::GlobalsComponent<unsigned long>(0);
  liquid4_last_time->set_component_source(LOG_STR("globals"));
  App.register_component(liquid4_last_time);
  // globals:
  //   id: liquid5_last_time
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  liquid5_last_time = new globals::GlobalsComponent<unsigned long>(0);
  liquid5_last_time->set_component_source(LOG_STR("globals"));
  App.register_component(liquid5_last_time);
  // globals:
  //   id: liquid6_last_time
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  liquid6_last_time = new globals::GlobalsComponent<unsigned long>(0);
  liquid6_last_time->set_component_source(LOG_STR("globals"));
  App.register_component(liquid6_last_time);
  // globals:
  //   id: liquid7_last_time
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  liquid7_last_time = new globals::GlobalsComponent<unsigned long>(0);
  liquid7_last_time->set_component_source(LOG_STR("globals"));
  App.register_component(liquid7_last_time);
  // globals:
  //   id: liquid8_last_time
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  liquid8_last_time = new globals::GlobalsComponent<unsigned long>(0);
  liquid8_last_time->set_component_source(LOG_STR("globals"));
  App.register_component(liquid8_last_time);
  // globals:
  //   id: liquid1_8_interval
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  liquid1_8_interval = new globals::GlobalsComponent<unsigned long>(0);
  liquid1_8_interval->set_component_source(LOG_STR("globals"));
  App.register_component(liquid1_8_interval);
  // globals:
  //   id: liquid2_8_interval
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  liquid2_8_interval = new globals::GlobalsComponent<unsigned long>(0);
  liquid2_8_interval->set_component_source(LOG_STR("globals"));
  App.register_component(liquid2_8_interval);
  // globals:
  //   id: liquid3_8_interval
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  liquid3_8_interval = new globals::GlobalsComponent<unsigned long>(0);
  liquid3_8_interval->set_component_source(LOG_STR("globals"));
  App.register_component(liquid3_8_interval);
  // globals:
  //   id: liquid4_8_interval
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  liquid4_8_interval = new globals::GlobalsComponent<unsigned long>(0);
  liquid4_8_interval->set_component_source(LOG_STR("globals"));
  App.register_component(liquid4_8_interval);
  // globals:
  //   id: liquid5_8_interval
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  liquid5_8_interval = new globals::GlobalsComponent<unsigned long>(0);
  liquid5_8_interval->set_component_source(LOG_STR("globals"));
  App.register_component(liquid5_8_interval);
  // globals:
  //   id: liquid6_8_interval
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  liquid6_8_interval = new globals::GlobalsComponent<unsigned long>(0);
  liquid6_8_interval->set_component_source(LOG_STR("globals"));
  App.register_component(liquid6_8_interval);
  // globals:
  //   id: liquid7_8_interval
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  liquid7_8_interval = new globals::GlobalsComponent<unsigned long>(0);
  liquid7_8_interval->set_component_source(LOG_STR("globals"));
  App.register_component(liquid7_8_interval);
  // globals:
  //   id: liquid_time_threshold
  //   type: unsigned long
  //   initial_value: '1000'
  //   restore_value: false
  liquid_time_threshold = new globals::GlobalsComponent<unsigned long>(1000);
  liquid_time_threshold->set_component_source(LOG_STR("globals"));
  App.register_component(liquid_time_threshold);
  lambdaaction_id = new LambdaAction<>([=]() -> void {
      #line 427 "baros-slave2.yaml"
      auto now = millis();
      liquid1_last_time->value() = now;
      ESP_LOGI("liquid1", "Liquid1 开启，记录时间: %lu ms", now);
  });
  lambdaaction_id_2 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("main", " Liquid1 \347\212\266\346\200\201\345\217\230\345\214\226: \345\274\200\345\220\257");
  });
  automation_id_19->add_actions({lambdaaction_id, lambdaaction_id_2});
  binary_sensor_releasetrigger_id_5 = new binary_sensor::ReleaseTrigger(liquid1_slave);
  automation_id_20 = new Automation<>(binary_sensor_releasetrigger_id_5);
  lambdaaction_id_3 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("main", " Liquid1 \347\212\266\346\200\201\345\217\230\345\214\226: \345\205\263\351\227\255");
  });
  automation_id_20->add_actions({lambdaaction_id_3});
  liquid1_slave->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(liquid1_slave);
  esp32_esp32internalgpiopin_id_9 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_9->set_pin(::GPIO_NUM_39);
  esp32_esp32internalgpiopin_id_9->set_inverted(true);
  esp32_esp32internalgpiopin_id_9->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_9->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLDOWN));
  liquid1_slave->set_pin(esp32_esp32internalgpiopin_id_9);
  liquid1_slave->set_use_interrupt(true);
  liquid1_slave->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  lambdaaction_id_4 = new LambdaAction<>([=]() -> void {
      #line 454 "baros-slave2.yaml"
      auto now = millis();
      liquid2_last_time->value() = now;
      ESP_LOGI("liquid2", "Liquid2 开启，记录时间: %lu ms", now);
  });
  lambdaaction_id_5 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("main", " Liquid2 \347\212\266\346\200\201\345\217\230\345\214\226: \345\274\200\345\220\257");
  });
  automation_id_21->add_actions({lambdaaction_id_4, lambdaaction_id_5});
  binary_sensor_releasetrigger_id_6 = new binary_sensor::ReleaseTrigger(liquid2_slave);
  automation_id_22 = new Automation<>(binary_sensor_releasetrigger_id_6);
  lambdaaction_id_6 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("main", " Liquid2 \347\212\266\346\200\201\345\217\230\345\214\226: \345\205\263\351\227\255");
  });
  automation_id_22->add_actions({lambdaaction_id_6});
  liquid2_slave->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(liquid2_slave);
  esp32_esp32internalgpiopin_id_10 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_10->set_pin(::GPIO_NUM_38);
  esp32_esp32internalgpiopin_id_10->set_inverted(true);
  esp32_esp32internalgpiopin_id_10->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_10->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLDOWN));
  liquid2_slave->set_pin(esp32_esp32internalgpiopin_id_10);
  liquid2_slave->set_use_interrupt(true);
  liquid2_slave->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
