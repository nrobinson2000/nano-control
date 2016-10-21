#include "application.h"
#include "NanoMaster.h"

NanoMaster::NanoMaster()
{
  // No init code yet
  /* "0" = digitalWrite
     "1" = digitalRead
     "2" = analogWrite
     "3" = analogRead
  */
}

bool NanoMaster::begin()
{
    Serial1.begin(9600);
    Serial.begin(9600);
    return true;
}

bool NanoMaster::process()
{

    return true;
}

bool NanoMaster::digitalWrite(int pin, int value)
{
    String pinString = String(pin);
    String valueString = String(value);
    String message = String("0" + String(" ") + pinString + String(" ") + valueString);
    Serial1.println(message);
  //  Serial.println(message);
    // "0 N13 1"
    // "0 B1 1"
    // "0123456"
    // "0" = substring(0,1);
    // "N13" = substring(2,5);
    // "1" = substring(5);
    return true;
}

int  NanoMaster::digitalRead(int pin)
{
    String input = "";
    String pinString = String(pin);
    String message = String("1" + String(" ") + pinString);
    Serial1.println(message);

    /*while (!Serial1.available())
    {
        ;
    }*/

    while (Serial1.available() > 0)
    {
      //  delay(3);
        char c = Serial1.read(); // Read the character
        input += c;
    }

    //input.trim();
    Serial.println(input);

    if (input == "1")
    {
        return 1;
    }
    if (input == "0")
    {
        return 0;
    }

    if (input != "1" || input != "0")
    {
      return 2;
    }
    return 2;
}

bool NanoMaster::analogWrite(int pin, int value)
{
    String pinString = String(pin);
    String valueString = String(value);
    String message = String("2" + String(" ") + pinString + String(" ") + valueString);
    Serial1.println(message);
    // "2 N13 255"
    // "2 B1 255"
    // "012345678"
    // "2" = substring(0,1);
    // "N13" = substring(2,5);
    // "255" = substring(5);
    return true;
}

int NanoMaster::analogRead(int pin)
{
    String pinString = String(pin);
    String message = String("3" + String(" ") + pinString);
    Serial1.println(message);
    while (!Serial1.available())
    {
        ;
    }
    String input = "";
    while (Serial1.available() > 0)
    {
        delay(3);
        input += Serial1.read();
    }
    input.trim();
    return input.toInt();
}
