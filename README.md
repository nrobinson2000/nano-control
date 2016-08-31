# nano-control
***THIS PROJECT IS A WORK IN PROGRESS.***

Control an Arduino Nano as if it was part of a Particle Device.  Inspired by [Tinker](https://docs.particle.io/guide/getting-started/examples/photon/#tinker), which allows you to control a Particle device through the Particle Mobile app.

The purpose of **nano-control** is to expand the number of usable pins on a Particle device by creating an easy-to-manipulate Arduino slave.  It is called "nano-control" because it is intended to work on a Photon and a Nano.

**Nano-control** consists of two libraries.  One called **NanoMaster** that runs on a Particle Device, and one called **NanoSlave** that runs on an Arduino Nano.

**NanoMaster** allows the Photon to command the Nano to write to specific pins and read from specific pins over Serial.  It supports: `digitalWrite`, `digitalRead`, `analogWrite`, and `analogRead`, and makes it easy to control pins.

For example, this would make the Nano blink its LED:
```cpp
#include "application.h"

NanoMaster nano;

void setup()
{
  nano.begin();
}

void loop()
{
  nano.digitalWrite(N13, HIGH);
  delay(1000);
  nano.digitalWrite(N13, LOW);
  delay(1000);
}
```

**NanoMaster** has constants for the Arduino Nano pins.  Pins beginning with `N` are digital pins.  For example, `N13` would go to `D13`.  Pins beginning with `M` are analog pins.  `M7` would go to pin `A7` on the Nano.
