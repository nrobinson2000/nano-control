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
#define N13 13
#define N12 12
#define N11 11
#define N10 10
#define N9 9
#define N8 8
#define N7 7
#define N6 6
#define N5 5
#define N4 4
#define N3 3
#define N2 2

// Nano Analog Pins
#define M7 21
#define M6 20
#define M5 19
#define M4 18
#define M3 17
#define M2 16
#define M1 15
#define M0 14



  bool begin();
  bool process();
  bool digitalWrite(int pin, int value);
  int digitalRead(int pin);
  bool analogWrite(int pin, int value);
  int analogRead(int pin);





};
#endif
