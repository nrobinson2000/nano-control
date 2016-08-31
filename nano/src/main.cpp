#include <NanoSlave.h>

NanoSlave nano;

void setup()
{
nano.begin();
}

void loop()
{
nano.process();
}
