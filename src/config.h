/************ WIFI settings ******************/
#define SCAN_WIFI
#define HOSTNAME "esp-porch"
const char* KNOWN_SSID[] = {"YourSSID1", "YourSSID2"};
const char* KNOWN_PASSWORD[] = {"YourWIFIpassword1", "YourWIFIpassword2"};
const int KNOWN_SSID_COUNT = sizeof(KNOWN_SSID) / sizeof(KNOWN_SSID[0]); // number of known networks

/************ MQTT settings ******************/
#define MQTT_SERVER "YourMQTTserver"
#define MQTT_USERNAME "YourMQTTusername"
#define MQTT_PASSWORD "YourMQTTpassword"
#define MQTT_PORT 1883
#define MQTT_STATE_TOPIC "light/porch"
#define MQTT_SET_TOPIC "light/porch/set"

/************ OTA settings *******************/
#define OTA_PASSWORD "YourOTApassword"
#define OTA_PORT 8266

/************ FastLED settings ***************/
#define NUM_LEDS    186
#define DATA_PIN    5
#define CHIPSET     WS2811
#define COLOR_ORDER BRG