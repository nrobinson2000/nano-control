# nano-control
Control an Arduino Nano as if it was part of a Particle Device.  Inspired by [Tinker](https://docs.particle.io/guide/getting-started/examples/photon/#tinker), which allows you to control a Particle device through the Particle Mobile app.

Nano-control consists of two libraries.  One called `NanoMaster` that runs on a Photon, and one called `NanoSlave` that runs on an Arduino Nano.

`NanoMaster` allows the Photon to command the Nano to write to specific pins and read from specific pins over Serial.  It supports: `digitalWrite`, `digitalRead`, `analogWrite`, and `analogRead`.
