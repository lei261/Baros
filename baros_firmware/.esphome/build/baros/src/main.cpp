// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace binary_sensor;
using namespace sensor;
using namespace number;
using namespace button;
using namespace switch_;
using namespace light;
using namespace fan;
logger::Logger *logger_logger_id;
web_server_base::WebServerBase *web_server_base_webserverbase_id;
wifi::WiFiComponent *wifi_wificomponent_id;
mdns::MDNSComponent *mdns_mdnscomponent_id;
esphome::ESPHomeOTAComponent *esphome_esphomeotacomponent_id;
web_server::WebServerOTAComponent *web_server_webserverotacomponent_id;
http_request::OtaHttpRequestComponent *http_request_otahttprequestcomponent_id;
safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
Automation<> *automation_id_2;
web_server::WebServer *web_server_webserver_id;
const uint8_t ESPHOME_WEBSERVER_INDEX_HTML[174] PROGMEM = {60, 33, 68, 79, 67, 84, 89, 80, 69, 32, 104, 116, 109, 108, 62, 60, 104, 116, 109, 108, 62, 60, 104, 101, 97, 100, 62, 60, 109, 101, 116, 97, 32, 99, 104, 97, 114, 115, 101, 116, 61, 85, 84, 70, 45, 56, 62, 60, 108, 105, 110, 107, 32, 114, 101, 108, 61, 105, 99, 111, 110, 32, 104, 114, 101, 102, 61, 100, 97, 116, 97, 58, 62, 60, 47, 104, 101, 97, 100, 62, 60, 98, 111, 100, 121, 62, 60, 101, 115, 112, 45, 97, 112, 112, 62, 60, 47, 101, 115, 112, 45, 97, 112, 112, 62, 60, 115, 99, 114, 105, 112, 116, 32, 115, 114, 99, 61, 34, 104, 116, 116, 112, 115, 58, 47, 47, 111, 105, 46, 101, 115, 112, 104, 111, 109, 101, 46, 105, 111, 47, 118, 51, 47, 119, 119, 119, 46, 106, 115, 34, 62, 60, 47, 115, 99, 114, 105, 112, 116, 62, 60, 47, 98, 111, 100, 121, 62, 60, 47, 104, 116, 109, 108, 62};
const size_t ESPHOME_WEBSERVER_INDEX_HTML_SIZE = 174;
StartupTrigger *startuptrigger_id;
Automation<> *automation_id;
using namespace json;
template_::TemplateBinarySensor *wifi_status_main;
template_::TemplateBinarySensor *server_status_main;
template_::TemplateBinarySensor *pouring;
binary_sensor::BinarySensor *clean_system_sensor;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id;
Automation<> *automation_id_4;
binary_sensor::BinarySensor *tank1;
binary_sensor::BinarySensor *tank2;
binary_sensor::BinarySensor *tank3;
binary_sensor::BinarySensor *tank4;
binary_sensor::BinarySensor *tank5;
binary_sensor::BinarySensor *tank6;
binary_sensor::BinarySensor *tank7;
binary_sensor::BinarySensor *tank8;
binary_sensor::BinarySensor *liquid1;
binary_sensor::BinarySensor *liquid2;
binary_sensor::BinarySensor *water_pump_slave;
binary_sensor::BinarySensor *valve1_slave;
binary_sensor::BinarySensor *valve2_slave;
template_::TemplateBinarySensor *valve1_control;
template_::TemplateBinarySensor *valve2_control;
template_::TemplateBinarySensor *water_pump_control;
template_::TemplateBinarySensor *o3_control;
binary_sensor::BinarySensor *pi_started;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_2;
Automation<> *automation_id_5;
interval::IntervalTrigger *interval_intervaltrigger_id;
Automation<> *automation_id_6;
script::SingleScript<> *make_recipe;
script::QueueingScript<int, float> *pour_liquid;
script::RestartScript<> *turn_off_all_valves;
script::RestartScript<> *turn_on_all_valves;
script::SingleScript<> *clean_system;
script::SingleScript<> *get_recipe;
Automation<> *automation_id_7;
psram::PsramComponent *psram_psramcomponent_id;
http_request::HttpRequestIDF *http_request_httprequestidf_id;
uart::UARTTransport *uart_uarttransport_id;
using namespace uart;
uart::IDFUARTComponent *uart_com;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_2;
adc::ADCSensor *pump_V;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_3;
adc::ADCSensor *o3_V;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_4;
ntc::NTC *ntc_ntc_id;
resistance::ResistanceSensor *resistance_sensor;
adc::ADCSensor *source_sensor;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_5;
template_::TemplateNumber *pump1_duration;
restart::RestartButton *restart_button;
template_::TemplateButton *start_pump1;
button::ButtonPressTrigger *button_buttonpresstrigger_id;
Automation<> *automation_id_15;
LambdaAction<> *lambdaaction_id_20;
LambdaAction<> *lambdaaction_id_21;
template_::TemplateButton *template__templatebutton_id;
button::ButtonPressTrigger *button_buttonpresstrigger_id_2;
Automation<> *automation_id_16;
template_::TemplateButton *start_clean_system;
button::ButtonPressTrigger *button_buttonpresstrigger_id_3;
Automation<> *automation_id_17;
script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id_5;
template_::TemplateSwitch *STOP_POST;
template_::TemplateSwitch *water_pump;
Automation<> *automation_id_19;
LambdaAction<> *lambdaaction_id_27;
Automation<> *automation_id_18;
LambdaAction<> *lambdaaction_id_26;
template_::TemplateSwitch *valve1;
Automation<> *automation_id_21;
LambdaAction<> *lambdaaction_id_29;
Automation<> *automation_id_20;
LambdaAction<> *lambdaaction_id_28;
template_::TemplateSwitch *valve2;
Automation<> *automation_id_23;
LambdaAction<> *lambdaaction_id_31;
Automation<> *automation_id_22;
LambdaAction<> *lambdaaction_id_30;
gpio::GPIOSwitch *relay;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_6;
gpio::GPIOSwitch *pump1_reverse;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_7;
gpio::GPIOSwitch *pump2_reverse;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_8;
gpio::GPIOSwitch *pump3_reverse;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_9;
gpio::GPIOSwitch *pump4_reverse;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_10;
gpio::GPIOSwitch *pump5_reverse;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_11;
gpio::GPIOSwitch *pump6_reverse;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_12;
gpio::GPIOSwitch *pump7_reverse;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_13;
gpio::GPIOSwitch *pump8_reverse;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_14;
esp32_rmt_led_strip::ESP32RMTLEDStripLightOutput *esp32_rmt_led_strip_esp32rmtledstriplightoutput_id;
light::AddressableLightState *led_rgb1;
light::LightTurnOnTrigger *light_lightturnontrigger_id;
Automation<> *automation_id_24;
light::LightControlAction<> *light_lightcontrolaction_id_3;
using namespace output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_15;
ledc::LEDCOutput *pump1_output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_16;
ledc::LEDCOutput *pump2_output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_17;
ledc::LEDCOutput *pump3_output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_18;
ledc::LEDCOutput *pump4_output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_19;
ledc::LEDCOutput *pump5_output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_20;
ledc::LEDCOutput *pump6_output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_21;
ledc::LEDCOutput *pump7_output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_22;
ledc::LEDCOutput *pump8_output;
speed::SpeedFan *pump1;
speed::SpeedFan *pump2;
speed::SpeedFan *pump3;
speed::SpeedFan *pump4;
speed::SpeedFan *pump5;
speed::SpeedFan *pump6;
speed::SpeedFan *pump7;
speed::SpeedFan *pump8;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id;
light::LightControlAction<> *light_lightcontrolaction_id;
script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id;
light::LightControlAction<> *light_lightcontrolaction_id_2;
script::IsRunningCondition<script::SingleScript<>> *script_isrunningcondition_id;
script::IsRunningCondition<script::QueueingScript<int, float>> *script_isrunningcondition_id_2;
switch_::SwitchCondition<> *switch__switchcondition_id;
OrCondition<> *orcondition_id;
IfAction<> *ifaction_id;
LambdaAction<> *lambdaaction_id;
script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id_2;
script::ScriptWaitAction<script::SingleScript<>> *script_scriptwaitaction_id;
script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id_3;
script::ScriptWaitAction<script::SingleScript<>> *script_scriptwaitaction_id_2;
fan::TurnOnAction<> *fan_turnonaction_id;
LambdaAction<> *lambdaaction_id_22;
DelayAction<> *delayaction_id_16;
LambdaAction<> *lambdaaction_id_23;
fan::TurnOffAction<> *fan_turnoffaction_id;
LambdaAction<> *lambdaaction_id_24;
fan::TurnOnAction<> *fan_turnonaction_id_2;
binary_sensor::BinarySensorCondition<> *binary_sensor_binarysensorcondition_id_3;
AndCondition<> *andcondition_id_3;
WaitUntilAction<> *waituntilaction_id_4;
LambdaAction<> *lambdaaction_id_25;
DelayAction<> *delayaction_id_17;
fan::TurnOffAction<> *fan_turnoffaction_id_2;
globals::GlobalsComponent<bool> *SERVER_STATUS;
globals::GlobalsComponent<bool> *WIFI_STATUS;
globals::GlobalsComponent<bool> *LIQUID_POURING;
globals::GlobalsComponent<int> *TEMP_NUM;
globals::GlobalsComponent<bool> *host_reply_received;
globals::GlobalsComponent<float[7]> *RECIPE_WINE_VOLUME;
globals::GlobalsComponent<int[7]> *RECIPE_TANK_ORDER;
globals::GlobalsComponent<bool> *RECIPE_READY;
globals::GlobalsComponent<float> *TANK1_DELAY;
globals::GlobalsComponent<float> *TANK2_DELAY;
globals::GlobalsComponent<float> *TANK3_DELAY;
globals::GlobalsComponent<float> *TANK4_DELAY;
globals::GlobalsComponent<float> *TANK5_DELAY;
globals::GlobalsComponent<float> *TANK6_DELAY;
globals::GlobalsComponent<float> *TANK7_DELAY;
globals::GlobalsComponent<float> *TANK1_SPEED;
globals::GlobalsComponent<float> *TANK2_SPEED;
globals::GlobalsComponent<float> *TANK3_SPEED;
globals::GlobalsComponent<float> *TANK4_SPEED;
globals::GlobalsComponent<float> *TANK5_SPEED;
globals::GlobalsComponent<float> *TANK6_SPEED;
globals::GlobalsComponent<float> *TANK7_SPEED;
globals::GlobalsComponent<float> *TANK1_INITIAL_SPEED;
globals::GlobalsComponent<float> *TANK2_INITIAL_SPEED;
globals::GlobalsComponent<float> *TANK3_INITIAL_SPEED;
globals::GlobalsComponent<float> *TANK4_INITIAL_SPEED;
globals::GlobalsComponent<float> *TANK5_INITIAL_SPEED;
globals::GlobalsComponent<float> *TANK6_INITIAL_SPEED;
globals::GlobalsComponent<float> *TANK7_INITIAL_SPEED;
globals::GlobalsComponent<float> *TANK1_INITIAL_SPEED_DURATION;
globals::GlobalsComponent<float> *TANK2_INITIAL_SPEED_DURATION;
globals::GlobalsComponent<float> *TANK3_INITIAL_SPEED_DURATION;
globals::GlobalsComponent<float> *TANK4_INITIAL_SPEED_DURATION;
globals::GlobalsComponent<float> *TANK5_INITIAL_SPEED_DURATION;
globals::GlobalsComponent<float> *TANK6_INITIAL_SPEED_DURATION;
globals::GlobalsComponent<float> *TANK7_INITIAL_SPEED_DURATION;
globals::GlobalVarSetAction<globals::GlobalsComponent<bool>> *globals_globalvarsetaction_id;
Automation<> *automation_id_3;
globals::GlobalVarSetAction<globals::GlobalsComponent<bool>> *globals_globalvarsetaction_id_2;
LambdaCondition<> *lambdacondition_id;
ForCondition<> *forcondition_id;
LambdaCondition<> *lambdacondition_id_2;
IfAction<> *ifaction_id_3;
RepeatAction<> *repeataction_id;
LambdaCondition<uint32_t> *lambdacondition_id_3;
IfAction<uint32_t> *ifaction_id_2;
LambdaAction<uint32_t> *lambdaaction_id_2;
script::ScriptExecuteAction<script::Script<int, float>, uint32_t> *script_scriptexecuteaction_id_4;
DelayAction<uint32_t> *delayaction_id;
LambdaCondition<> *lambdacondition_id_4;
ForCondition<> *forcondition_id_2;
WaitUntilAction<> *waituntilaction_id;
LambdaAction<> *lambdaaction_id_3;
Automation<int, float> *automation_id_8;
globals::GlobalVarSetAction<globals::GlobalsComponent<bool>, int, float> *globals_globalvarsetaction_id_3;
LambdaAction<int, float> *lambdaaction_id_4;
LambdaAction<int, float> *lambdaaction_id_5;
DelayAction<int, float> *delayaction_id_2;
LambdaAction<int, float> *lambdaaction_id_6;
DelayAction<int, float> *delayaction_id_3;
LambdaAction<int, float> *lambdaaction_id_7;
LambdaAction<int, float> *lambdaaction_id_8;
DelayAction<int, float> *delayaction_id_4;
globals::GlobalVarSetAction<globals::GlobalsComponent<int>, int, float> *globals_globalvarsetaction_id_4;
LambdaAction<int, float> *lambdaaction_id_9;
DelayAction<int, float> *delayaction_id_5;
LambdaAction<int, float> *lambdaaction_id_10;
globals::GlobalVarSetAction<globals::GlobalsComponent<bool>, int, float> *globals_globalvarsetaction_id_5;
LambdaAction<int, float> *lambdaaction_id_11;
Automation<> *automation_id_9;
LambdaAction<> *lambdaaction_id_12;
Automation<> *automation_id_10;
switch_::TurnOnAction<> *switch__turnonaction_id;
switch_::TurnOnAction<> *switch__turnonaction_id_2;
Automation<> *automation_id_11;
LambdaAction<> *lambdaaction_id_13;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_2;
DelayAction<> *delayaction_id_6;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_3;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_4;
binary_sensor::BinarySensorCondition<> *binary_sensor_binarysensorcondition_id;
AndCondition<> *andcondition_id;
WaitUntilAction<> *waituntilaction_id_2;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_5;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_6;
DelayAction<> *delayaction_id_7;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_7;
DelayAction<> *delayaction_id_8;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_8;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_9;
DelayAction<> *delayaction_id_9;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_10;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_11;
DelayAction<> *delayaction_id_10;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_12;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_13;
DelayAction<> *delayaction_id_11;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_14;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_15;
binary_sensor::BinarySensorCondition<> *binary_sensor_binarysensorcondition_id_2;
AndCondition<> *andcondition_id_2;
WaitUntilAction<> *waituntilaction_id_3;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_16;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_17;
DelayAction<> *delayaction_id_12;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_18;
DelayAction<> *delayaction_id_13;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_19;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_20;
DelayAction<> *delayaction_id_14;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_21;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_22;
DelayAction<> *delayaction_id_15;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_23;
LambdaAction<> *lambdaaction_id_14;
binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_24;
Automation<> *automation_id_14;
http_request::HttpRequestSendAction<> *http_request_httprequestsendaction_id;
http_request::HttpRequestResponseTrigger *http_request_httprequestresponsetrigger_id;
Automation<std::shared_ptr<http_request::HttpContainer>, std::string &> *automation_id_12;
LambdaCondition<std::shared_ptr<http_request::HttpContainer>, std::string &> *lambdacondition_id_5;
IfAction<std::shared_ptr<http_request::HttpContainer>, std::string &> *ifaction_id_4;
globals::GlobalVarSetAction<globals::GlobalsComponent<bool>, std::shared_ptr<http_request::HttpContainer>, std::string &> *globals_globalvarsetaction_id_6;
LambdaAction<std::shared_ptr<http_request::HttpContainer>, std::string &> *lambdaaction_id_15;
LambdaAction<std::shared_ptr<http_request::HttpContainer>, std::string &> *lambdaaction_id_16;
LambdaAction<std::shared_ptr<http_request::HttpContainer>, std::string &> *lambdaaction_id_17;
globals::GlobalVarSetAction<globals::GlobalsComponent<bool>, std::shared_ptr<http_request::HttpContainer>, std::string &> *globals_globalvarsetaction_id_7;
LambdaAction<std::shared_ptr<http_request::HttpContainer>, std::string &> *lambdaaction_id_18;
Trigger<> *trigger_id_9;
Automation<> *automation_id_13;
LambdaAction<> *lambdaaction_id_19;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // esphome:
  //   name: baros
  //   on_boot:
  //     - priority: -100.0
  //       then:
  //         - binary_sensor.template.publish:
  //             id: pouring
  //             state: false
  //           type_id: binary_sensor_binarysensorpublishaction_id
  //         - light.turn_on:
  //             id: led_rgb1
  //             state: true
  //           type_id: light_lightcontrolaction_id
  //       automation_id: automation_id
  //       trigger_id: startuptrigger_id
  //   min_version: 2025.10.4
  //   build_path: build\baros
  //   friendly_name: ''
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   debug_scheduler: false
  //   areas: []
  //   devices: []
  App.pre_setup("baros", "", "", __DATE__ ", " __TIME__, false);
  // binary_sensor:
  // sensor:
  // number:
  // button:
  // switch:
  // light:
  // fan:
  // logger:
  //   logs:
  //     fan: NONE
  //     switch: ERROR
  //     binary_sensor: INFO
  //     script: INFO
  //     http_request: NONE
  //     resistance: NONE
  //     sensor: NONE
  //     ntc: NONE
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
  logger_logger_id->set_log_level("fan", ESPHOME_LOG_LEVEL_NONE);
  logger_logger_id->set_log_level("switch", ESPHOME_LOG_LEVEL_ERROR);
  logger_logger_id->set_log_level("binary_sensor", ESPHOME_LOG_LEVEL_INFO);
  logger_logger_id->set_log_level("script", ESPHOME_LOG_LEVEL_INFO);
  logger_logger_id->set_log_level("http_request", ESPHOME_LOG_LEVEL_NONE);
  logger_logger_id->set_log_level("resistance", ESPHOME_LOG_LEVEL_NONE);
  logger_logger_id->set_log_level("sensor", ESPHOME_LOG_LEVEL_NONE);
  logger_logger_id->set_log_level("ntc", ESPHOME_LOG_LEVEL_NONE);
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
  //   on_connect:
  //     then:
  //       - globals.set:
  //           id: WIFI_STATUS
  //           value: 'true'
  //         type_id: globals_globalvarsetaction_id
  //     trigger_id: trigger_id
  //     automation_id: automation_id_2
  //   on_disconnect:
  //     then:
  //       - globals.set:
  //           id: WIFI_STATUS
  //           value: 'false'
  //         type_id: globals_globalvarsetaction_id_2
  //     trigger_id: trigger_id_2
  //     automation_id: automation_id_3
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   fast_connect: false
  //   enable_btm: false
  //   enable_rrm: false
  //   passive_scan: false
  //   enable_on_boot: true
  //   use_address: baros.local
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("baros.local");
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
  // ota.web_server:
  //   platform: web_server
  //   id: web_server_webserverotacomponent_id
  web_server_webserverotacomponent_id = new web_server::WebServerOTAComponent();
  // ota.http_request:
  //   platform: http_request
  //   id: http_request_otahttprequestcomponent_id
  //   http_request_id: http_request_httprequestidf_id
  http_request_otahttprequestcomponent_id = new http_request::OtaHttpRequestComponent();
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
  web_server_webserverotacomponent_id->set_component_source(LOG_STR("web_server.ota"));
  App.register_component(web_server_webserverotacomponent_id);
  http_request_otahttprequestcomponent_id->set_component_source(LOG_STR("http_request.ota"));
  App.register_component(http_request_otahttprequestcomponent_id);
  automation_id_2 = new Automation<>(wifi_wificomponent_id->get_connect_trigger());
  // web_server:
  //   port: 80
  //   version: 3
  //   local: true
  //   sorting_groups: []
  //   id: web_server_webserver_id
  //   enable_private_network_access: true
  //   web_server_base_id: web_server_base_webserverbase_id
  //   include_internal: false
  //   log: true
  //   css_url: ''
  //   js_url: https:oi.esphome.io/v3/www.js
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
  //   cpu_frequency: 240MHZ
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
  // binary_sensor.template:
  //   platform: template
  //   name: Wifi Status
  //   id: wifi_status_main
  //   lambda: !lambda |-
  //     return id(WIFI_STATUS);
  //   disabled_by_default: false
  wifi_status_main = new template_::TemplateBinarySensor();
  App.register_binary_sensor(wifi_status_main);
  wifi_status_main->set_name("Wifi Status");
  wifi_status_main->set_object_id("wifi_status");
  wifi_status_main->set_disabled_by_default(false);
  wifi_status_main->set_trigger_on_initial_state(false);
  wifi_status_main->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(wifi_status_main);
  // binary_sensor.template:
  //   platform: template
  //   name: Server Status
  //   id: server_status_main
  //   lambda: !lambda |-
  //     return id(SERVER_STATUS);
  //   disabled_by_default: false
  server_status_main = new template_::TemplateBinarySensor();
  App.register_binary_sensor(server_status_main);
  server_status_main->set_name("Server Status");
  server_status_main->set_object_id("server_status");
  server_status_main->set_disabled_by_default(false);
  server_status_main->set_trigger_on_initial_state(false);
  server_status_main->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(server_status_main);
  // binary_sensor.template:
  //   platform: template
  //   name: Recipe Running
  //   id: pouring
  //   condition:
  //     for:
  //       time: 1s
  //       condition:
  //         lambda: !lambda |-
  //           if(id(LIQUID_POURING)){
  //             return true;
  //           } else {
  //             return false;
  //           }
  //         type_id: lambdacondition_id
  //     type_id: forcondition_id
  //   disabled_by_default: false
  pouring = new template_::TemplateBinarySensor();
  App.register_binary_sensor(pouring);
  pouring->set_name("Recipe Running");
  pouring->set_object_id("recipe_running");
  pouring->set_disabled_by_default(false);
  pouring->set_trigger_on_initial_state(false);
  pouring->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(pouring);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   provider: baros-slave
  //   remote_id: clean_system_slave
  //   id: clean_system_sensor
  //   name: Clean System
  //   internal: false
  //   on_press:
  //     - then:
  //         - script.execute:
  //             id: clean_system
  //           type_id: script_scriptexecuteaction_id
  //       automation_id: automation_id_4
  //       trigger_id: binary_sensor_presstrigger_id
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   type: data
  clean_system_sensor = new binary_sensor::BinarySensor();
  App.register_binary_sensor(clean_system_sensor);
  clean_system_sensor->set_name("Clean System");
  clean_system_sensor->set_object_id("clean_system");
  clean_system_sensor->set_disabled_by_default(false);
  clean_system_sensor->set_internal(false);
  clean_system_sensor->set_trigger_on_initial_state(false);
  binary_sensor_presstrigger_id = new binary_sensor::PressTrigger(clean_system_sensor);
  automation_id_4 = new Automation<>(binary_sensor_presstrigger_id);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   provider: baros-slave
  //   remote_id: tank1_slave
  //   id: tank1
  //   name: Tank1
  //   internal: false
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   type: data
  tank1 = new binary_sensor::BinarySensor();
  App.register_binary_sensor(tank1);
  tank1->set_name("Tank1");
  tank1->set_object_id("tank1");
  tank1->set_disabled_by_default(false);
  tank1->set_internal(false);
  tank1->set_trigger_on_initial_state(false);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   provider: baros-slave
  //   remote_id: tank2_slave
  //   id: tank2
  //   name: Tank2
  //   internal: false
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   type: data
  tank2 = new binary_sensor::BinarySensor();
  App.register_binary_sensor(tank2);
  tank2->set_name("Tank2");
  tank2->set_object_id("tank2");
  tank2->set_disabled_by_default(false);
  tank2->set_internal(false);
  tank2->set_trigger_on_initial_state(false);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   provider: baros-slave
  //   remote_id: tank3_slave
  //   id: tank3
  //   name: Tank3
  //   internal: false
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   type: data
  tank3 = new binary_sensor::BinarySensor();
  App.register_binary_sensor(tank3);
  tank3->set_name("Tank3");
  tank3->set_object_id("tank3");
  tank3->set_disabled_by_default(false);
  tank3->set_internal(false);
  tank3->set_trigger_on_initial_state(false);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   provider: baros-slave
  //   remote_id: tank4_slave
  //   id: tank4
  //   name: Tank4
  //   internal: false
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   type: data
  tank4 = new binary_sensor::BinarySensor();
  App.register_binary_sensor(tank4);
  tank4->set_name("Tank4");
  tank4->set_object_id("tank4");
  tank4->set_disabled_by_default(false);
  tank4->set_internal(false);
  tank4->set_trigger_on_initial_state(false);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   provider: baros-slave
  //   remote_id: tank5_slave
  //   id: tank5
  //   name: Tank5
  //   internal: false
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   type: data
  tank5 = new binary_sensor::BinarySensor();
  App.register_binary_sensor(tank5);
  tank5->set_name("Tank5");
  tank5->set_object_id("tank5");
  tank5->set_disabled_by_default(false);
  tank5->set_internal(false);
  tank5->set_trigger_on_initial_state(false);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   provider: baros-slave
  //   remote_id: tank6_slave
  //   id: tank6
  //   name: Tank6
  //   internal: false
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   type: data
  tank6 = new binary_sensor::BinarySensor();
  App.register_binary_sensor(tank6);
  tank6->set_name("Tank6");
  tank6->set_object_id("tank6");
  tank6->set_disabled_by_default(false);
  tank6->set_internal(false);
  tank6->set_trigger_on_initial_state(false);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   provider: baros-slave
  //   remote_id: tank7_slave
  //   id: tank7
  //   name: Tank7
  //   internal: false
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   type: data
  tank7 = new binary_sensor::BinarySensor();
  App.register_binary_sensor(tank7);
  tank7->set_name("Tank7");
  tank7->set_object_id("tank7");
  tank7->set_disabled_by_default(false);
  tank7->set_internal(false);
  tank7->set_trigger_on_initial_state(false);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   provider: baros-slave
  //   remote_id: tank8_slave
  //   id: tank8
  //   name: Tank8
  //   internal: false
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   type: data
  tank8 = new binary_sensor::BinarySensor();
  App.register_binary_sensor(tank8);
  tank8->set_name("Tank8");
  tank8->set_object_id("tank8");
  tank8->set_disabled_by_default(false);
  tank8->set_internal(false);
  tank8->set_trigger_on_initial_state(false);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   provider: baros-slave
  //   remote_id: liquid1_slave
  //   id: liquid1
  //   name: Liquid1
  //   internal: false
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   type: data
  liquid1 = new binary_sensor::BinarySensor();
  App.register_binary_sensor(liquid1);
  liquid1->set_name("Liquid1");
  liquid1->set_object_id("liquid1");
  liquid1->set_disabled_by_default(false);
  liquid1->set_internal(false);
  liquid1->set_trigger_on_initial_state(false);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   provider: baros-slave
  //   remote_id: liquid2_slave
  //   id: liquid2
  //   name: Liquid2
  //   internal: false
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   type: data
  liquid2 = new binary_sensor::BinarySensor();
  App.register_binary_sensor(liquid2);
  liquid2->set_name("Liquid2");
  liquid2->set_object_id("liquid2");
  liquid2->set_disabled_by_default(false);
  liquid2->set_internal(false);
  liquid2->set_trigger_on_initial_state(false);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   provider: baros-slave
  //   remote_id: water_pump_slave_sensor
  //   id: water_pump_slave
  //   internal: true
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   name: water_pump_slave
  //   type: data
  water_pump_slave = new binary_sensor::BinarySensor();
  App.register_binary_sensor(water_pump_slave);
  water_pump_slave->set_name("water_pump_slave");
  water_pump_slave->set_object_id("water_pump_slave");
  water_pump_slave->set_disabled_by_default(false);
  water_pump_slave->set_internal(true);
  water_pump_slave->set_trigger_on_initial_state(false);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   provider: baros-slave
  //   remote_id: valve1_slave_sensor
  //   id: valve1_slave
  //   internal: true
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   name: valve1_slave
  //   type: data
  valve1_slave = new binary_sensor::BinarySensor();
  App.register_binary_sensor(valve1_slave);
  valve1_slave->set_name("valve1_slave");
  valve1_slave->set_object_id("valve1_slave");
  valve1_slave->set_disabled_by_default(false);
  valve1_slave->set_internal(true);
  valve1_slave->set_trigger_on_initial_state(false);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   provider: baros-slave
  //   remote_id: valve2_slave_sensor
  //   id: valve2_slave
  //   internal: true
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   name: valve2_slave
  //   type: data
  valve2_slave = new binary_sensor::BinarySensor();
  App.register_binary_sensor(valve2_slave);
  valve2_slave->set_name("valve2_slave");
  valve2_slave->set_object_id("valve2_slave");
  valve2_slave->set_disabled_by_default(false);
  valve2_slave->set_internal(true);
  valve2_slave->set_trigger_on_initial_state(false);
  // binary_sensor.template:
  //   platform: template
  //   name: Valve1 Control
  //   id: valve1_control
  //   internal: true
  //   disabled_by_default: false
  valve1_control = new template_::TemplateBinarySensor();
  App.register_binary_sensor(valve1_control);
  valve1_control->set_name("Valve1 Control");
  valve1_control->set_object_id("valve1_control");
  valve1_control->set_disabled_by_default(false);
  valve1_control->set_internal(true);
  valve1_control->set_trigger_on_initial_state(false);
  valve1_control->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(valve1_control);
  // binary_sensor.template:
  //   platform: template
  //   name: Valve2 Control
  //   id: valve2_control
  //   internal: true
  //   disabled_by_default: false
  valve2_control = new template_::TemplateBinarySensor();
  App.register_binary_sensor(valve2_control);
  valve2_control->set_name("Valve2 Control");
  valve2_control->set_object_id("valve2_control");
  valve2_control->set_disabled_by_default(false);
  valve2_control->set_internal(true);
  valve2_control->set_trigger_on_initial_state(false);
  valve2_control->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(valve2_control);
  // binary_sensor.template:
  //   platform: template
  //   name: Water Pump Control
  //   id: water_pump_control
  //   internal: true
  //   disabled_by_default: false
  water_pump_control = new template_::TemplateBinarySensor();
  App.register_binary_sensor(water_pump_control);
  water_pump_control->set_name("Water Pump Control");
  water_pump_control->set_object_id("water_pump_control");
  water_pump_control->set_disabled_by_default(false);
  water_pump_control->set_internal(true);
  water_pump_control->set_trigger_on_initial_state(false);
  water_pump_control->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(water_pump_control);
  // binary_sensor.template:
  //   platform: template
  //   name: O3 Control
  //   id: o3_control
  //   internal: true
  //   disabled_by_default: false
  o3_control = new template_::TemplateBinarySensor();
  App.register_binary_sensor(o3_control);
  o3_control->set_name("O3 Control");
  o3_control->set_object_id("o3_control");
  o3_control->set_disabled_by_default(false);
  o3_control->set_internal(true);
  o3_control->set_trigger_on_initial_state(false);
  o3_control->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(o3_control);
  // binary_sensor.packet_transport:
  //   platform: packet_transport
  //   provider: baros-slave
  //   remote_id: pi_started_slave
  //   id: pi_started
  //   name: PI Started
  //   internal: false
  //   on_press:
  //     - then:
  //         - light.turn_on:
  //             id: led_rgb1
  //             state: true
  //           type_id: light_lightcontrolaction_id_2
  //       automation_id: automation_id_5
  //       trigger_id: binary_sensor_presstrigger_id_2
  //   disabled_by_default: false
  //   transport_id: uart_uarttransport_id
  //   type: data
  pi_started = new binary_sensor::BinarySensor();
  App.register_binary_sensor(pi_started);
  pi_started->set_name("PI Started");
  pi_started->set_object_id("pi_started");
  pi_started->set_disabled_by_default(false);
  pi_started->set_internal(false);
  pi_started->set_trigger_on_initial_state(false);
  binary_sensor_presstrigger_id_2 = new binary_sensor::PressTrigger(pi_started);
  automation_id_5 = new Automation<>(binary_sensor_presstrigger_id_2);
  // interval:
  //   - interval: 6s
  //     then:
  //       - if:
  //           condition:
  //             or:
  //               - script.is_running:
  //                   id: make_recipe
  //                 type_id: script_isrunningcondition_id
  //               - script.is_running:
  //                   id: pour_liquid
  //                 type_id: script_isrunningcondition_id_2
  //               - switch.is_on:
  //                   id: STOP_POST
  //                 type_id: switch__switchcondition_id
  //             type_id: orcondition_id
  //           then:
  //             - logger.log:
  //                 format: 配方或倒酒正在执行中，跳过定时获取;
  //                 level: DEBUG
  //                 logger_id: logger_logger_id
  //                 args: []
  //                 tag: main
  //               type_id: lambdaaction_id
  //           else:
  //             - script.execute:
  //                 id: get_recipe
  //               type_id: script_scriptexecuteaction_id_2
  //             - script.wait:
  //                 id: get_recipe
  //               type_id: script_scriptwaitaction_id
  //             - script.execute:
  //                 id: make_recipe
  //               type_id: script_scriptexecuteaction_id_3
  //             - script.wait:
  //                 id: make_recipe
  //               type_id: script_scriptwaitaction_id_2
  //         type_id: ifaction_id
  //     trigger_id: trigger_id_3
  //     automation_id: automation_id_6
  //     id: interval_intervaltrigger_id
  //     startup_delay: 0s
  interval_intervaltrigger_id = new interval::IntervalTrigger();
  interval_intervaltrigger_id->set_component_source(LOG_STR("interval"));
  App.register_component(interval_intervaltrigger_id);
  automation_id_6 = new Automation<>(interval_intervaltrigger_id);
  // script:
  //   - id: make_recipe
  //     mode: single
  //     then:
  //       - if:
  //           condition:
  //             lambda: !lambda |-
  //               return id(RECIPE_READY) == true;
  //             type_id: lambdacondition_id_2
  //           then:
  //             - repeat:
  //                 count: !lambda |-
  //                   return sizeof(id(RECIPE_TANK_ORDER)) / sizeof(id(RECIPE_TANK_ORDER)[0]);
  //                 then:
  //                   - if:
  //                       condition:
  //                         lambda: !lambda |-
  //                           return id(RECIPE_TANK_ORDER)[iteration] > 0;
  //                         type_id: lambdacondition_id_3
  //                       then:
  //                         - logger.log:
  //                             format: '执行水箱: %d , 体积: %.1f'
  //                             args:
  //                               - !lambda |-
  //                                 id(RECIPE_TANK_ORDER)[iteration]
  //                               - !lambda |-
  //                                 id(RECIPE_WINE_VOLUME)[iteration]
  //                             level: DEBUG
  //                             logger_id: logger_logger_id
  //                             tag: main
  //                           type_id: lambdaaction_id_2
  //                         - script.execute:
  //                             id: pour_liquid
  //                             tank_num: !lambda |-
  //                               return id(RECIPE_TANK_ORDER)[iteration];
  //                             volume: !lambda |-
  //                               return id(RECIPE_WINE_VOLUME)[iteration];
  //                           type_id: script_scriptexecuteaction_id_4
  //                         - delay: 1s
  //                           type_id: delayaction_id
  //                     type_id: ifaction_id_2
  //               type_id: repeataction_id
  //             - wait_until:
  //                 condition:
  //                   for:
  //                     time: 2s
  //                     condition:
  //                       lambda: !lambda |-
  //                         return id(LIQUID_POURING) == false;
  //                       type_id: lambdacondition_id_4
  //                   type_id: forcondition_id_2
  //               type_id: waituntilaction_id
  //             - lambda: !lambda |-
  //                 id(RECIPE_READY) = false;
  //               type_id: lambdaaction_id_3
  //         type_id: ifaction_id_3
  //     trigger_id: trigger_id_4
  //     automation_id: automation_id_7
  //     parameters: {}
  //   - id: pour_liquid
  //     parameters:
  //       tank_num: int
  //       volume: float
  //     mode: queued
  //     then:
  //       - globals.set:
  //           id: LIQUID_POURING
  //           value: 'true'
  //         type_id: globals_globalvarsetaction_id_3
  //       - logger.log:
  //           format: '开始倒酒: 水箱${tank_num}, 体积${volume}mL'
  //           level: DEBUG
  //           logger_id: logger_logger_id
  //           args: []
  //           tag: main
  //         type_id: lambdaaction_id_4
  //       - lambda: !lambda |-
  //           ESP_LOGI("pour", "开启水箱%d对应的泵", tank_num);
  //           switch(tank_num) {
  //             case 1: {
  //               auto call = id(pump1).turn_on();
  //               call.perform();
  //               break;
  //             }
  //             case 2: {
  //               auto call = id(pump2).turn_on();
  //               call.perform();
  //               break;
  //             }
  //             case 3: {
  //               auto call = id(pump3).turn_on();
  //               call.perform();
  //               break;
  //             }
  //             case 4: {
  //               auto call = id(pump4).turn_on();
  //               call.perform();
  //               break;
  //             }
  //             case 5: {
  //               auto call = id(pump5).turn_on();
  //               call.perform();
  //               break;
  //             }
  //             case 6: {
  //               auto call = id(pump6).turn_on();
  //               call.perform();
  //               break;
  //             }
  //             case 7: {
  //               auto call = id(pump7).turn_on();
  //               call.perform();
  //               break;
  //             }
  //             case 8: {
  //               auto call = id(pump8).turn_on();
  //               call.perform();
  //               break;
  //             }
  //             default:
  //               ESP_LOGW("pour", "无效的水箱号: %d", tank_num);
  //               break;
  //           }
  //         type_id: lambdaaction_id_5
  //       - delay: 500ms
  //         type_id: delayaction_id_2
  //       - lambda: !lambda |-
  //           ESP_LOGI("pour", "启动泵,速度100%");
  //           switch(tank_num) {
  //             case 1:
  //               id(pump1).turn_on().set_speed(100).perform();
  //               break;
  //             case 2:
  //               id(pump2).turn_on().set_speed(100).perform();
  //               break;
  //             case 3:
  //               id(pump3).turn_on().set_speed(100).perform();
  //               break;
  //             case 4:
  //               id(pump4).turn_on().set_speed(100).perform();
  //               break;
  //             case 5:
  //               id(pump5).turn_on().set_speed(100).perform();
  //               break;
  //             case 6:
  //               id(pump6).turn_on().set_speed(100).perform();
  //               break;
  //             case 7:
  //               id(pump7).turn_on().set_speed(100).perform();
  //               break;
  //             case 8:
  //               id(pump8).turn_on().set_speed(100).perform();
  //               break;
  //             default:
  //               ESP_LOGW("pour", "无效的水箱号: %d", tank_num);
  //               break;
  //           }
  //         type_id: lambdaaction_id_6
  //       - delay: !lambda "float t = 0;\nswitch(tank_num) {\n  case 1:\n    t = id(TANK1_DELAY)
  //           \ + (volume / id(TANK1_SPEED));\n    ESP_LOGI(\"pour\", \"等待 %.1f 秒\", t);\n
  //           \    return 1000*t;\n    break;\n  case 2:\n    t = id(TANK2_DELAY) + (volume
  //           \ / id(TANK2_SPEED));\n    ESP_LOGI(\"pour\", \"等待 %.1f 秒\", t);\n    return
  //           \ 1000*t;\n    break;\n  case 3:\n    t = id(TANK3_DELAY) + (volume / id(TANK3_SPEED));\n
  //           \    ESP_LOGI(\"pour\", \"等待 %.1f 秒\", t);\n    return 1000*t;\n    break;\n
  //           \  case 4:\n    t = id(TANK4_DELAY) + (volume / id(TANK4_SPEED));\n    ESP_LOGI(\"
  //           pour\", \"等待 %.1f 秒\", t);\n    return 1000*t;\n    break;\n  case 5:\n  
  //           \  t = id(TANK5_DELAY) + (volume / id(TANK5_SPEED));\n    ESP_LOGI(\"pour\"
  //           , \"等待 %.1f 秒\", t);\n    return 1000*t;\n    break;\n  case 6:\n    t = id(TANK6_DELAY)
  //           \ + (volume / id(TANK6_SPEED));\n    ESP_LOGI(\"pour\", \"等待 %.1f 秒\", t);\n
  //           \    return 1000*t;\n    break;\n  case 7:\n    t = id(TANK7_DELAY) + (volume
  //           \ / id(TANK7_SPEED));\n    ESP_LOGI(\"pour\", \"等待 %.1f 秒\", t);\n    return
  //           \ 1000*t;\n    break;\n  default:\n    ESP_LOGW(\"pour\", \"无效的水箱号: %d\",
  //           \ tank_num);\n    return 0;\n}   "
  //         type_id: delayaction_id_3
  //       - logger.log:
  //           format: 关闭泵
  //           level: DEBUG
  //           logger_id: logger_logger_id
  //           args: []
  //           tag: main
  //         type_id: lambdaaction_id_7
  //       - lambda: !lambda |-
  //           switch(tank_num) {
  //             case 1:
  //               id(pump1).turn_off().perform();
  //               break;
  //             case 2:
  //               id(pump2).turn_off().perform();
  //               break;
  //             case 3:
  //               id(pump3).turn_off().perform();
  //               break;
  //             case 4:
  //               id(pump4).turn_off().perform();
  //               break;
  //             case 5:
  //               id(pump5).turn_off().perform();
  //               break;
  //             case 6:
  //               id(pump6).turn_off().perform();
  //               break;
  //             case 7:
  //               id(pump7).turn_off().perform();
  //               break;
  //             case 8:
  //               id(pump8).turn_off().perform();
  //               break;
  //             default:
  //               ESP_LOGW("pour", "无效的水箱号: %d", tank_num);
  //               break;
  //           }
  //         type_id: lambdaaction_id_8
  //       - delay: 500ms
  //         type_id: delayaction_id_4
  //       - globals.set:
  //           id: TEMP_NUM
  //           value: !lambda |-
  //             return tank_num;
  //         type_id: globals_globalvarsetaction_id_4
  //       - lambda: !lambda |-
  //           switch(tank_num) {
  //             case 1:
  //               id(pump1_reverse).turn_on();
  //               break;
  //             case 2:
  //               id(pump2_reverse).turn_on();
  //               break;
  //             case 3:
  //               id(pump3_reverse).turn_on();
  //               break;
  //             case 4:
  //               id(pump4_reverse).turn_on();
  //               break;
  //             case 5:
  //               id(pump5_reverse).turn_on();
  //               break;
  //             case 6:
  //               id(pump6_reverse).turn_on();
  //               break;
  //             case 7:
  //               id(pump7_reverse).turn_on();
  //               break;
  //             case 8:
  //               id(pump8_reverse).turn_on();
  //               break;
  //             default:
  //               ESP_LOGW("pour", "无效的水箱号: %d", tank_num);
  //               break;
  //           }
  //         type_id: lambdaaction_id_9
  //       - delay: 5s
  //         type_id: delayaction_id_5
  //       - lambda: !lambda |-
  //           switch(tank_num) {
  //             case 1:
  //               id(pump1_reverse).turn_off();
  //               break;
  //             case 2:
  //               id(pump2_reverse).turn_off();
  //               break;
  //             case 3:
  //               id(pump3_reverse).turn_off();
  //               break;
  //             case 4:
  //               id(pump4_reverse).turn_off();
  //               break;
  //             case 5:
  //               id(pump5_reverse).turn_off();
  //               break;
  //             case 6:
  //               id(pump6_reverse).turn_off();
  //               break;
  //             case 7:
  //               id(pump7_reverse).turn_off();
  //               break;
  //             case 8:
  //               id(pump8_reverse).turn_off();
  //               break;
  //             default:
  //               ESP_LOGW("pour", "无效的水箱号: %d", tank_num);
  //               break;
  //           }
  //         type_id: lambdaaction_id_10
  //       - globals.set:
  //           id: LIQUID_POURING
  //           value: 'false'
  //         type_id: globals_globalvarsetaction_id_5
  //       - logger.log:
  //           format: Recipe倒酒完成
  //           level: DEBUG
  //           logger_id: logger_logger_id
  //           args: []
  //           tag: main
  //         type_id: lambdaaction_id_11
  //     trigger_id: trigger_id_5
  //     automation_id: automation_id_8
  //   - id: turn_off_all_valves
  //     mode: restart
  //     then:
  //       - logger.log:
  //           format: 关闭所有阀门
  //           level: DEBUG
  //           logger_id: logger_logger_id
  //           args: []
  //           tag: main
  //         type_id: lambdaaction_id_12
  //     trigger_id: trigger_id_6
  //     automation_id: automation_id_9
  //     parameters: {}
  //   - id: turn_on_all_valves
  //     mode: restart
  //     then:
  //       - switch.turn_on:
  //           id: valve1
  //         type_id: switch__turnonaction_id
  //       - switch.turn_on:
  //           id: valve2
  //         type_id: switch__turnonaction_id_2
  //     trigger_id: trigger_id_7
  //     automation_id: automation_id_10
  //     parameters: {}
  //   - id: clean_system
  //     mode: single
  //     then:
  //       - logger.log:
  //           format: 开始清洗系统
  //           level: DEBUG
  //           logger_id: logger_logger_id
  //           args: []
  //           tag: main
  //         type_id: lambdaaction_id_13
  //       - binary_sensor.template.publish:
  //           id: valve1_control
  //           state: true
  //         type_id: binary_sensor_binarysensorpublishaction_id_2
  //       - delay: 500ms
  //         type_id: delayaction_id_6
  //       - binary_sensor.template.publish:
  //           id: water_pump_control
  //           state: true
  //         type_id: binary_sensor_binarysensorpublishaction_id_3
  //       - binary_sensor.template.publish:
  //           id: o3_control
  //           state: true
  //         type_id: binary_sensor_binarysensorpublishaction_id_4
  //       - wait_until:
  //           condition:
  //             and:
  //               - binary_sensor.is_on:
  //                   id: liquid1
  //                 type_id: binary_sensor_binarysensorcondition_id
  //             type_id: andcondition_id
  //           timeout: 30s
  //         type_id: waituntilaction_id_2
  //       - binary_sensor.template.publish:
  //           id: water_pump_control
  //           state: false
  //         type_id: binary_sensor_binarysensorpublishaction_id_5
  //       - binary_sensor.template.publish:
  //           id: o3_control
  //           state: false
  //         type_id: binary_sensor_binarysensorpublishaction_id_6
  //       - delay: 500ms
  //         type_id: delayaction_id_7
  //       - binary_sensor.template.publish:
  //           id: valve1_control
  //           state: false
  //         type_id: binary_sensor_binarysensorpublishaction_id_7
  //       - delay: 500ms
  //         type_id: delayaction_id_8
  //       - binary_sensor.template.publish:
  //           id: water_pump_control
  //           state: true
  //         type_id: binary_sensor_binarysensorpublishaction_id_8
  //       - binary_sensor.template.publish:
  //           id: o3_control
  //           state: true
  //         type_id: binary_sensor_binarysensorpublishaction_id_9
  //       - delay: 10s
  //         type_id: delayaction_id_9
  //       - binary_sensor.template.publish:
  //           id: water_pump_control
  //           state: false
  //         type_id: binary_sensor_binarysensorpublishaction_id_10
  //       - binary_sensor.template.publish:
  //           id: o3_control
  //           state: false
  //         type_id: binary_sensor_binarysensorpublishaction_id_11
  //       - delay: 500ms
  //         type_id: delayaction_id_10
  //       - binary_sensor.template.publish:
  //           id: valve2_control
  //           state: true
  //         type_id: binary_sensor_binarysensorpublishaction_id_12
  //       - binary_sensor.template.publish:
  //           id: valve1_control
  //           state: true
  //         type_id: binary_sensor_binarysensorpublishaction_id_13
  //       - delay: 500ms
  //         type_id: delayaction_id_11
  //       - binary_sensor.template.publish:
  //           id: water_pump_control
  //           state: true
  //         type_id: binary_sensor_binarysensorpublishaction_id_14
  //       - binary_sensor.template.publish:
  //           id: o3_control
  //           state: true
  //         type_id: binary_sensor_binarysensorpublishaction_id_15
  //       - wait_until:
  //           condition:
  //             and:
  //               - binary_sensor.is_on:
  //                   id: liquid1
  //                 type_id: binary_sensor_binarysensorcondition_id_2
  //             type_id: andcondition_id_2
  //           timeout: 30s
  //         type_id: waituntilaction_id_3
  //       - binary_sensor.template.publish:
  //           id: water_pump_control
  //           state: false
  //         type_id: binary_sensor_binarysensorpublishaction_id_16
  //       - binary_sensor.template.publish:
  //           id: o3_control
  //           state: false
  //         type_id: binary_sensor_binarysensorpublishaction_id_17
  //       - delay: 500ms
  //         type_id: delayaction_id_12
  //       - binary_sensor.template.publish:
  //           id: valve1_control
  //           state: false
  //         type_id: binary_sensor_binarysensorpublishaction_id_18
  //       - delay: 500ms
  //         type_id: delayaction_id_13
  //       - binary_sensor.template.publish:
  //           id: water_pump_control
  //           state: true
  //         type_id: binary_sensor_binarysensorpublishaction_id_19
  //       - binary_sensor.template.publish:
  //           id: o3_control
  //           state: true
  //         type_id: binary_sensor_binarysensorpublishaction_id_20
  //       - delay: 10s
  //         type_id: delayaction_id_14
  //       - binary_sensor.template.publish:
  //           id: water_pump_control
  //           state: false
  //         type_id: binary_sensor_binarysensorpublishaction_id_21
  //       - binary_sensor.template.publish:
  //           id: o3_control
  //           state: false
  //         type_id: binary_sensor_binarysensorpublishaction_id_22
  //       - delay: 500ms
  //         type_id: delayaction_id_15
  //       - binary_sensor.template.publish:
  //           id: valve2_control
  //           state: false
  //         type_id: binary_sensor_binarysensorpublishaction_id_23
  //       - logger.log:
  //           format: 系统清洗完成
  //           level: DEBUG
  //           logger_id: logger_logger_id
  //           args: []
  //           tag: main
  //         type_id: lambdaaction_id_14
  //       - binary_sensor.template.publish:
  //           id: clean_system_sensor
  //           state: false
  //         type_id: binary_sensor_binarysensorpublishaction_id_24
  //     trigger_id: trigger_id_8
  //     automation_id: automation_id_11
  //     parameters: {}
  //   - id: get_recipe
  //     mode: single
  //     then:
  //       - http_request.post:
  //           url: https:breakreal.top/langgraph-server/drink/test-demo-get-machine-task-with-idx
  //           json:
  //             machine_id: lizi-002
  //           capture_response: true
  //           max_response_buffer_size: 10000
  //           on_response:
  //             - then:
  //                 - if:
  //                     condition:
  //                       lambda: !lambda |-
  //                         return response->status_code == 200;
  //                       type_id: lambdacondition_id_5
  //                     then:
  //                       - globals.set:
  //                           id: SERVER_STATUS
  //                           value: 'true'
  //                         type_id: globals_globalvarsetaction_id_6
  //                       - logger.log:
  //                           format: 'Response status: %d, Duration: %u ms'
  //                           args:
  //                             - !lambda |-
  //                               response->status_code
  //                             - !lambda |-
  //                               response->duration_ms
  //                           level: DEBUG
  //                           logger_id: logger_logger_id
  //                           tag: main
  //                         type_id: lambdaaction_id_15
  //                       - lambda: !lambda |-
  //                           size_t size = sizeof(id(RECIPE_WINE_VOLUME)) / sizeof(id(RECIPE_WINE_VOLUME)[0]);
  //                           for (size_t i = 0; i < size; i++) {
  //                             id(RECIPE_WINE_VOLUME)[i] = 0;
  //                             id(RECIPE_TANK_ORDER)[i] = 0;
  //                           }
  //                         type_id: lambdaaction_id_16
  //                       - lambda: !lambda |-
  //                           ESP_LOGI("recipe", "获取配方JSON...");
  //                           json::parse_json(body, [](JsonObject root) -> bool {
  //                             if (root["code"].as<int>() != 1) {
  //                               ESP_LOGW("recipe", "服务器返回无配方或错误");
  //                                只有在没有执行配方时才清空缓存
  //                               return false;
  //                             } else {
  //                               JsonArray result_index = root["data"]["result_index"];
  //                               JsonArray result = root["data"]["result"];
  //                               for (JsonObject item : result_index) {
  //                                 for (JsonPair pair : item) {
  //                                   ESP_LOGI("recipe", "result_index 水箱编号=%s, 容量=%.1f", pair.key().c_str(), pair.value().as<float>());
  //                                 }
  //                               }
  //                               for (JsonObject item : result) {
  //                                 for (JsonPair pair : item) {
  //                                   ESP_LOGI("recipe", "酒配方: %s, 容量=%.1f", pair.key().c_str(), pair.value().as<float>());
  //                                 }
  //                               }
  //                               int idx = 1;
  //                               for (JsonObject item : result_index) {
  //                                 for (JsonPair pair : item) {
  //                                   if (idx > 7) break;
  //                                   int tank_num = atoi(pair.key().c_str());
  //                                   float volume = pair.value().as<float>();
  //                                   if (tank_num >= 1 && tank_num <= 8 && volume > 0.0f) {
  //                                     id(RECIPE_WINE_VOLUME)[idx-1] = volume;
  //                                     id(RECIPE_TANK_ORDER)[idx-1] = tank_num;
  //                                     idx++;
  //                                   } else {
  //                                     ESP_LOGW("recipe", "忽略无效步骤: 水箱=%d, 体积=%.2f", tank_num, volume);
  //                                   }
  //                                 }
  //                               }
  //                               id(RECIPE_READY) = true;
  //                               return true;
  //                             }
  //                           });
  //                         type_id: lambdaaction_id_17
  //                     else:
  //                       - globals.set:
  //                           id: SERVER_STATUS
  //                           value: 'false'
  //                         type_id: globals_globalvarsetaction_id_7
  //                       - logger.log:
  //                           format: 'Error: Response status: %d, message %s'
  //                           args:
  //                             - !lambda |-
  //                               response->status_code
  //                             - !lambda |-
  //                               body.c_str()
  //                           level: DEBUG
  //                           logger_id: logger_logger_id
  //                           tag: main
  //                         type_id: lambdaaction_id_18
  //                   type_id: ifaction_id_4
  //               automation_id: automation_id_12
  //               trigger_id: http_request_httprequestresponsetrigger_id
  //           on_error:
  //             - then:
  //                 - logger.log:
  //                     format: Request failed!
  //                     level: DEBUG
  //                     logger_id: logger_logger_id
  //                     args: []
  //                     tag: main
  //                   type_id: lambdaaction_id_19
  //               automation_id: automation_id_13
  //               trigger_id: trigger_id_9
  //           id: http_request_httprequestidf_id
  //           method: POST
  //         type_id: http_request_httprequestsendaction_id
  //     trigger_id: trigger_id_10
  //     automation_id: automation_id_14
  //     parameters: {}
  make_recipe = new script::SingleScript<>();
  make_recipe->set_name(LOG_STR("make_recipe"));
  pour_liquid = new script::QueueingScript<int, float>();
  pour_liquid->set_name(LOG_STR("pour_liquid"));
  pour_liquid->set_component_source(LOG_STR("script"));
  App.register_component(pour_liquid);
  turn_off_all_valves = new script::RestartScript<>();
  turn_off_all_valves->set_name(LOG_STR("turn_off_all_valves"));
  turn_on_all_valves = new script::RestartScript<>();
  turn_on_all_valves->set_name(LOG_STR("turn_on_all_valves"));
  clean_system = new script::SingleScript<>();
  clean_system->set_name(LOG_STR("clean_system"));
  get_recipe = new script::SingleScript<>();
  get_recipe->set_name(LOG_STR("get_recipe"));
  automation_id_7 = new Automation<>(make_recipe);
  // external_components:
  //   - source:
  //       url: https:github.com/miceno/esphome-http_request
  //       ref: fix/infinite-loop
  //       type: git
  //     components:
  //       - http_request
  //     refresh: 1d
  // psram:
  //   mode: octal
  //   speed: 80MHZ
  //   id: psram_psramcomponent_id
  //   enable_ecc: false
  //   disabled: false
  psram_psramcomponent_id = new psram::PsramComponent();
  psram_psramcomponent_id->set_component_source(LOG_STR("psram"));
  App.register_component(psram_psramcomponent_id);
  // http_request:
  //   verify_ssl: true
  //   watchdog_timeout: 10s
  //   timeout: 3s
  //   id: http_request_httprequestidf_id
  //   useragent: ESPHome/2025.10.4 (https:esphome.io)
  //   follow_redirects: true
  //   redirect_limit: 3
  //   buffer_size_rx: 512
  //   buffer_size_tx: 512
  http_request_httprequestidf_id = new http_request::HttpRequestIDF();
  http_request_httprequestidf_id->set_timeout(3000);
  http_request_httprequestidf_id->set_useragent("ESPHome/2025.10.4 (https://esphome.io)");
  http_request_httprequestidf_id->set_follow_redirects(true);
  http_request_httprequestidf_id->set_redirect_limit(3);
  http_request_httprequestidf_id->set_watchdog_timeout(10000);
  http_request_httprequestidf_id->set_buffer_size_rx(512);
  http_request_httprequestidf_id->set_buffer_size_tx(512);
  http_request_httprequestidf_id->set_component_source(LOG_STR("http_request"));
  App.register_component(http_request_httprequestidf_id);
  // packet_transport.uart:
  //   platform: uart
  //   uart_id: uart_com
  //   update_interval: 1s
  //   binary_sensors:
  //     - id: pouring
  //     - id: valve1_control
  //     - id: valve2_control
  //     - id: water_pump_control
  //     - id: o3_control
  //     - id: wifi_status_main
  //     - id: server_status_main
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
  uart_uarttransport_id->add_provider("baros-slave");
  uart_uarttransport_id->add_binary_sensor("pouring", pouring);
  uart_uarttransport_id->add_binary_sensor("valve1_control", valve1_control);
  uart_uarttransport_id->add_binary_sensor("valve2_control", valve2_control);
  uart_uarttransport_id->add_binary_sensor("water_pump_control", water_pump_control);
  uart_uarttransport_id->add_binary_sensor("o3_control", o3_control);
  uart_uarttransport_id->add_binary_sensor("wifi_status_main", wifi_status_main);
  uart_uarttransport_id->add_binary_sensor("server_status_main", server_status_main);
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
  //     id: esp32_esp32internalgpiopin_id
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
  //     id: esp32_esp32internalgpiopin_id_2
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
  esp32_esp32internalgpiopin_id = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_17);
  esp32_esp32internalgpiopin_id->set_inverted(false);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_OUTPUT);
  uart_com->set_tx_pin(esp32_esp32internalgpiopin_id);
  esp32_esp32internalgpiopin_id_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_2->set_pin(::GPIO_NUM_18);
  esp32_esp32internalgpiopin_id_2->set_inverted(false);
  esp32_esp32internalgpiopin_id_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_2->set_flags(gpio::Flags::FLAG_INPUT);
  uart_com->set_rx_pin(esp32_esp32internalgpiopin_id_2);
  uart_com->set_rx_buffer_size(256);
  uart_com->set_rx_full_threshold(114);
  uart_com->set_rx_timeout(2);
  uart_com->set_stop_bits(1);
  uart_com->set_data_bits(8);
  uart_com->set_parity(uart::UART_CONFIG_PARITY_NONE);
  // sensor.adc:
  //   platform: adc
  //   name: Water Pump Voltage
  //   id: pump_V
  //   pin:
  //     number: 6
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_3
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: V
  //   accuracy_decimals: 2
  //   device_class: voltage
  //   state_class: measurement
  //   raw: false
  //   attenuation: 0db
  //   samples: 1
  //   sampling_mode: avg
  //   update_interval: 60s
  pump_V = new adc::ADCSensor();
  pump_V->set_update_interval(60000);
  pump_V->set_component_source(LOG_STR("adc.sensor"));
  App.register_component(pump_V);
  App.register_sensor(pump_V);
  pump_V->set_name("Water Pump Voltage");
  pump_V->set_object_id("water_pump_voltage");
  pump_V->set_disabled_by_default(false);
  pump_V->set_device_class("voltage");
  pump_V->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  pump_V->set_unit_of_measurement("V");
  pump_V->set_accuracy_decimals(2);
  pump_V->set_force_update(false);
  esp32_esp32internalgpiopin_id_3 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_3->set_pin(::GPIO_NUM_6);
  esp32_esp32internalgpiopin_id_3->set_inverted(false);
  esp32_esp32internalgpiopin_id_3->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_3->set_flags(gpio::Flags::FLAG_INPUT);
  pump_V->set_pin(esp32_esp32internalgpiopin_id_3);
  pump_V->set_output_raw(false);
  pump_V->set_sample_count(1);
  pump_V->set_sampling_mode(adc::SamplingMode::AVG);
  pump_V->set_attenuation(ADC_ATTEN_DB_0);
  pump_V->set_channel(::adc_unit_t::ADC_UNIT_1, ::adc_channel_t::ADC_CHANNEL_5);
  // sensor.adc:
  //   platform: adc
  //   name: O3 Voltage
  //   id: o3_V
  //   pin:
  //     number: 8
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_4
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: V
  //   accuracy_decimals: 2
  //   device_class: voltage
  //   state_class: measurement
  //   raw: false
  //   attenuation: 0db
  //   samples: 1
  //   sampling_mode: avg
  //   update_interval: 60s
  o3_V = new adc::ADCSensor();
  o3_V->set_update_interval(60000);
  o3_V->set_component_source(LOG_STR("adc.sensor"));
  App.register_component(o3_V);
  App.register_sensor(o3_V);
  o3_V->set_name("O3 Voltage");
  o3_V->set_object_id("o3_voltage");
  o3_V->set_disabled_by_default(false);
  o3_V->set_device_class("voltage");
  o3_V->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  o3_V->set_unit_of_measurement("V");
  o3_V->set_accuracy_decimals(2);
  o3_V->set_force_update(false);
  esp32_esp32internalgpiopin_id_4 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_4->set_pin(::GPIO_NUM_8);
  esp32_esp32internalgpiopin_id_4->set_inverted(false);
  esp32_esp32internalgpiopin_id_4->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_4->set_flags(gpio::Flags::FLAG_INPUT);
  o3_V->set_pin(esp32_esp32internalgpiopin_id_4);
  o3_V->set_output_raw(false);
  o3_V->set_sample_count(1);
  o3_V->set_sampling_mode(adc::SamplingMode::AVG);
  o3_V->set_attenuation(ADC_ATTEN_DB_0);
  o3_V->set_channel(::adc_unit_t::ADC_UNIT_1, ::adc_channel_t::ADC_CHANNEL_7);
  // sensor.ntc:
  //   platform: ntc
  //   sensor: resistance_sensor
  //   calibration:
  //     a: 0.0010222846949397243
  //     b: 0.00025316455696202533
  //     c: 0
  //   name: NTC Temperature
  //   disabled_by_default: false
  //   force_update: false
  //   id: ntc_ntc_id
  //   unit_of_measurement: °C
  //   accuracy_decimals: 1
  //   device_class: temperature
  //   state_class: measurement
  ntc_ntc_id = new ntc::NTC();
  App.register_sensor(ntc_ntc_id);
  ntc_ntc_id->set_name("NTC Temperature");
  ntc_ntc_id->set_object_id("ntc_temperature");
  ntc_ntc_id->set_disabled_by_default(false);
  ntc_ntc_id->set_device_class("temperature");
  ntc_ntc_id->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  ntc_ntc_id->set_unit_of_measurement("\302\260C");
  ntc_ntc_id->set_accuracy_decimals(1);
  ntc_ntc_id->set_force_update(false);
  ntc_ntc_id->set_component_source(LOG_STR("ntc.sensor"));
  App.register_component(ntc_ntc_id);
  // sensor.resistance:
  //   platform: resistance
  //   id: resistance_sensor
  //   sensor: source_sensor
  //   configuration: DOWNSTREAM
  //   resistor: 20000.0
  //   reference_voltage: 5.0
  //   name: Resistance Sensor
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: Ω
  //   icon: mdi:flash
  //   accuracy_decimals: 1
  //   state_class: measurement
  resistance_sensor = new resistance::ResistanceSensor();
  App.register_sensor(resistance_sensor);
  resistance_sensor->set_name("Resistance Sensor");
  resistance_sensor->set_object_id("resistance_sensor");
  resistance_sensor->set_disabled_by_default(false);
  resistance_sensor->set_icon("mdi:flash");
  resistance_sensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  resistance_sensor->set_unit_of_measurement("\316\251");
  resistance_sensor->set_accuracy_decimals(1);
  resistance_sensor->set_force_update(false);
  resistance_sensor->set_component_source(LOG_STR("resistance.sensor"));
  App.register_component(resistance_sensor);
  // sensor.adc:
  //   platform: adc
  //   id: source_sensor
  //   pin:
  //     number: 15
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_5
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   update_interval: 1s
  //   attenuation: 12db
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: V
  //   accuracy_decimals: 2
  //   device_class: voltage
  //   state_class: measurement
  //   raw: false
  //   samples: 1
  //   sampling_mode: avg
  //   name: source_sensor
  //   internal: true
  source_sensor = new adc::ADCSensor();
  source_sensor->set_update_interval(1000);
  source_sensor->set_component_source(LOG_STR("adc.sensor"));
  App.register_component(source_sensor);
  App.register_sensor(source_sensor);
  source_sensor->set_name("source_sensor");
  source_sensor->set_object_id("source_sensor");
  source_sensor->set_disabled_by_default(false);
  source_sensor->set_internal(true);
  source_sensor->set_device_class("voltage");
  source_sensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  source_sensor->set_unit_of_measurement("V");
  source_sensor->set_accuracy_decimals(2);
  source_sensor->set_force_update(false);
  esp32_esp32internalgpiopin_id_5 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_5->set_pin(::GPIO_NUM_15);
  esp32_esp32internalgpiopin_id_5->set_inverted(false);
  esp32_esp32internalgpiopin_id_5->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_5->set_flags(gpio::Flags::FLAG_INPUT);
  source_sensor->set_pin(esp32_esp32internalgpiopin_id_5);
  source_sensor->set_output_raw(false);
  source_sensor->set_sample_count(1);
  source_sensor->set_sampling_mode(adc::SamplingMode::AVG);
  source_sensor->set_attenuation(adc::ADC_ATTEN_DB_12_COMPAT);
  source_sensor->set_channel(::adc_unit_t::ADC_UNIT_2, ::adc_channel_t::ADC_CHANNEL_4);
  // number.template:
  //   platform: template
  //   name: 泵1运行时间
  //   id: pump1_duration
  //   min_value: 1.0
  //   max_value: 15.0
  //   step: 0.1
  //   unit_of_measurement: 秒
  //   mode: BOX
  //   optimistic: true
  //   initial_value: 5.0
  //   disabled_by_default: false
  //   update_interval: 60s
  pump1_duration = new template_::TemplateNumber();
  pump1_duration->set_update_interval(60000);
  pump1_duration->set_component_source(LOG_STR("template.number"));
  App.register_component(pump1_duration);
  App.register_number(pump1_duration);
  pump1_duration->set_name("\346\263\2651\350\277\220\350\241\214\346\227\266\351\227\264");
  pump1_duration->set_object_id("_1____");
  pump1_duration->set_disabled_by_default(false);
  pump1_duration->traits.set_min_value(1.0f);
  pump1_duration->traits.set_max_value(15.0f);
  pump1_duration->traits.set_step(0.1f);
  pump1_duration->traits.set_mode(number::NUMBER_MODE_BOX);
  pump1_duration->traits.set_unit_of_measurement("\347\247\222");
  pump1_duration->set_optimistic(true);
  pump1_duration->set_initial_value(5.0f);
  // button.restart:
  //   platform: restart
  //   name: restart
  //   id: restart_button
  //   disabled_by_default: false
  //   icon: mdi:restart
  //   entity_category: config
  //   device_class: restart
  restart_button = new restart::RestartButton();
  restart_button->set_component_source(LOG_STR("restart.button"));
  App.register_component(restart_button);
  App.register_button(restart_button);
  restart_button->set_name("restart");
  restart_button->set_object_id("restart");
  restart_button->set_disabled_by_default(false);
  restart_button->set_icon("mdi:restart");
  restart_button->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  restart_button->set_device_class("restart");
  // button.template:
  //   platform: template
  //   name: 启动泵1
  //   id: start_pump1
  //   on_press:
  //     - then:
  //         - logger.log:
  //             format: 泵1滑轨控制启动
  //             level: DEBUG
  //             logger_id: logger_logger_id
  //             args: []
  //             tag: main
  //           type_id: lambdaaction_id_20
  //         - lambda: !lambda |-
  //             float duration = id(pump1_duration).state;
  //             ESP_LOGI("pump1", "启动泵1，速度100%，运行%.1f秒", duration);
  //           type_id: lambdaaction_id_21
  //         - fan.turn_on:
  //             id: pump1
  //             speed: 100
  //           type_id: fan_turnonaction_id
  //         - lambda: !lambda |-
  //             float duration = id(pump1_duration).state;
  //             ESP_LOGI("pump1", "泵1运行中，等待%.1f秒", duration);
  //           type_id: lambdaaction_id_22
  //         - delay: !lambda |-
  //             return id(pump1_duration).state * 1000;
  //           type_id: delayaction_id_16
  //         - lambda: !lambda |-
  //             ESP_LOGI("pump1", "关闭泵1");
  //           type_id: lambdaaction_id_23
  //         - fan.turn_off:
  //             id: pump1
  //           type_id: fan_turnoffaction_id
  //         - logger.log:
  //             format: 泵1滑轨控制完成
  //             level: DEBUG
  //             logger_id: logger_logger_id
  //             args: []
  //             tag: main
  //           type_id: lambdaaction_id_24
  //       automation_id: automation_id_15
  //       trigger_id: button_buttonpresstrigger_id
  //   disabled_by_default: false
  start_pump1 = new template_::TemplateButton();
  App.register_button(start_pump1);
  start_pump1->set_name("\345\220\257\345\212\250\346\263\2651");
  start_pump1->set_object_id("___1");
  start_pump1->set_disabled_by_default(false);
  button_buttonpresstrigger_id = new button::ButtonPressTrigger(start_pump1);
  automation_id_15 = new Automation<>(button_buttonpresstrigger_id);
  lambdaaction_id_20 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "\346\263\2651\346\273\221\350\275\250\346\216\247\345\210\266\345\220\257\345\212\250");
  });
  lambdaaction_id_21 = new LambdaAction<>([=]() -> void {
      #line 304 "baros2.yaml"
      float duration = pump1_duration->state;
      ESP_LOGI("pump1", "启动泵1，速度100%，运行%.1f秒", duration);
  });
  // button.template:
  //   platform: template
  //   name: 测试泵和水箱距离
  //   on_press:
  //     - then:
  //         - fan.turn_on:
  //             id: pump1
  //             speed: 100
  //           type_id: fan_turnonaction_id_2
  //         - wait_until:
  //             condition:
  //               and:
  //                 - binary_sensor.is_on:
  //                     id: liquid1
  //                   type_id: binary_sensor_binarysensorcondition_id_3
  //               type_id: andcondition_id_3
  //             timeout: 15s
  //           type_id: waituntilaction_id_4
  //         - lambda: !lambda |-
  //             float duration = id(pump1_duration).state;
  //             ESP_LOGI("pump1", "泵1运行中，等待%.1f秒", duration);
  //           type_id: lambdaaction_id_25
  //         - delay: !lambda |-
  //             return id(pump1_duration).state * 1000;
  //           type_id: delayaction_id_17
  //         - fan.turn_off:
  //             id: pump1
  //           type_id: fan_turnoffaction_id_2
  //       automation_id: automation_id_16
  //       trigger_id: button_buttonpresstrigger_id_2
  //   disabled_by_default: false
  //   id: template__templatebutton_id
  template__templatebutton_id = new template_::TemplateButton();
  App.register_button(template__templatebutton_id);
  template__templatebutton_id->set_name("\346\265\213\350\257\225\346\263\265\345\222\214\346\260\264\347\256\261\350\267\235\347\246\273");
  template__templatebutton_id->set_object_id("________");
  template__templatebutton_id->set_disabled_by_default(false);
  button_buttonpresstrigger_id_2 = new button::ButtonPressTrigger(template__templatebutton_id);
  automation_id_16 = new Automation<>(button_buttonpresstrigger_id_2);
  // button.template:
  //   platform: template
  //   name: 一键清洗
  //   id: start_clean_system
  //   on_press:
  //     - then:
  //         - script.execute:
  //             id: clean_system
  //           type_id: script_scriptexecuteaction_id_5
  //       automation_id: automation_id_17
  //       trigger_id: button_buttonpresstrigger_id_3
  //   disabled_by_default: false
  start_clean_system = new template_::TemplateButton();
  App.register_button(start_clean_system);
  start_clean_system->set_name("\344\270\200\351\224\256\346\270\205\346\264\227");
  start_clean_system->set_object_id("____");
  start_clean_system->set_disabled_by_default(false);
  button_buttonpresstrigger_id_3 = new button::ButtonPressTrigger(start_clean_system);
  automation_id_17 = new Automation<>(button_buttonpresstrigger_id_3);
  script_scriptexecuteaction_id_5 = new script::ScriptExecuteAction<script::Script<>>(clean_system);
  script_scriptexecuteaction_id_5->set_args();
  automation_id_17->add_actions({script_scriptexecuteaction_id_5});
  // switch.template:
  //   platform: template
  //   name: STOP_POST
  //   id: STOP_POST
  //   optimistic: true
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   assumed_state: false
  STOP_POST = new template_::TemplateSwitch();
  App.register_switch(STOP_POST);
  STOP_POST->set_name("STOP_POST");
  STOP_POST->set_object_id("stop_post");
  STOP_POST->set_disabled_by_default(false);
  STOP_POST->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  STOP_POST->set_component_source(LOG_STR("template.switch"));
  App.register_component(STOP_POST);
  STOP_POST->set_optimistic(true);
  STOP_POST->set_assumed_state(false);
  // switch.template:
  //   platform: template
  //   name: 水泵
  //   id: water_pump
  //   lambda: !lambda |-
  //     return id(water_pump_slave).state;
  //   turn_on_action:
  //     then:
  //       - lambda: !lambda |-
  //           return id(water_pump_slave).publish_state(true);
  //         type_id: lambdaaction_id_26
  //     trigger_id: trigger_id_11
  //     automation_id: automation_id_18
  //   turn_off_action:
  //     then:
  //       - lambda: !lambda |-
  //           return id(water_pump_slave).publish_state(false);
  //         type_id: lambdaaction_id_27
  //     trigger_id: trigger_id_12
  //     automation_id: automation_id_19
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   optimistic: false
  //   assumed_state: false
  water_pump = new template_::TemplateSwitch();
  App.register_switch(water_pump);
  water_pump->set_name("\346\260\264\346\263\265");
  water_pump->set_object_id("__");
  water_pump->set_disabled_by_default(false);
  water_pump->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  water_pump->set_component_source(LOG_STR("template.switch"));
  App.register_component(water_pump);
  water_pump->set_state_lambda([=]() -> esphome::optional<bool> {
      #line 353 "baros2.yaml"
      return water_pump_slave->state;
  });
  automation_id_19 = new Automation<>(water_pump->get_turn_off_trigger());
  lambdaaction_id_27 = new LambdaAction<>([=]() -> void {
      #line 357 "baros2.yaml"
      return water_pump_slave->publish_state(false);
  });
  automation_id_19->add_actions({lambdaaction_id_27});
  automation_id_18 = new Automation<>(water_pump->get_turn_on_trigger());
  lambdaaction_id_26 = new LambdaAction<>([=]() -> void {
      #line 355 "baros2.yaml"
      return water_pump_slave->publish_state(true);
  });
  automation_id_18->add_actions({lambdaaction_id_26});
  water_pump->set_optimistic(false);
  water_pump->set_assumed_state(false);
  // switch.template:
  //   platform: template
  //   name: Valve 1
  //   id: valve1
  //   lambda: !lambda |-
  //     return id(valve1_slave).state;
  //   turn_on_action:
  //     then:
  //       - lambda: !lambda |-
  //           return id(valve1_slave).publish_state(true);
  //         type_id: lambdaaction_id_28
  //     trigger_id: trigger_id_13
  //     automation_id: automation_id_20
  //   turn_off_action:
  //     then:
  //       - lambda: !lambda |-
  //           return id(valve1_slave).publish_state(false);
  //         type_id: lambdaaction_id_29
  //     trigger_id: trigger_id_14
  //     automation_id: automation_id_21
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   optimistic: false
  //   assumed_state: false
  valve1 = new template_::TemplateSwitch();
  App.register_switch(valve1);
  valve1->set_name("Valve 1");
  valve1->set_object_id("valve_1");
  valve1->set_disabled_by_default(false);
  valve1->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  valve1->set_component_source(LOG_STR("template.switch"));
  App.register_component(valve1);
  valve1->set_state_lambda([=]() -> esphome::optional<bool> {
      #line 362 "baros2.yaml"
      return valve1_slave->state;
  });
  automation_id_21 = new Automation<>(valve1->get_turn_off_trigger());
  lambdaaction_id_29 = new LambdaAction<>([=]() -> void {
      #line 366 "baros2.yaml"
      return valve1_slave->publish_state(false);
  });
  automation_id_21->add_actions({lambdaaction_id_29});
  automation_id_20 = new Automation<>(valve1->get_turn_on_trigger());
  lambdaaction_id_28 = new LambdaAction<>([=]() -> void {
      #line 364 "baros2.yaml"
      return valve1_slave->publish_state(true);
  });
  automation_id_20->add_actions({lambdaaction_id_28});
  valve1->set_optimistic(false);
  valve1->set_assumed_state(false);
  // switch.template:
  //   platform: template
  //   name: Valve 2
  //   id: valve2
  //   lambda: !lambda |-
  //     return id(valve2_slave).state;
  //   turn_on_action:
  //     then:
  //       - lambda: !lambda |-
  //           return id(valve2_slave).publish_state(true);
  //         type_id: lambdaaction_id_30
  //     trigger_id: trigger_id_15
  //     automation_id: automation_id_22
  //   turn_off_action:
  //     then:
  //       - lambda: !lambda |-
  //           return id(valve2_slave).publish_state(false);
  //         type_id: lambdaaction_id_31
  //     trigger_id: trigger_id_16
  //     automation_id: automation_id_23
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   optimistic: false
  //   assumed_state: false
  valve2 = new template_::TemplateSwitch();
  App.register_switch(valve2);
  valve2->set_name("Valve 2");
  valve2->set_object_id("valve_2");
  valve2->set_disabled_by_default(false);
  valve2->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  valve2->set_component_source(LOG_STR("template.switch"));
  App.register_component(valve2);
  valve2->set_state_lambda([=]() -> esphome::optional<bool> {
      #line 371 "baros2.yaml"
      return valve2_slave->state;
  });
  automation_id_23 = new Automation<>(valve2->get_turn_off_trigger());
  lambdaaction_id_31 = new LambdaAction<>([=]() -> void {
      #line 375 "baros2.yaml"
      return valve2_slave->publish_state(false);
  });
  automation_id_23->add_actions({lambdaaction_id_31});
  automation_id_22 = new Automation<>(valve2->get_turn_on_trigger());
  lambdaaction_id_30 = new LambdaAction<>([=]() -> void {
      #line 373 "baros2.yaml"
      return valve2_slave->publish_state(true);
  });
  automation_id_22->add_actions({lambdaaction_id_30});
  valve2->set_optimistic(false);
  valve2->set_assumed_state(false);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 4
  //     mode:
  //       output: true
  //       pulldown: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //     id: esp32_esp32internalgpiopin_id_6
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: 24V Relay
  //   internal: true
  //   id: relay
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  relay = new gpio::GPIOSwitch();
  App.register_switch(relay);
  relay->set_name("24V Relay");
  relay->set_object_id("24v_relay");
  relay->set_disabled_by_default(false);
  relay->set_internal(true);
  relay->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  relay->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(relay);
  esp32_esp32internalgpiopin_id_6 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_6->set_pin(::GPIO_NUM_4);
  esp32_esp32internalgpiopin_id_6->set_inverted(false);
  esp32_esp32internalgpiopin_id_6->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_6->set_flags((gpio::Flags::FLAG_OUTPUT | gpio::Flags::FLAG_PULLDOWN));
  relay->set_pin(esp32_esp32internalgpiopin_id_6);
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
  //     id: esp32_esp32internalgpiopin_id_7
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Pump1_Reverse 泵反转
  //   id: pump1_reverse
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  pump1_reverse = new gpio::GPIOSwitch();
  App.register_switch(pump1_reverse);
  pump1_reverse->set_name("Pump1_Reverse \346\263\265\345\217\215\350\275\254");
  pump1_reverse->set_object_id("pump1_reverse____");
  pump1_reverse->set_disabled_by_default(false);
  pump1_reverse->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  pump1_reverse->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(pump1_reverse);
  esp32_esp32internalgpiopin_id_7 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_7->set_pin(::GPIO_NUM_1);
  esp32_esp32internalgpiopin_id_7->set_inverted(false);
  esp32_esp32internalgpiopin_id_7->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_7->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump1_reverse->set_pin(esp32_esp32internalgpiopin_id_7);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 42
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_8
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Pump2_Reverse 泵反转
  //   id: pump2_reverse
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  pump2_reverse = new gpio::GPIOSwitch();
  App.register_switch(pump2_reverse);
  pump2_reverse->set_name("Pump2_Reverse \346\263\265\345\217\215\350\275\254");
  pump2_reverse->set_object_id("pump2_reverse____");
  pump2_reverse->set_disabled_by_default(false);
  pump2_reverse->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  pump2_reverse->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(pump2_reverse);
  esp32_esp32internalgpiopin_id_8 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_8->set_pin(::GPIO_NUM_42);
  esp32_esp32internalgpiopin_id_8->set_inverted(false);
  esp32_esp32internalgpiopin_id_8->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_8->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump2_reverse->set_pin(esp32_esp32internalgpiopin_id_8);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 40
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_9
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Pump3_Reverse 泵反转
  //   id: pump3_reverse
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  pump3_reverse = new gpio::GPIOSwitch();
  App.register_switch(pump3_reverse);
  pump3_reverse->set_name("Pump3_Reverse \346\263\265\345\217\215\350\275\254");
  pump3_reverse->set_object_id("pump3_reverse____");
  pump3_reverse->set_disabled_by_default(false);
  pump3_reverse->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  pump3_reverse->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(pump3_reverse);
  esp32_esp32internalgpiopin_id_9 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_9->set_pin(::GPIO_NUM_40);
  esp32_esp32internalgpiopin_id_9->set_inverted(false);
  esp32_esp32internalgpiopin_id_9->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_9->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump3_reverse->set_pin(esp32_esp32internalgpiopin_id_9);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 38
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_10
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Pump4_Reverse 泵反转
  //   id: pump4_reverse
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  pump4_reverse = new gpio::GPIOSwitch();
  App.register_switch(pump4_reverse);
  pump4_reverse->set_name("Pump4_Reverse \346\263\265\345\217\215\350\275\254");
  pump4_reverse->set_object_id("pump4_reverse____");
  pump4_reverse->set_disabled_by_default(false);
  pump4_reverse->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  pump4_reverse->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(pump4_reverse);
  esp32_esp32internalgpiopin_id_10 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_10->set_pin(::GPIO_NUM_38);
  esp32_esp32internalgpiopin_id_10->set_inverted(false);
  esp32_esp32internalgpiopin_id_10->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_10->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump4_reverse->set_pin(esp32_esp32internalgpiopin_id_10);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 47
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
  //   name: Pump5_Reverse 泵反转
  //   id: pump5_reverse
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  pump5_reverse = new gpio::GPIOSwitch();
  App.register_switch(pump5_reverse);
  pump5_reverse->set_name("Pump5_Reverse \346\263\265\345\217\215\350\275\254");
  pump5_reverse->set_object_id("pump5_reverse____");
  pump5_reverse->set_disabled_by_default(false);
  pump5_reverse->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  pump5_reverse->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(pump5_reverse);
  esp32_esp32internalgpiopin_id_11 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_11->set_pin(::GPIO_NUM_47);
  esp32_esp32internalgpiopin_id_11->set_inverted(false);
  esp32_esp32internalgpiopin_id_11->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_11->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump5_reverse->set_pin(esp32_esp32internalgpiopin_id_11);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 14
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_12
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Pump6_Reverse 泵反转
  //   id: pump6_reverse
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  pump6_reverse = new gpio::GPIOSwitch();
  App.register_switch(pump6_reverse);
  pump6_reverse->set_name("Pump6_Reverse \346\263\265\345\217\215\350\275\254");
  pump6_reverse->set_object_id("pump6_reverse____");
  pump6_reverse->set_disabled_by_default(false);
  pump6_reverse->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  pump6_reverse->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(pump6_reverse);
  esp32_esp32internalgpiopin_id_12 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_12->set_pin(::GPIO_NUM_14);
  esp32_esp32internalgpiopin_id_12->set_inverted(false);
  esp32_esp32internalgpiopin_id_12->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_12->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump6_reverse->set_pin(esp32_esp32internalgpiopin_id_12);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 12
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
  //   name: Pump7_Reverse 泵反转
  //   id: pump7_reverse
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  pump7_reverse = new gpio::GPIOSwitch();
  App.register_switch(pump7_reverse);
  pump7_reverse->set_name("Pump7_Reverse \346\263\265\345\217\215\350\275\254");
  pump7_reverse->set_object_id("pump7_reverse____");
  pump7_reverse->set_disabled_by_default(false);
  pump7_reverse->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  pump7_reverse->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(pump7_reverse);
  esp32_esp32internalgpiopin_id_13 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_13->set_pin(::GPIO_NUM_12);
  esp32_esp32internalgpiopin_id_13->set_inverted(false);
  esp32_esp32internalgpiopin_id_13->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_13->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump7_reverse->set_pin(esp32_esp32internalgpiopin_id_13);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 10
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_14
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Pump8_Reverse 泵反转
  //   id: pump8_reverse
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  pump8_reverse = new gpio::GPIOSwitch();
  App.register_switch(pump8_reverse);
  pump8_reverse->set_name("Pump8_Reverse \346\263\265\345\217\215\350\275\254");
  pump8_reverse->set_object_id("pump8_reverse____");
  pump8_reverse->set_disabled_by_default(false);
  pump8_reverse->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  pump8_reverse->set_component_source(LOG_STR("gpio.switch"));
  App.register_component(pump8_reverse);
  esp32_esp32internalgpiopin_id_14 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_14->set_pin(::GPIO_NUM_10);
  esp32_esp32internalgpiopin_id_14->set_inverted(false);
  esp32_esp32internalgpiopin_id_14->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_14->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump8_reverse->set_pin(esp32_esp32internalgpiopin_id_14);
  // light.esp32_rmt_led_strip:
  //   platform: esp32_rmt_led_strip
  //   id: led_rgb1
  //   name: LED Button
  //   rgb_order: GRB
  //   pin: 7
  //   num_leds: 4
  //   chipset: WS2812
  //   on_turn_on:
  //     - then:
  //         - light.turn_on:
  //             id: led_rgb1
  //             red: 0.598
  //             green: 0.688
  //             blue: 1.0
  //             brightness: 1.0
  //             state: true
  //           type_id: light_lightcontrolaction_id_3
  //       automation_id: automation_id_24
  //       trigger_id: light_lightturnontrigger_id
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   flash_transition_length: 0s
  //   output_id: esp32_rmt_led_strip_esp32rmtledstriplightoutput_id
  //   rmt_symbols: 192
  //   is_rgbw: false
  //   is_wrgb: false
  //   use_psram: true
  //   reset_high: 0us
  //   reset_low: 0us
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id = new esp32_rmt_led_strip::ESP32RMTLEDStripLightOutput();
  led_rgb1 = new light::AddressableLightState(esp32_rmt_led_strip_esp32rmtledstriplightoutput_id);
  App.register_light(led_rgb1);
  led_rgb1->set_component_source(LOG_STR("light"));
  App.register_component(led_rgb1);
  led_rgb1->set_name("LED Button");
  led_rgb1->set_object_id("led_button");
  led_rgb1->set_disabled_by_default(false);
  led_rgb1->set_restore_mode(light::LIGHT_ALWAYS_OFF);
  led_rgb1->set_default_transition_length(1000);
  led_rgb1->set_flash_transition_length(0);
  led_rgb1->set_gamma_correct(2.8f);
  led_rgb1->add_effects({});
  light_lightturnontrigger_id = new light::LightTurnOnTrigger(led_rgb1);
  automation_id_24 = new Automation<>(light_lightturnontrigger_id);
  light_lightcontrolaction_id_3 = new light::LightControlAction<>(led_rgb1);
  light_lightcontrolaction_id_3->set_state(true);
  light_lightcontrolaction_id_3->set_brightness(1.0f);
  light_lightcontrolaction_id_3->set_red(0.598f);
  light_lightcontrolaction_id_3->set_green(0.688f);
  light_lightcontrolaction_id_3->set_blue(1.0f);
  automation_id_24->add_actions({light_lightcontrolaction_id_3});
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_component_source(LOG_STR("esp32_rmt_led_strip.light"));
  App.register_component(esp32_rmt_led_strip_esp32rmtledstriplightoutput_id);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_num_leds(4);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_pin(7);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_led_params(400, 1000, 1000, 400, 0, 0);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_rgb_order(esp32_rmt_led_strip::ORDER_GRB);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_is_rgbw(false);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_is_wrgb(false);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_use_psram(true);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_rmt_symbols(192);
  // output:
  // output.ledc:
  //   platform: ledc
  //   id: pump1_output
  //   frequency: 800.0
  //   pin:
  //     number: 2
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
  //   zero_means_zero: false
  esp32_esp32internalgpiopin_id_15 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_15->set_pin(::GPIO_NUM_2);
  esp32_esp32internalgpiopin_id_15->set_inverted(false);
  esp32_esp32internalgpiopin_id_15->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_15->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump1_output = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_15);
  pump1_output->set_component_source(LOG_STR("ledc.output"));
  App.register_component(pump1_output);
  pump1_output->set_zero_means_zero(false);
  pump1_output->set_frequency(800.0f);
  // output.ledc:
  //   platform: ledc
  //   id: pump2_output
  //   frequency: 800.0
  //   pin:
  //     number: 41
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
  //   zero_means_zero: false
  esp32_esp32internalgpiopin_id_16 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_16->set_pin(::GPIO_NUM_41);
  esp32_esp32internalgpiopin_id_16->set_inverted(false);
  esp32_esp32internalgpiopin_id_16->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_16->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump2_output = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_16);
  pump2_output->set_component_source(LOG_STR("ledc.output"));
  App.register_component(pump2_output);
  pump2_output->set_zero_means_zero(false);
  pump2_output->set_frequency(800.0f);
  // output.ledc:
  //   platform: ledc
  //   id: pump3_output
  //   frequency: 800.0
  //   pin:
  //     number: 39
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
  //   zero_means_zero: false
  esp32_esp32internalgpiopin_id_17 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_17->set_pin(::GPIO_NUM_39);
  esp32_esp32internalgpiopin_id_17->set_inverted(false);
  esp32_esp32internalgpiopin_id_17->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_17->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump3_output = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_17);
  pump3_output->set_component_source(LOG_STR("ledc.output"));
  App.register_component(pump3_output);
  pump3_output->set_zero_means_zero(false);
  pump3_output->set_frequency(800.0f);
  // output.ledc:
  //   platform: ledc
  //   id: pump4_output
  //   frequency: 800.0
  //   pin:
  //     number: 48
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
  //   zero_means_zero: false
  esp32_esp32internalgpiopin_id_18 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_18->set_pin(::GPIO_NUM_48);
  esp32_esp32internalgpiopin_id_18->set_inverted(false);
  esp32_esp32internalgpiopin_id_18->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_18->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump4_output = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_18);
  pump4_output->set_component_source(LOG_STR("ledc.output"));
  App.register_component(pump4_output);
  pump4_output->set_zero_means_zero(false);
  pump4_output->set_frequency(800.0f);
  // output.ledc:
  //   platform: ledc
  //   id: pump5_output
  //   frequency: 800.0
  //   pin:
  //     number: 21
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
  //   zero_means_zero: false
  esp32_esp32internalgpiopin_id_19 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_19->set_pin(::GPIO_NUM_21);
  esp32_esp32internalgpiopin_id_19->set_inverted(false);
  esp32_esp32internalgpiopin_id_19->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_19->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump5_output = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_19);
  pump5_output->set_component_source(LOG_STR("ledc.output"));
  App.register_component(pump5_output);
  pump5_output->set_zero_means_zero(false);
  pump5_output->set_frequency(800.0f);
  // output.ledc:
  //   platform: ledc
  //   id: pump6_output
  //   frequency: 800.0
  //   pin:
  //     number: 13
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
  //   zero_means_zero: false
  esp32_esp32internalgpiopin_id_20 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_20->set_pin(::GPIO_NUM_13);
  esp32_esp32internalgpiopin_id_20->set_inverted(false);
  esp32_esp32internalgpiopin_id_20->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_20->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump6_output = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_20);
  pump6_output->set_component_source(LOG_STR("ledc.output"));
  App.register_component(pump6_output);
  pump6_output->set_zero_means_zero(false);
  pump6_output->set_frequency(800.0f);
  // output.ledc:
  //   platform: ledc
  //   id: pump7_output
  //   frequency: 800.0
  //   pin:
  //     number: 11
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
  //   zero_means_zero: false
  esp32_esp32internalgpiopin_id_21 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_21->set_pin(::GPIO_NUM_11);
  esp32_esp32internalgpiopin_id_21->set_inverted(false);
  esp32_esp32internalgpiopin_id_21->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_21->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump7_output = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_21);
  pump7_output->set_component_source(LOG_STR("ledc.output"));
  App.register_component(pump7_output);
  pump7_output->set_zero_means_zero(false);
  pump7_output->set_frequency(800.0f);
  // output.ledc:
  //   platform: ledc
  //   id: pump8_output
  //   frequency: 800.0
  //   pin:
  //     number: 9
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
  esp32_esp32internalgpiopin_id_22->set_pin(::GPIO_NUM_9);
  esp32_esp32internalgpiopin_id_22->set_inverted(false);
  esp32_esp32internalgpiopin_id_22->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_22->set_flags(gpio::Flags::FLAG_OUTPUT);
  pump8_output = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_22);
  pump8_output->set_component_source(LOG_STR("ledc.output"));
  App.register_component(pump8_output);
  pump8_output->set_zero_means_zero(false);
  pump8_output->set_frequency(800.0f);
  // fan.speed:
  //   platform: speed
  //   output: pump1_output
  //   name: Pump1 泵正转
  //   id: pump1
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   speed_count: 100
  pump1 = new speed::SpeedFan(100);
  App.register_fan(pump1);
  pump1->set_name("Pump1 \346\263\265\346\255\243\350\275\254");
  pump1->set_object_id("pump1____");
  pump1->set_disabled_by_default(false);
  pump1->set_restore_mode(fan::FanRestoreMode::ALWAYS_OFF);
  pump1->set_component_source(LOG_STR("speed.fan"));
  App.register_component(pump1);
  pump1->set_output(pump1_output);
  // fan.speed:
  //   platform: speed
  //   output: pump2_output
  //   name: Pump2 泵正转
  //   id: pump2
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   speed_count: 100
  pump2 = new speed::SpeedFan(100);
  App.register_fan(pump2);
  pump2->set_name("Pump2 \346\263\265\346\255\243\350\275\254");
  pump2->set_object_id("pump2____");
  pump2->set_disabled_by_default(false);
  pump2->set_restore_mode(fan::FanRestoreMode::ALWAYS_OFF);
  pump2->set_component_source(LOG_STR("speed.fan"));
  App.register_component(pump2);
  pump2->set_output(pump2_output);
  // fan.speed:
  //   platform: speed
  //   output: pump3_output
  //   name: Pump3 泵正转
  //   id: pump3
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   speed_count: 100
  pump3 = new speed::SpeedFan(100);
  App.register_fan(pump3);
  pump3->set_name("Pump3 \346\263\265\346\255\243\350\275\254");
  pump3->set_object_id("pump3____");
  pump3->set_disabled_by_default(false);
  pump3->set_restore_mode(fan::FanRestoreMode::ALWAYS_OFF);
  pump3->set_component_source(LOG_STR("speed.fan"));
  App.register_component(pump3);
  pump3->set_output(pump3_output);
  // fan.speed:
  //   platform: speed
  //   output: pump4_output
  //   name: Pump4 泵正转
  //   id: pump4
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   speed_count: 100
  pump4 = new speed::SpeedFan(100);
  App.register_fan(pump4);
  pump4->set_name("Pump4 \346\263\265\346\255\243\350\275\254");
  pump4->set_object_id("pump4____");
  pump4->set_disabled_by_default(false);
  pump4->set_restore_mode(fan::FanRestoreMode::ALWAYS_OFF);
  pump4->set_component_source(LOG_STR("speed.fan"));
  App.register_component(pump4);
  pump4->set_output(pump4_output);
  // fan.speed:
  //   platform: speed
  //   output: pump5_output
  //   name: Pump5 泵正转
  //   id: pump5
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   speed_count: 100
  pump5 = new speed::SpeedFan(100);
  App.register_fan(pump5);
  pump5->set_name("Pump5 \346\263\265\346\255\243\350\275\254");
  pump5->set_object_id("pump5____");
  pump5->set_disabled_by_default(false);
  pump5->set_restore_mode(fan::FanRestoreMode::ALWAYS_OFF);
  pump5->set_component_source(LOG_STR("speed.fan"));
  App.register_component(pump5);
  pump5->set_output(pump5_output);
  // fan.speed:
  //   platform: speed
  //   output: pump6_output
  //   name: Pump6 泵正转
  //   id: pump6
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   speed_count: 100
  pump6 = new speed::SpeedFan(100);
  App.register_fan(pump6);
  pump6->set_name("Pump6 \346\263\265\346\255\243\350\275\254");
  pump6->set_object_id("pump6____");
  pump6->set_disabled_by_default(false);
  pump6->set_restore_mode(fan::FanRestoreMode::ALWAYS_OFF);
  pump6->set_component_source(LOG_STR("speed.fan"));
  App.register_component(pump6);
  pump6->set_output(pump6_output);
  // fan.speed:
  //   platform: speed
  //   output: pump7_output
  //   name: Pump7 泵正转
  //   id: pump7
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   speed_count: 100
  pump7 = new speed::SpeedFan(100);
  App.register_fan(pump7);
  pump7->set_name("Pump7 \346\263\265\346\255\243\350\275\254");
  pump7->set_object_id("pump7____");
  pump7->set_disabled_by_default(false);
  pump7->set_restore_mode(fan::FanRestoreMode::ALWAYS_OFF);
  pump7->set_component_source(LOG_STR("speed.fan"));
  App.register_component(pump7);
  pump7->set_output(pump7_output);
  // fan.speed:
  //   platform: speed
  //   output: pump8_output
  //   name: Pump8 泵正转
  //   id: pump8
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   speed_count: 100
  pump8 = new speed::SpeedFan(100);
  App.register_fan(pump8);
  pump8->set_name("Pump8 \346\263\265\346\255\243\350\275\254");
  pump8->set_object_id("pump8____");
  pump8->set_disabled_by_default(false);
  pump8->set_restore_mode(fan::FanRestoreMode::ALWAYS_OFF);
  pump8->set_component_source(LOG_STR("speed.fan"));
  App.register_component(pump8);
  pump8->set_output(pump8_output);
  // md5:
  // socket:
  //   implementation: bsd_sockets
  // sha256:
  //   {}
  // preferences:
  //   id: preferences_intervalsyncer_id
  //   flash_write_interval: 60s
  preferences_intervalsyncer_id = new preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  preferences_intervalsyncer_id->set_component_source(LOG_STR("preferences"));
  App.register_component(preferences_intervalsyncer_id);
  // web_server_idf:
  //   {}
  binary_sensor_binarysensorpublishaction_id = new binary_sensor::BinarySensorPublishAction<>(pouring);
  binary_sensor_binarysensorpublishaction_id->set_state(false);
  light_lightcontrolaction_id = new light::LightControlAction<>(led_rgb1);
  light_lightcontrolaction_id->set_state(true);
  automation_id->add_actions({binary_sensor_binarysensorpublishaction_id, light_lightcontrolaction_id});
  http_request_otahttprequestcomponent_id->set_parent(http_request_httprequestidf_id);
  script_scriptexecuteaction_id = new script::ScriptExecuteAction<script::Script<>>(clean_system);
  script_scriptexecuteaction_id->set_args();
  automation_id_4->add_actions({script_scriptexecuteaction_id});
  uart_uarttransport_id->add_remote_binary_sensor("baros-slave", "clean_system_slave", clean_system_sensor);
  uart_uarttransport_id->add_remote_binary_sensor("baros-slave", "tank1_slave", tank1);
  uart_uarttransport_id->add_remote_binary_sensor("baros-slave", "tank2_slave", tank2);
  uart_uarttransport_id->add_remote_binary_sensor("baros-slave", "tank3_slave", tank3);
  uart_uarttransport_id->add_remote_binary_sensor("baros-slave", "tank4_slave", tank4);
  uart_uarttransport_id->add_remote_binary_sensor("baros-slave", "tank5_slave", tank5);
  uart_uarttransport_id->add_remote_binary_sensor("baros-slave", "tank6_slave", tank6);
  uart_uarttransport_id->add_remote_binary_sensor("baros-slave", "tank7_slave", tank7);
  uart_uarttransport_id->add_remote_binary_sensor("baros-slave", "tank8_slave", tank8);
  uart_uarttransport_id->add_remote_binary_sensor("baros-slave", "liquid1_slave", liquid1);
  uart_uarttransport_id->add_remote_binary_sensor("baros-slave", "liquid2_slave", liquid2);
  uart_uarttransport_id->add_remote_binary_sensor("baros-slave", "water_pump_slave_sensor", water_pump_slave);
  uart_uarttransport_id->add_remote_binary_sensor("baros-slave", "valve1_slave_sensor", valve1_slave);
  uart_uarttransport_id->add_remote_binary_sensor("baros-slave", "valve2_slave_sensor", valve2_slave);
  light_lightcontrolaction_id_2 = new light::LightControlAction<>(led_rgb1);
  light_lightcontrolaction_id_2->set_state(true);
  automation_id_5->add_actions({light_lightcontrolaction_id_2});
  uart_uarttransport_id->add_remote_binary_sensor("baros-slave", "pi_started_slave", pi_started);
  script_isrunningcondition_id = new script::IsRunningCondition<script::SingleScript<>>(make_recipe);
  script_isrunningcondition_id_2 = new script::IsRunningCondition<script::QueueingScript<int, float>>(pour_liquid);
  switch__switchcondition_id = new switch_::SwitchCondition<>(STOP_POST, true);
  orcondition_id = new OrCondition<>({script_isrunningcondition_id, script_isrunningcondition_id_2, switch__switchcondition_id});
  ifaction_id = new IfAction<>(orcondition_id);
  lambdaaction_id = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "\351\205\215\346\226\271\346\210\226\345\200\222\351\205\222\346\255\243\345\234\250\346\211\247\350\241\214\344\270\255\357\274\214\350\267\263\350\277\207\345\256\232\346\227\266\350\216\267\345\217\226;");
  });
  ifaction_id->add_then({lambdaaction_id});
  script_scriptexecuteaction_id_2 = new script::ScriptExecuteAction<script::Script<>>(get_recipe);
  script_scriptexecuteaction_id_2->set_args();
  script_scriptwaitaction_id = new script::ScriptWaitAction<script::SingleScript<>>(get_recipe);
  script_scriptwaitaction_id->set_component_source(LOG_STR("script"));
  App.register_component(script_scriptwaitaction_id);
  script_scriptexecuteaction_id_3 = new script::ScriptExecuteAction<script::Script<>>(make_recipe);
  script_scriptexecuteaction_id_3->set_args();
  script_scriptwaitaction_id_2 = new script::ScriptWaitAction<script::SingleScript<>>(make_recipe);
  script_scriptwaitaction_id_2->set_component_source(LOG_STR("script"));
  App.register_component(script_scriptwaitaction_id_2);
  ifaction_id->add_else({script_scriptexecuteaction_id_2, script_scriptwaitaction_id, script_scriptexecuteaction_id_3, script_scriptwaitaction_id_2});
  automation_id_6->add_actions({ifaction_id});
  interval_intervaltrigger_id->set_update_interval(6000);
  interval_intervaltrigger_id->set_startup_delay(0);
  uart_uarttransport_id->set_uart_parent(uart_com);
  ntc_ntc_id->set_sensor(resistance_sensor);
  ntc_ntc_id->set_a(0.0010222846949397243f);
  ntc_ntc_id->set_b(0.00025316455696202533f);
  ntc_ntc_id->set_c(0);
  resistance_sensor->set_sensor(source_sensor);
  resistance_sensor->set_configuration(resistance::DOWNSTREAM);
  resistance_sensor->set_resistor(20000.0f);
  resistance_sensor->set_reference_voltage(5.0f);
  fan_turnonaction_id = new fan::TurnOnAction<>(pump1);
  fan_turnonaction_id->set_speed(100);
  lambdaaction_id_22 = new LambdaAction<>([=]() -> void {
      #line 310 "baros2.yaml"
      float duration = pump1_duration->state;
      ESP_LOGI("pump1", "泵1运行中，等待%.1f秒", duration);
  });
  delayaction_id_16 = new DelayAction<>();
  delayaction_id_16->set_component_source(LOG_STR("button"));
  App.register_component(delayaction_id_16);
  delayaction_id_16->set_delay([=]() -> uint32_t {
      #line 312 "baros2.yaml"
      return pump1_duration->state * 1000;
  });
  lambdaaction_id_23 = new LambdaAction<>([=]() -> void {
      #line 314 "baros2.yaml"
      ESP_LOGI("pump1", "关闭泵1");
  });
  fan_turnoffaction_id = new fan::TurnOffAction<>(pump1);
  lambdaaction_id_24 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "\346\263\2651\346\273\221\350\275\250\346\216\247\345\210\266\345\256\214\346\210\220");
  });
  automation_id_15->add_actions({lambdaaction_id_20, lambdaaction_id_21, fan_turnonaction_id, lambdaaction_id_22, delayaction_id_16, lambdaaction_id_23, fan_turnoffaction_id, lambdaaction_id_24});
  fan_turnonaction_id_2 = new fan::TurnOnAction<>(pump1);
  fan_turnonaction_id_2->set_speed(100);
  binary_sensor_binarysensorcondition_id_3 = new binary_sensor::BinarySensorCondition<>(liquid1, true);
  andcondition_id_3 = new AndCondition<>({binary_sensor_binarysensorcondition_id_3});
  waituntilaction_id_4 = new WaitUntilAction<>(andcondition_id_3);
  waituntilaction_id_4->set_timeout_value(15000);
  waituntilaction_id_4->set_component_source(LOG_STR("button"));
  App.register_component(waituntilaction_id_4);
  lambdaaction_id_25 = new LambdaAction<>([=]() -> void {
      #line 329 "baros2.yaml"
      float duration = pump1_duration->state;
      ESP_LOGI("pump1", "泵1运行中，等待%.1f秒", duration);
  });
  delayaction_id_17 = new DelayAction<>();
  delayaction_id_17->set_component_source(LOG_STR("button"));
  App.register_component(delayaction_id_17);
  delayaction_id_17->set_delay([=]() -> uint32_t {
      #line 331 "baros2.yaml"
      return pump1_duration->state * 1000;
  });
  fan_turnoffaction_id_2 = new fan::TurnOffAction<>(pump1);
  automation_id_16->add_actions({fan_turnonaction_id_2, waituntilaction_id_4, lambdaaction_id_25, delayaction_id_17, fan_turnoffaction_id_2});
  // globals:
  //   id: SERVER_STATUS
  //   type: bool
  //   initial_value: 'false'
  //   restore_value: false
  SERVER_STATUS = new globals::GlobalsComponent<bool>(false);
  SERVER_STATUS->set_component_source(LOG_STR("globals"));
  App.register_component(SERVER_STATUS);
  // globals:
  //   id: WIFI_STATUS
  //   type: bool
  //   initial_value: 'false'
  //   restore_value: false
  WIFI_STATUS = new globals::GlobalsComponent<bool>(false);
  WIFI_STATUS->set_component_source(LOG_STR("globals"));
  App.register_component(WIFI_STATUS);
  // globals:
  //   id: LIQUID_POURING
  //   type: bool
  //   initial_value: 'false'
  //   restore_value: false
  LIQUID_POURING = new globals::GlobalsComponent<bool>(false);
  LIQUID_POURING->set_component_source(LOG_STR("globals"));
  App.register_component(LIQUID_POURING);
  // globals:
  //   id: TEMP_NUM
  //   type: int
  //   initial_value: '0'
  //   restore_value: false
  TEMP_NUM = new globals::GlobalsComponent<int>(0);
  TEMP_NUM->set_component_source(LOG_STR("globals"));
  App.register_component(TEMP_NUM);
  // globals:
  //   id: host_reply_received
  //   type: bool
  //   initial_value: 'false'
  //   restore_value: false
  host_reply_received = new globals::GlobalsComponent<bool>(false);
  host_reply_received->set_component_source(LOG_STR("globals"));
  App.register_component(host_reply_received);
  // globals:
  //   id: RECIPE_WINE_VOLUME
  //   type: float[7]
  //   initial_value: '{0, 0, 0, 0, 0, 0, 0}'
  //   restore_value: false
  RECIPE_WINE_VOLUME = new globals::GlobalsComponent<float[7]>({0, 0, 0, 0, 0, 0, 0});
  RECIPE_WINE_VOLUME->set_component_source(LOG_STR("globals"));
  App.register_component(RECIPE_WINE_VOLUME);
  // globals:
  //   id: RECIPE_TANK_ORDER
  //   type: int[7]
  //   initial_value: '{0, 0, 0, 0, 0, 0, 0}'
  //   restore_value: false
  RECIPE_TANK_ORDER = new globals::GlobalsComponent<int[7]>({0, 0, 0, 0, 0, 0, 0});
  RECIPE_TANK_ORDER->set_component_source(LOG_STR("globals"));
  App.register_component(RECIPE_TANK_ORDER);
  // globals:
  //   id: RECIPE_READY
  //   type: bool
  //   initial_value: 'false'
  //   restore_value: false
  RECIPE_READY = new globals::GlobalsComponent<bool>(false);
  RECIPE_READY->set_component_source(LOG_STR("globals"));
  App.register_component(RECIPE_READY);
  // globals:
  //   id: TANK1_DELAY
  //   type: float
  //   initial_value: '2.8'
  //   restore_value: false
  TANK1_DELAY = new globals::GlobalsComponent<float>(2.8);
  TANK1_DELAY->set_component_source(LOG_STR("globals"));
  App.register_component(TANK1_DELAY);
  // globals:
  //   id: TANK2_DELAY
  //   type: float
  //   initial_value: '2.6'
  //   restore_value: false
  TANK2_DELAY = new globals::GlobalsComponent<float>(2.6);
  TANK2_DELAY->set_component_source(LOG_STR("globals"));
  App.register_component(TANK2_DELAY);
  // globals:
  //   id: TANK3_DELAY
  //   type: float
  //   initial_value: '2.52'
  //   restore_value: false
  TANK3_DELAY = new globals::GlobalsComponent<float>(2.52);
  TANK3_DELAY->set_component_source(LOG_STR("globals"));
  App.register_component(TANK3_DELAY);
  // globals:
  //   id: TANK4_DELAY
  //   type: float
  //   initial_value: '2.49'
  //   restore_value: false
  TANK4_DELAY = new globals::GlobalsComponent<float>(2.49);
  TANK4_DELAY->set_component_source(LOG_STR("globals"));
  App.register_component(TANK4_DELAY);
  // globals:
  //   id: TANK5_DELAY
  //   type: float
  //   initial_value: '2.34'
  //   restore_value: false
  TANK5_DELAY = new globals::GlobalsComponent<float>(2.34);
  TANK5_DELAY->set_component_source(LOG_STR("globals"));
  App.register_component(TANK5_DELAY);
  // globals:
  //   id: TANK6_DELAY
  //   type: float
  //   initial_value: '2.32'
  //   restore_value: false
  TANK6_DELAY = new globals::GlobalsComponent<float>(2.32);
  TANK6_DELAY->set_component_source(LOG_STR("globals"));
  App.register_component(TANK6_DELAY);
  // globals:
  //   id: TANK7_DELAY
  //   type: float
  //   initial_value: '2.36'
  //   restore_value: false
  TANK7_DELAY = new globals::GlobalsComponent<float>(2.36);
  TANK7_DELAY->set_component_source(LOG_STR("globals"));
  App.register_component(TANK7_DELAY);
  // globals:
  //   id: TANK1_SPEED
  //   type: float
  //   initial_value: '3.46'
  //   restore_value: false
  TANK1_SPEED = new globals::GlobalsComponent<float>(3.46);
  TANK1_SPEED->set_component_source(LOG_STR("globals"));
  App.register_component(TANK1_SPEED);
  // globals:
  //   id: TANK2_SPEED
  //   type: float
  //   initial_value: '3.29'
  //   restore_value: false
  TANK2_SPEED = new globals::GlobalsComponent<float>(3.29);
  TANK2_SPEED->set_component_source(LOG_STR("globals"));
  App.register_component(TANK2_SPEED);
  // globals:
  //   id: TANK3_SPEED
  //   type: float
  //   initial_value: '3.4'
  //   restore_value: false
  TANK3_SPEED = new globals::GlobalsComponent<float>(3.4);
  TANK3_SPEED->set_component_source(LOG_STR("globals"));
  App.register_component(TANK3_SPEED);
  // globals:
  //   id: TANK4_SPEED
  //   type: float
  //   initial_value: '3.33'
  //   restore_value: false
  TANK4_SPEED = new globals::GlobalsComponent<float>(3.33);
  TANK4_SPEED->set_component_source(LOG_STR("globals"));
  App.register_component(TANK4_SPEED);
  // globals:
  //   id: TANK5_SPEED
  //   type: float
  //   initial_value: '3.38'
  //   restore_value: false
  TANK5_SPEED = new globals::GlobalsComponent<float>(3.38);
  TANK5_SPEED->set_component_source(LOG_STR("globals"));
  App.register_component(TANK5_SPEED);
  // globals:
  //   id: TANK6_SPEED
  //   type: float
  //   initial_value: '3.32'
  //   restore_value: false
  TANK6_SPEED = new globals::GlobalsComponent<float>(3.32);
  TANK6_SPEED->set_component_source(LOG_STR("globals"));
  App.register_component(TANK6_SPEED);
  // globals:
  //   id: TANK7_SPEED
  //   type: float
  //   initial_value: '3.15'
  //   restore_value: false
  TANK7_SPEED = new globals::GlobalsComponent<float>(3.15);
  TANK7_SPEED->set_component_source(LOG_STR("globals"));
  App.register_component(TANK7_SPEED);
  // globals:
  //   id: TANK1_INITIAL_SPEED
  //   type: float
  //   initial_value: '1.4'
  //   restore_value: false
  TANK1_INITIAL_SPEED = new globals::GlobalsComponent<float>(1.4);
  TANK1_INITIAL_SPEED->set_component_source(LOG_STR("globals"));
  App.register_component(TANK1_INITIAL_SPEED);
  // globals:
  //   id: TANK2_INITIAL_SPEED
  //   type: float
  //   initial_value: '1.2'
  //   restore_value: false
  TANK2_INITIAL_SPEED = new globals::GlobalsComponent<float>(1.2);
  TANK2_INITIAL_SPEED->set_component_source(LOG_STR("globals"));
  App.register_component(TANK2_INITIAL_SPEED);
  // globals:
  //   id: TANK3_INITIAL_SPEED
  //   type: float
  //   initial_value: '2.6'
  //   restore_value: false
  TANK3_INITIAL_SPEED = new globals::GlobalsComponent<float>(2.6);
  TANK3_INITIAL_SPEED->set_component_source(LOG_STR("globals"));
  App.register_component(TANK3_INITIAL_SPEED);
  // globals:
  //   id: TANK4_INITIAL_SPEED
  //   type: float
  //   initial_value: '2.4'
  //   restore_value: false
  TANK4_INITIAL_SPEED = new globals::GlobalsComponent<float>(2.4);
  TANK4_INITIAL_SPEED->set_component_source(LOG_STR("globals"));
  App.register_component(TANK4_INITIAL_SPEED);
  // globals:
  //   id: TANK5_INITIAL_SPEED
  //   type: float
  //   initial_value: '2.5'
  //   restore_value: false
  TANK5_INITIAL_SPEED = new globals::GlobalsComponent<float>(2.5);
  TANK5_INITIAL_SPEED->set_component_source(LOG_STR("globals"));
  App.register_component(TANK5_INITIAL_SPEED);
  // globals:
  //   id: TANK6_INITIAL_SPEED
  //   type: float
  //   initial_value: '2.55'
  //   restore_value: false
  TANK6_INITIAL_SPEED = new globals::GlobalsComponent<float>(2.55);
  TANK6_INITIAL_SPEED->set_component_source(LOG_STR("globals"));
  App.register_component(TANK6_INITIAL_SPEED);
  // globals:
  //   id: TANK7_INITIAL_SPEED
  //   type: float
  //   initial_value: '3.2'
  //   restore_value: false
  TANK7_INITIAL_SPEED = new globals::GlobalsComponent<float>(3.2);
  TANK7_INITIAL_SPEED->set_component_source(LOG_STR("globals"));
  App.register_component(TANK7_INITIAL_SPEED);
  // globals:
  //   id: TANK1_INITIAL_SPEED_DURATION
  //   type: float
  //   initial_value: '3.5'
  //   restore_value: false
  TANK1_INITIAL_SPEED_DURATION = new globals::GlobalsComponent<float>(3.5);
  TANK1_INITIAL_SPEED_DURATION->set_component_source(LOG_STR("globals"));
  App.register_component(TANK1_INITIAL_SPEED_DURATION);
  // globals:
  //   id: TANK2_INITIAL_SPEED_DURATION
  //   type: float
  //   initial_value: '6.5'
  //   restore_value: false
  TANK2_INITIAL_SPEED_DURATION = new globals::GlobalsComponent<float>(6.5);
  TANK2_INITIAL_SPEED_DURATION->set_component_source(LOG_STR("globals"));
  App.register_component(TANK2_INITIAL_SPEED_DURATION);
  // globals:
  //   id: TANK3_INITIAL_SPEED_DURATION
  //   type: float
  //   initial_value: '3'
  //   restore_value: false
  TANK3_INITIAL_SPEED_DURATION = new globals::GlobalsComponent<float>(3);
  TANK3_INITIAL_SPEED_DURATION->set_component_source(LOG_STR("globals"));
  App.register_component(TANK3_INITIAL_SPEED_DURATION);
  // globals:
  //   id: TANK4_INITIAL_SPEED_DURATION
  //   type: float
  //   initial_value: '4'
  //   restore_value: false
  TANK4_INITIAL_SPEED_DURATION = new globals::GlobalsComponent<float>(4);
  TANK4_INITIAL_SPEED_DURATION->set_component_source(LOG_STR("globals"));
  App.register_component(TANK4_INITIAL_SPEED_DURATION);
  // globals:
  //   id: TANK5_INITIAL_SPEED_DURATION
  //   type: float
  //   initial_value: '4'
  //   restore_value: false
  TANK5_INITIAL_SPEED_DURATION = new globals::GlobalsComponent<float>(4);
  TANK5_INITIAL_SPEED_DURATION->set_component_source(LOG_STR("globals"));
  App.register_component(TANK5_INITIAL_SPEED_DURATION);
  // globals:
  //   id: TANK6_INITIAL_SPEED_DURATION
  //   type: float
  //   initial_value: '4'
  //   restore_value: false
  TANK6_INITIAL_SPEED_DURATION = new globals::GlobalsComponent<float>(4);
  TANK6_INITIAL_SPEED_DURATION->set_component_source(LOG_STR("globals"));
  App.register_component(TANK6_INITIAL_SPEED_DURATION);
  // globals:
  //   id: TANK7_INITIAL_SPEED_DURATION
  //   type: float
  //   initial_value: '3'
  //   restore_value: false
  TANK7_INITIAL_SPEED_DURATION = new globals::GlobalsComponent<float>(3);
  TANK7_INITIAL_SPEED_DURATION->set_component_source(LOG_STR("globals"));
  App.register_component(TANK7_INITIAL_SPEED_DURATION);
  globals_globalvarsetaction_id = new globals::GlobalVarSetAction<globals::GlobalsComponent<bool>>(WIFI_STATUS);
  globals_globalvarsetaction_id->set_value(true);
  automation_id_2->add_actions({globals_globalvarsetaction_id});
  automation_id_3 = new Automation<>(wifi_wificomponent_id->get_disconnect_trigger());
  globals_globalvarsetaction_id_2 = new globals::GlobalVarSetAction<globals::GlobalsComponent<bool>>(WIFI_STATUS);
  globals_globalvarsetaction_id_2->set_value(false);
  automation_id_3->add_actions({globals_globalvarsetaction_id_2});
  wifi_status_main->set_template([=]() -> esphome::optional<bool> {
      #line 45 "common_main.yaml"
      return WIFI_STATUS->value();
  });
  server_status_main->set_template([=]() -> esphome::optional<bool> {
      #line 50 "common_main.yaml"
      return SERVER_STATUS->value();
  });
  lambdacondition_id = new LambdaCondition<>([=]() -> bool {
      #line 64 "common_main.yaml"
      if(LIQUID_POURING->value()){
        return true;
      } else {
        return false;
      }
  });
  forcondition_id = new ForCondition<>(lambdacondition_id);
  forcondition_id->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(forcondition_id);
  forcondition_id->set_time(1000);
  pouring->set_template([=]() -> esphome::optional<bool> {
      return forcondition_id->check();
  });
  lambdacondition_id_2 = new LambdaCondition<>([=]() -> bool {
      #line 176 "common_main.yaml"
      return RECIPE_READY->value() == true;
  });
  ifaction_id_3 = new IfAction<>(lambdacondition_id_2);
  repeataction_id = new RepeatAction<>();
  repeataction_id->set_count([=]() -> uint32_t {
      #line 179 "common_main.yaml"
      return sizeof(RECIPE_TANK_ORDER->value()) / sizeof(RECIPE_TANK_ORDER->value()[0]);
  });
  lambdacondition_id_3 = new LambdaCondition<uint32_t>([=](uint32_t iteration) -> bool {
      #line 183 "common_main.yaml"
      return RECIPE_TANK_ORDER->value()[iteration] > 0;
  });
  ifaction_id_2 = new IfAction<uint32_t>(lambdacondition_id_3);
  lambdaaction_id_2 = new LambdaAction<uint32_t>([=](uint32_t iteration) -> void {
      ESP_LOGD("main", "\346\211\247\350\241\214\346\260\264\347\256\261: %d , \344\275\223\347\247\257: %.1f", RECIPE_TANK_ORDER->value()[iteration], RECIPE_WINE_VOLUME->value()[iteration]);
  });
  script_scriptexecuteaction_id_4 = new script::ScriptExecuteAction<script::Script<int, float>, uint32_t>(pour_liquid);
  script_scriptexecuteaction_id_4->set_args([=](uint32_t iteration) -> int {
      #line 190 "common_main.yaml"
      return RECIPE_TANK_ORDER->value()[iteration];
    }, [=](uint32_t iteration) -> float {
      #line 191 "common_main.yaml"
      return RECIPE_WINE_VOLUME->value()[iteration];
  });
  delayaction_id = new DelayAction<uint32_t>();
  delayaction_id->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id);
  delayaction_id->set_delay(1000);
  ifaction_id_2->add_then({lambdaaction_id_2, script_scriptexecuteaction_id_4, delayaction_id});
  repeataction_id->add_then({ifaction_id_2});
  lambdacondition_id_4 = new LambdaCondition<>([=]() -> bool {
      #line 197 "common_main.yaml"
      return LIQUID_POURING->value() == false;
  });
  forcondition_id_2 = new ForCondition<>(lambdacondition_id_4);
  forcondition_id_2->set_component_source(LOG_STR("script"));
  App.register_component(forcondition_id_2);
  forcondition_id_2->set_time(2000);
  waituntilaction_id = new WaitUntilAction<>(forcondition_id_2);
  waituntilaction_id->set_component_source(LOG_STR("script"));
  App.register_component(waituntilaction_id);
  lambdaaction_id_3 = new LambdaAction<>([=]() -> void {
      #line 199 "common_main.yaml"
      RECIPE_READY->value() = false;
  });
  ifaction_id_3->add_then({repeataction_id, waituntilaction_id, lambdaaction_id_3});
  automation_id_7->add_actions({ifaction_id_3});
  automation_id_8 = new Automation<int, float>(pour_liquid);
  globals_globalvarsetaction_id_3 = new globals::GlobalVarSetAction<globals::GlobalsComponent<bool>, int, float>(LIQUID_POURING);
  globals_globalvarsetaction_id_3->set_value(true);
  lambdaaction_id_4 = new LambdaAction<int, float>([=](int tank_num, float volume) -> void {
      ESP_LOGD("main", "\345\274\200\345\247\213\345\200\222\351\205\222: \346\260\264\347\256\261${tank_num}, \344\275\223\347\247\257${volume}mL");
  });
  lambdaaction_id_5 = new LambdaAction<int, float>([=](int tank_num, float volume) -> void {
      #line 615 "baros2.yaml"
      ESP_LOGI("pour", "开启水箱%d对应的泵", tank_num);
      switch(tank_num) {
        case 1: {
          auto call = pump1->turn_on();
          call.perform();
          break;
        }
        case 2: {
          auto call = pump2->turn_on();
          call.perform();
          break;
        }
        case 3: {
          auto call = pump3->turn_on();
          call.perform();
          break;
        }
        case 4: {
          auto call = pump4->turn_on();
          call.perform();
          break;
        }
        case 5: {
          auto call = pump5->turn_on();
          call.perform();
          break;
        }
        case 6: {
          auto call = pump6->turn_on();
          call.perform();
          break;
        }
        case 7: {
          auto call = pump7->turn_on();
          call.perform();
          break;
        }
        case 8: {
          auto call = pump8->turn_on();
          call.perform();
          break;
        }
        default:
          ESP_LOGW("pour", "无效的水箱号: %d", tank_num);
          break;
      }
  });
  delayaction_id_2 = new DelayAction<int, float>();
  delayaction_id_2->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_2);
  delayaction_id_2->set_delay(500);
  lambdaaction_id_6 = new LambdaAction<int, float>([=](int tank_num, float volume) -> void {
      #line 663 "baros2.yaml"
      ESP_LOGI("pour", "启动泵,速度100%");
      switch(tank_num) {
        case 1:
          pump1->turn_on().set_speed(100).perform();
          break;
        case 2:
          pump2->turn_on().set_speed(100).perform();
          break;
        case 3:
          pump3->turn_on().set_speed(100).perform();
          break;
        case 4:
          pump4->turn_on().set_speed(100).perform();
          break;
        case 5:
          pump5->turn_on().set_speed(100).perform();
          break;
        case 6:
          pump6->turn_on().set_speed(100).perform();
          break;
        case 7:
          pump7->turn_on().set_speed(100).perform();
          break;
        case 8:
          pump8->turn_on().set_speed(100).perform();
          break;
        default:
          ESP_LOGW("pour", "无效的水箱号: %d", tank_num);
          break;
      }
  });
  delayaction_id_3 = new DelayAction<int, float>();
  delayaction_id_3->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_3);
  delayaction_id_3->set_delay([=](int tank_num, float volume) -> uint32_t {
      #line 694 "baros2.yaml"
      float t = 0;
      switch(tank_num) {
        case 1:
          t = TANK1_DELAY->value() + (volume / TANK1_SPEED->value());
          ESP_LOGI("pour", "等待 %.1f 秒", t);
          return 1000*t;
          break;
        case 2:
          t = TANK2_DELAY->value() + (volume / TANK2_SPEED->value());
          ESP_LOGI("pour", "等待 %.1f 秒", t);
          return 1000*t;
          break;
        case 3:
          t = TANK3_DELAY->value() + (volume / TANK3_SPEED->value());
          ESP_LOGI("pour", "等待 %.1f 秒", t);
          return 1000*t;
          break;
        case 4:
          t = TANK4_DELAY->value() + (volume / TANK4_SPEED->value());
          ESP_LOGI("pour", "等待 %.1f 秒", t);
          return 1000*t;
          break;
        case 5:
          t = TANK5_DELAY->value() + (volume / TANK5_SPEED->value());
          ESP_LOGI("pour", "等待 %.1f 秒", t);
          return 1000*t;
          break;
        case 6:
          t = TANK6_DELAY->value() + (volume / TANK6_SPEED->value());
          ESP_LOGI("pour", "等待 %.1f 秒", t);
          return 1000*t;
          break;
        case 7:
          t = TANK7_DELAY->value() + (volume / TANK7_SPEED->value());
          ESP_LOGI("pour", "等待 %.1f 秒", t);
          return 1000*t;
          break;
        default:
          ESP_LOGW("pour", "无效的水箱号: %d", tank_num);
          return 0;
      }   
  });
  lambdaaction_id_7 = new LambdaAction<int, float>([=](int tank_num, float volume) -> void {
      ESP_LOGD("main", "\345\205\263\351\227\255\346\263\265");
  });
  lambdaaction_id_8 = new LambdaAction<int, float>([=](int tank_num, float volume) -> void {
      #line 737 "baros2.yaml"
      switch(tank_num) {
        case 1:
          pump1->turn_off().perform();
          break;
        case 2:
          pump2->turn_off().perform();
          break;
        case 3:
          pump3->turn_off().perform();
          break;
        case 4:
          pump4->turn_off().perform();
          break;
        case 5:
          pump5->turn_off().perform();
          break;
        case 6:
          pump6->turn_off().perform();
          break;
        case 7:
          pump7->turn_off().perform();
          break;
        case 8:
          pump8->turn_off().perform();
          break;
        default:
          ESP_LOGW("pour", "无效的水箱号: %d", tank_num);
          break;
      }
  });
  delayaction_id_4 = new DelayAction<int, float>();
  delayaction_id_4->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_4);
  delayaction_id_4->set_delay(500);
  globals_globalvarsetaction_id_4 = new globals::GlobalVarSetAction<globals::GlobalsComponent<int>, int, float>(TEMP_NUM);
  globals_globalvarsetaction_id_4->set_value([=](int tank_num, float volume) {
      #line 769 "baros2.yaml"
      return tank_num;
  });
  lambdaaction_id_9 = new LambdaAction<int, float>([=](int tank_num, float volume) -> void {
      #line 772 "baros2.yaml"
      switch(tank_num) {
        case 1:
          pump1_reverse->turn_on();
          break;
        case 2:
          pump2_reverse->turn_on();
          break;
        case 3:
          pump3_reverse->turn_on();
          break;
        case 4:
          pump4_reverse->turn_on();
          break;
        case 5:
          pump5_reverse->turn_on();
          break;
        case 6:
          pump6_reverse->turn_on();
          break;
        case 7:
          pump7_reverse->turn_on();
          break;
        case 8:
          pump8_reverse->turn_on();
          break;
        default:
          ESP_LOGW("pour", "无效的水箱号: %d", tank_num);
          break;
      }
  });
  delayaction_id_5 = new DelayAction<int, float>();
  delayaction_id_5->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_5);
  delayaction_id_5->set_delay(5000);
  lambdaaction_id_10 = new LambdaAction<int, float>([=](int tank_num, float volume) -> void {
      #line 820 "baros2.yaml"
      switch(tank_num) {
        case 1:
          pump1_reverse->turn_off();
          break;
        case 2:
          pump2_reverse->turn_off();
          break;
        case 3:
          pump3_reverse->turn_off();
          break;
        case 4:
          pump4_reverse->turn_off();
          break;
        case 5:
          pump5_reverse->turn_off();
          break;
        case 6:
          pump6_reverse->turn_off();
          break;
        case 7:
          pump7_reverse->turn_off();
          break;
        case 8:
          pump8_reverse->turn_off();
          break;
        default:
          ESP_LOGW("pour", "无效的水箱号: %d", tank_num);
          break;
      }
  });
  globals_globalvarsetaction_id_5 = new globals::GlobalVarSetAction<globals::GlobalsComponent<bool>, int, float>(LIQUID_POURING);
  globals_globalvarsetaction_id_5->set_value(false);
  lambdaaction_id_11 = new LambdaAction<int, float>([=](int tank_num, float volume) -> void {
      ESP_LOGD("main", "Recipe\345\200\222\351\205\222\345\256\214\346\210\220");
  });
  automation_id_8->add_actions({globals_globalvarsetaction_id_3, lambdaaction_id_4, lambdaaction_id_5, delayaction_id_2, lambdaaction_id_6, delayaction_id_3, lambdaaction_id_7, lambdaaction_id_8, delayaction_id_4, globals_globalvarsetaction_id_4, lambdaaction_id_9, delayaction_id_5, lambdaaction_id_10, globals_globalvarsetaction_id_5, lambdaaction_id_11});
  automation_id_9 = new Automation<>(turn_off_all_valves);
  lambdaaction_id_12 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "\345\205\263\351\227\255\346\211\200\346\234\211\351\230\200\351\227\250");
  });
  automation_id_9->add_actions({lambdaaction_id_12});
  automation_id_10 = new Automation<>(turn_on_all_valves);
  switch__turnonaction_id = new switch_::TurnOnAction<>(valve1);
  switch__turnonaction_id_2 = new switch_::TurnOnAction<>(valve2);
  automation_id_10->add_actions({switch__turnonaction_id, switch__turnonaction_id_2});
  automation_id_11 = new Automation<>(clean_system);
  lambdaaction_id_13 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "\345\274\200\345\247\213\346\270\205\346\264\227\347\263\273\347\273\237");
  });
  binary_sensor_binarysensorpublishaction_id_2 = new binary_sensor::BinarySensorPublishAction<>(valve1_control);
  binary_sensor_binarysensorpublishaction_id_2->set_state(true);
  delayaction_id_6 = new DelayAction<>();
  delayaction_id_6->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_6);
  delayaction_id_6->set_delay(500);
  binary_sensor_binarysensorpublishaction_id_3 = new binary_sensor::BinarySensorPublishAction<>(water_pump_control);
  binary_sensor_binarysensorpublishaction_id_3->set_state(true);
  binary_sensor_binarysensorpublishaction_id_4 = new binary_sensor::BinarySensorPublishAction<>(o3_control);
  binary_sensor_binarysensorpublishaction_id_4->set_state(true);
  binary_sensor_binarysensorcondition_id = new binary_sensor::BinarySensorCondition<>(liquid1, true);
  andcondition_id = new AndCondition<>({binary_sensor_binarysensorcondition_id});
  waituntilaction_id_2 = new WaitUntilAction<>(andcondition_id);
  waituntilaction_id_2->set_timeout_value(30000);
  waituntilaction_id_2->set_component_source(LOG_STR("script"));
  App.register_component(waituntilaction_id_2);
  binary_sensor_binarysensorpublishaction_id_5 = new binary_sensor::BinarySensorPublishAction<>(water_pump_control);
  binary_sensor_binarysensorpublishaction_id_5->set_state(false);
  binary_sensor_binarysensorpublishaction_id_6 = new binary_sensor::BinarySensorPublishAction<>(o3_control);
  binary_sensor_binarysensorpublishaction_id_6->set_state(false);
  delayaction_id_7 = new DelayAction<>();
  delayaction_id_7->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_7);
  delayaction_id_7->set_delay(500);
  binary_sensor_binarysensorpublishaction_id_7 = new binary_sensor::BinarySensorPublishAction<>(valve1_control);
  binary_sensor_binarysensorpublishaction_id_7->set_state(false);
  delayaction_id_8 = new DelayAction<>();
  delayaction_id_8->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_8);
  delayaction_id_8->set_delay(500);
  binary_sensor_binarysensorpublishaction_id_8 = new binary_sensor::BinarySensorPublishAction<>(water_pump_control);
  binary_sensor_binarysensorpublishaction_id_8->set_state(true);
  binary_sensor_binarysensorpublishaction_id_9 = new binary_sensor::BinarySensorPublishAction<>(o3_control);
  binary_sensor_binarysensorpublishaction_id_9->set_state(true);
  delayaction_id_9 = new DelayAction<>();
  delayaction_id_9->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_9);
  delayaction_id_9->set_delay(10000);
  binary_sensor_binarysensorpublishaction_id_10 = new binary_sensor::BinarySensorPublishAction<>(water_pump_control);
  binary_sensor_binarysensorpublishaction_id_10->set_state(false);
  binary_sensor_binarysensorpublishaction_id_11 = new binary_sensor::BinarySensorPublishAction<>(o3_control);
  binary_sensor_binarysensorpublishaction_id_11->set_state(false);
  delayaction_id_10 = new DelayAction<>();
  delayaction_id_10->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_10);
  delayaction_id_10->set_delay(500);
  binary_sensor_binarysensorpublishaction_id_12 = new binary_sensor::BinarySensorPublishAction<>(valve2_control);
  binary_sensor_binarysensorpublishaction_id_12->set_state(true);
  binary_sensor_binarysensorpublishaction_id_13 = new binary_sensor::BinarySensorPublishAction<>(valve1_control);
  binary_sensor_binarysensorpublishaction_id_13->set_state(true);
  delayaction_id_11 = new DelayAction<>();
  delayaction_id_11->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_11);
  delayaction_id_11->set_delay(500);
  binary_sensor_binarysensorpublishaction_id_14 = new binary_sensor::BinarySensorPublishAction<>(water_pump_control);
  binary_sensor_binarysensorpublishaction_id_14->set_state(true);
  binary_sensor_binarysensorpublishaction_id_15 = new binary_sensor::BinarySensorPublishAction<>(o3_control);
  binary_sensor_binarysensorpublishaction_id_15->set_state(true);
  binary_sensor_binarysensorcondition_id_2 = new binary_sensor::BinarySensorCondition<>(liquid1, true);
  andcondition_id_2 = new AndCondition<>({binary_sensor_binarysensorcondition_id_2});
  waituntilaction_id_3 = new WaitUntilAction<>(andcondition_id_2);
  waituntilaction_id_3->set_timeout_value(30000);
  waituntilaction_id_3->set_component_source(LOG_STR("script"));
  App.register_component(waituntilaction_id_3);
  binary_sensor_binarysensorpublishaction_id_16 = new binary_sensor::BinarySensorPublishAction<>(water_pump_control);
  binary_sensor_binarysensorpublishaction_id_16->set_state(false);
  binary_sensor_binarysensorpublishaction_id_17 = new binary_sensor::BinarySensorPublishAction<>(o3_control);
  binary_sensor_binarysensorpublishaction_id_17->set_state(false);
  delayaction_id_12 = new DelayAction<>();
  delayaction_id_12->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_12);
  delayaction_id_12->set_delay(500);
  binary_sensor_binarysensorpublishaction_id_18 = new binary_sensor::BinarySensorPublishAction<>(valve1_control);
  binary_sensor_binarysensorpublishaction_id_18->set_state(false);
  delayaction_id_13 = new DelayAction<>();
  delayaction_id_13->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_13);
  delayaction_id_13->set_delay(500);
  binary_sensor_binarysensorpublishaction_id_19 = new binary_sensor::BinarySensorPublishAction<>(water_pump_control);
  binary_sensor_binarysensorpublishaction_id_19->set_state(true);
  binary_sensor_binarysensorpublishaction_id_20 = new binary_sensor::BinarySensorPublishAction<>(o3_control);
  binary_sensor_binarysensorpublishaction_id_20->set_state(true);
  delayaction_id_14 = new DelayAction<>();
  delayaction_id_14->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_14);
  delayaction_id_14->set_delay(10000);
  binary_sensor_binarysensorpublishaction_id_21 = new binary_sensor::BinarySensorPublishAction<>(water_pump_control);
  binary_sensor_binarysensorpublishaction_id_21->set_state(false);
  binary_sensor_binarysensorpublishaction_id_22 = new binary_sensor::BinarySensorPublishAction<>(o3_control);
  binary_sensor_binarysensorpublishaction_id_22->set_state(false);
  delayaction_id_15 = new DelayAction<>();
  delayaction_id_15->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_15);
  delayaction_id_15->set_delay(500);
  binary_sensor_binarysensorpublishaction_id_23 = new binary_sensor::BinarySensorPublishAction<>(valve2_control);
  binary_sensor_binarysensorpublishaction_id_23->set_state(false);
  lambdaaction_id_14 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "\347\263\273\347\273\237\346\270\205\346\264\227\345\256\214\346\210\220");
  });
  binary_sensor_binarysensorpublishaction_id_24 = new binary_sensor::BinarySensorPublishAction<>(clean_system_sensor);
  binary_sensor_binarysensorpublishaction_id_24->set_state(false);
  automation_id_11->add_actions({lambdaaction_id_13, binary_sensor_binarysensorpublishaction_id_2, delayaction_id_6, binary_sensor_binarysensorpublishaction_id_3, binary_sensor_binarysensorpublishaction_id_4, waituntilaction_id_2, binary_sensor_binarysensorpublishaction_id_5, binary_sensor_binarysensorpublishaction_id_6, delayaction_id_7, binary_sensor_binarysensorpublishaction_id_7, delayaction_id_8, binary_sensor_binarysensorpublishaction_id_8, binary_sensor_binarysensorpublishaction_id_9, delayaction_id_9, binary_sensor_binarysensorpublishaction_id_10, binary_sensor_binarysensorpublishaction_id_11, delayaction_id_10, binary_sensor_binarysensorpublishaction_id_12, binary_sensor_binarysensorpublishaction_id_13, delayaction_id_11, binary_sensor_binarysensorpublishaction_id_14, binary_sensor_binarysensorpublishaction_id_15, waituntilaction_id_3, binary_sensor_binarysensorpublishaction_id_16, binary_sensor_binarysensorpublishaction_id_17, delayaction_id_12, binary_sensor_binarysensorpublishaction_id_18, delayaction_id_13, binary_sensor_binarysensorpublishaction_id_19, binary_sensor_binarysensorpublishaction_id_20, delayaction_id_14, binary_sensor_binarysensorpublishaction_id_21, binary_sensor_binarysensorpublishaction_id_22, delayaction_id_15, binary_sensor_binarysensorpublishaction_id_23, lambdaaction_id_14, binary_sensor_binarysensorpublishaction_id_24});
  automation_id_14 = new Automation<>(get_recipe);
  http_request_httprequestsendaction_id = new http_request::HttpRequestSendAction<>(http_request_httprequestidf_id);
  http_request_httprequestsendaction_id->set_url("https://breakreal.top/langgraph-server/drink/test-demo-get-machine-task-with-idx");
  http_request_httprequestsendaction_id->set_method("POST");
  http_request_httprequestsendaction_id->set_capture_response(true);
  http_request_httprequestsendaction_id->set_max_response_buffer_size(10000);
  http_request_httprequestsendaction_id->add_json("machine_id", "lizi-002");
  http_request_httprequestresponsetrigger_id = new http_request::HttpRequestResponseTrigger();
  http_request_httprequestsendaction_id->register_response_trigger(http_request_httprequestresponsetrigger_id);
  automation_id_12 = new Automation<std::shared_ptr<http_request::HttpContainer>, std::string &>(http_request_httprequestresponsetrigger_id);
  lambdacondition_id_5 = new LambdaCondition<std::shared_ptr<http_request::HttpContainer>, std::string &>([=](std::shared_ptr<http_request::HttpContainer> response, std::string & body) -> bool {
      #line 1105 "baros2.yaml"
      return response->status_code == 200;
  });
  ifaction_id_4 = new IfAction<std::shared_ptr<http_request::HttpContainer>, std::string &>(lambdacondition_id_5);
  globals_globalvarsetaction_id_6 = new globals::GlobalVarSetAction<globals::GlobalsComponent<bool>, std::shared_ptr<http_request::HttpContainer>, std::string &>(SERVER_STATUS);
  globals_globalvarsetaction_id_6->set_value(true);
  lambdaaction_id_15 = new LambdaAction<std::shared_ptr<http_request::HttpContainer>, std::string &>([=](std::shared_ptr<http_request::HttpContainer> response, std::string & body) -> void {
      ESP_LOGD("main", "Response status: %d, Duration: %u ms", response->status_code, response->duration_ms);
  });
  lambdaaction_id_16 = new LambdaAction<std::shared_ptr<http_request::HttpContainer>, std::string &>([=](std::shared_ptr<http_request::HttpContainer> response, std::string & body) -> void {
      #line 1116 "baros2.yaml"
      size_t size = sizeof(RECIPE_WINE_VOLUME->value()) / sizeof(RECIPE_WINE_VOLUME->value()[0]);
      for (size_t i = 0; i < size; i++) {
        RECIPE_WINE_VOLUME->value()[i] = 0;
        RECIPE_TANK_ORDER->value()[i] = 0;
      }
  });
  lambdaaction_id_17 = new LambdaAction<std::shared_ptr<http_request::HttpContainer>, std::string &>([=](std::shared_ptr<http_request::HttpContainer> response, std::string & body) -> void {
      #line 1122 "baros2.yaml"
      ESP_LOGI("recipe", "获取配方JSON...");
      json::parse_json(body, [](JsonObject root) -> bool {
        if (root["code"].as<int>() != 1) {
          ESP_LOGW("recipe", "服务器返回无配方或错误");
           
          return false;
        } else {
          JsonArray result_index = root["data"]["result_index"];
          JsonArray result = root["data"]["result"];
          for (JsonObject item : result_index) {
            for (JsonPair pair : item) {
              ESP_LOGI("recipe", "result_index 水箱编号=%s, 容量=%.1f", pair.key().c_str(), pair.value().as<float>());
            }
          }
          for (JsonObject item : result) {
            for (JsonPair pair : item) {
              ESP_LOGI("recipe", "酒配方: %s, 容量=%.1f", pair.key().c_str(), pair.value().as<float>());
            }
          }
          int idx = 1;
          for (JsonObject item : result_index) {
            for (JsonPair pair : item) {
              if (idx > 7) break;
              int tank_num = atoi(pair.key().c_str());
              float volume = pair.value().as<float>();
              if (tank_num >= 1 && tank_num <= 8 && volume > 0.0f) {
                RECIPE_WINE_VOLUME->value()[idx-1] = volume;
                RECIPE_TANK_ORDER->value()[idx-1] = tank_num;
                idx++;
              } else {
                ESP_LOGW("recipe", "忽略无效步骤: 水箱=%d, 体积=%.2f", tank_num, volume);
              }
            }
          }
          RECIPE_READY->value() = true;
          return true;
        }
      });
  });
  ifaction_id_4->add_then({globals_globalvarsetaction_id_6, lambdaaction_id_15, lambdaaction_id_16, lambdaaction_id_17});
  globals_globalvarsetaction_id_7 = new globals::GlobalVarSetAction<globals::GlobalsComponent<bool>, std::shared_ptr<http_request::HttpContainer>, std::string &>(SERVER_STATUS);
  globals_globalvarsetaction_id_7->set_value(false);
  lambdaaction_id_18 = new LambdaAction<std::shared_ptr<http_request::HttpContainer>, std::string &>([=](std::shared_ptr<http_request::HttpContainer> response, std::string & body) -> void {
      ESP_LOGD("main", "Error: Response status: %d, message %s", response->status_code, body.c_str());
  });
  ifaction_id_4->add_else({globals_globalvarsetaction_id_7, lambdaaction_id_18});
  automation_id_12->add_actions({ifaction_id_4});
  trigger_id_9 = new Trigger<>();
  http_request_httprequestsendaction_id->register_error_trigger(trigger_id_9);
  automation_id_13 = new Automation<>(trigger_id_9);
  lambdaaction_id_19 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Request failed!");
  });
  automation_id_13->add_actions({lambdaaction_id_19});
  automation_id_14->add_actions({http_request_httprequestsendaction_id});
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
