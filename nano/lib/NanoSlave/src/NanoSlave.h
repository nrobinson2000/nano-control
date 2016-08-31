#include <Arduino.h>
#ifndef NanoSlave_h
#define NanoSlave_h

class NanoSlave
{
private:
  //Nothing

public:

  NanoSlave();


  bool begin();
  bool process();

};
#endif
