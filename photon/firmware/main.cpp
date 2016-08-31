#include "application.h"
#include "NanoMaster.h"

NanoMaster nano;

void setup() // Put setup code here to run once
{
nano.begin();
}

void loop() // Put code here to loop forever
{
nano.process();
}
