#include "application.h"
#ifndef NanoMaster_h
#define NanoMaster_h

class NanoMaster
{
private:
  //Nothing

public:

  NanoMaster();

// Nano Digital Pins
#define N13 17
#define N12 16
#define N11 15
#define N10 14
#define N9 13
#define N8 12
#define N7 11
#define N6 10
#define N5 9
#define N4 2
#define N3 1
#define N2 32

// Nano Analog Pins
#define B7 22
#define B6 19
#define B5 28
#define B4 27
#define B3 26
#define B2 25
#define B1 24
#define B0 23



  bool begin();
  bool process();
  bool digitalWrite(int pin, int value);
  bool digitalRead(int pin);
  bool analogWrite(int pin, int value);
  int analogRead(int pin);





};
#endif
