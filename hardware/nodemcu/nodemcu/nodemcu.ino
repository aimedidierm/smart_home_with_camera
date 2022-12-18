#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClient.h>
#include<SoftwareSerial.h>
#include <ArduinoJson.h>
SoftwareSerial s(3,1);
const char* ssid = "Virus";
const char* password = "mbega123455";
//String serverName = "http://137.184.232.255/smart_home/data.php";
//String serverName = "http://didier.requestcatcher.com/";
String serverName = "http://192.168.43.76/smart_home/data.php";
const int device1 = D2,device2 = D4,device3 = D5,device4 = D6,device5 = D7,device6 = D8;
int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0;
void setup() {
  // put your setup code here, to run once:
  s.begin(9600);
  WiFi.begin(ssid, password);
  pinMode(device1, OUTPUT);
  pinMode(device2, OUTPUT);
  pinMode(device3, OUTPUT);
  pinMode(device4, OUTPUT);
  pinMode(device5, OUTPUT);
  pinMode(device6, OUTPUT);
  digitalWrite(device1, HIGH);
  digitalWrite(device2, HIGH);
  digitalWrite(device3, HIGH);
  digitalWrite(device4, HIGH);
  digitalWrite(device5, HIGH);
  digitalWrite(device6, HIGH);
  while(WiFi.status() != WL_CONNECTED) {
  delay(500);
  }
}

void loop() {
    WiFiClient client;
    HTTPClient http;
    http.begin(client, serverName);
    //http.addHeader("Content-Type", "application/json");
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");
    int httpCode=http.GET();
    String payload=http.getString(); // get data from webhost continously
    s.print(payload);
      DynamicJsonBuffer jsonBuffer;
      JsonObject& root = jsonBuffer.parseObject(payload);
      int d1 = root["d1"];
      int d2 = root["d2"];
      int d3 = root["d3"];
      int d4 = root["d4"];
      int d5 = root["d5"];
      int d6 = root["d6"];
      if(d1==1){
        digitalWrite(device1, LOW);
      } else {
        digitalWrite(device1, HIGH);
        }
        if(d2==1){
          digitalWrite(device2, LOW);
        } else {
          digitalWrite(device2, HIGH);
          }
          if(d3==1){
          digitalWrite(device3, LOW);
        } else {
          digitalWrite(device3, HIGH);
          }
          if(d4==1){
            digitalWrite(device4, LOW);
          } else {
            digitalWrite(device4, HIGH);
            }
            if(d5==1){
              digitalWrite(device5, LOW);
            } else {
              digitalWrite(device5, HIGH);
              }
              if(d6==1){
                digitalWrite(device6, LOW);
              } else {
                digitalWrite(device6, HIGH);
                }
      
    http.end();
    delay(300);
}
