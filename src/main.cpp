#include <Arduino.h>

#define LED_PIN 14
#define IO_PIN 26
int initAngle = 2500;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(100);
}

void loop()
{
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(IO_PIN) - initAngle;
  Serial.println(sensorValue);
  delay(100);
}
