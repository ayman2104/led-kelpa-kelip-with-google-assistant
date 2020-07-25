#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "ex0IgXxw_4-kWFvccqNMcgg9EEAqY_xC";
char ssid[] = "Delce22";
char pass[] = "kimcher22";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();
}
