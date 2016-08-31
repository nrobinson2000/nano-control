# nano-control
Control an Arduino Nano as if it was part of a Particle Device.  Inspired by [Tinker](https://docs.particle.io/guide/getting-started/examples/photon/#tinker), which allows you to control a Particle device through the Particle Mobile app.

The purpose of **nano-control** is to expand the number of usable pins on a Particle device by creating an easy-to-manipulate Arduino slave.  It is called "nano-control" because it is intended to work on a Photon and a Nano.

**Nano-control** consists of two libraries.  One called `NanoMaster` that runs on a Particle Device, and one called `NanoSlave` that runs on an Arduino Nano.

`NanoMaster` allows the Photon to command the Nano to write to specific pins and read from specific pins over Serial.  It supports: `digitalWrite`, `digitalRead`, `analogWrite`, and `analogRead`.
