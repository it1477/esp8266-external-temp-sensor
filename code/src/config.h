/*
External Temperature Sensor

For the Espressif ESP8266

Uses MQTT and a DS18B20 Sensor to read and transmit Temprature to an MQTT
Broker.

This code was written and tested using the PlatformIO IDE and the ESP8266-12F
module.

Ideas and code from various soruces:
https://github.com/chaeplin/esp8266_and_arduino
https://twitter.com/jpwsutton,

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

This code is licensed under the GNU LGPL and is open for ditrbution
and copying in accordance with the license.
This header must be included in any derived code or copies of the code.

(C) Alan Lord 2017
*/

// Debugging
#define DEBUG_PRINT 0

// Change these to suit your own application and network.
const char* WIFI_SSID = "";
const char* WIFI_PASSWORD = "";
const char* MQTT_SERVER = "192.168.1.2";

// SensorName
const char* SENSORNAME = "exttemp";

// Topics (Environment and VCC)
const char* TOPIC = "EXT/Env";

// Deep Sleep (uSec) Debug = 10000000 (10 Seconds). Production: 600000000 (10 minutes)
long deep_sleep = 600000000;

// Deep Sleep mode.
#define DS_MODE WAKE_RF_DEFAULT

// DS18B20
#define ONE_WIRE_BUS 14  //GPIO 14
#define ONE_WIRE_PWR 12  //GPIO 12
