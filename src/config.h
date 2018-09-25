/************ WIFI and MQTT Information (CHANGE THESE FOR YOUR SETUP) ******************/
const char* ssid = "YourSSID"; //type your WIFI information inside the quotes
const char* password = "YourWIFIpassword";
const char* mqtt_server = "your.MQTT.server.ip";
const char* mqtt_username = "yourMQTTusername";
const char* mqtt_password = "yourMQTTpassword";
const int mqtt_port = 1883;



/**************************** FOR OTA **************************************************/
#define SENSORNAME "porch" //change this to whatever you want to call your device
#define OTApassword "yourOTApassword" //the password you will need to enter to upload remotely via the ArduinoIDE
int OTAport = 8266;



/************* MQTT TOPICS (change these topics as you wish)  **************************/
const char* light_state_topic = "bruh/porch";
const char* light_set_topic = "bruh/porch/set";

const char* on_cmd = "ON";
const char* off_cmd = "OFF";
const char* effect = "solid";
String effectString = "solid";
String oldeffectString = "solid";

/*********************************** FastLED Defintions ********************************/
#define NUM_LEDS    186
#define DATA_PIN    5
//#define CLOCK_PIN 5
#define CHIPSET     WS2811
#define COLOR_ORDER BRG