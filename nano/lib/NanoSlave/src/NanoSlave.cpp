#include <Arduino.h>
#include "NanoSlave.h"

NanoSlave::NanoSlave()
{
  // No init code yet
  /* "0" = digitalWrite
     "1" = digitalRead
     "2" = analogWrite
     "3" = analogRead
  */

// "2 13 255"
// "2 1 255"
// "012345678"
// "2" = substring(0,1);
// "13" = substring(2,4);
// "255" = substring(4);
}

bool NanoSlave::begin()
{
Serial.begin(9600);
return true;
}

bool NanoSlave::process()
{
  String input = "";
if (Serial.available() > 0)
{
  delay(3);
  input += Serial.read();
}

String command = String(input.charAt(0));

if (command == "0") //digitalWrite
{
  String pinString = input.substring(2,4);
  pinString.trim();
  String valueString = input.substring(4);
  valueString.trim();
  int pin = pinString.toInt();
  int value = pinString.toInt();
  pinMode(pin, OUTPUT);
  digitalWrite(pin, value);
}

if (command == "1") //digitalRead
{
  String pinString = input.substring(2,4);
  pinString.trim();
  int pin = pinString.toInt();
  pinMode(pin, INPUT);
  String output = String(digitalRead(pin));
  Serial.println(output);
}

if (command == "2") //analogWrite
{
  String pinString = input.substring(2,4);
  pinString.trim();
  String valueString = input.substring(4);
  valueString.trim();
  int pin = pinString.toInt();
  int value = pinString.toInt();
  pinMode(pin, OUTPUT);
  analogWrite(pin, value);
}

if (command == "3") //analogRead
{
  String pinString = input.substring(2,4);
  pinString.trim();
  int pin = pinString.toInt();
  pinMode(pin, INPUT);
  String output = String(analogRead(pin));
  Serial.println(output);
}

return true;
}
