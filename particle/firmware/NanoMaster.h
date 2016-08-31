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
#define M7 22
#define M6 19
#define M5 28
#define M4 27
#define M3 26
#define M2 25
#define M1 24
#define M0 23



  bool begin();
  bool process();
  bool digitalWrite(int pin, int value);
  bool digitalRead(int pin);
  bool analogWrite(int pin, int value);
  int analogRead(int pin);





};
#endif
