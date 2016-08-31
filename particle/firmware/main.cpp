#include "application.h"
#include "NanoMaster.h"

NanoMaster nano;

void setup() // Put setup code here to run once
{
nano.begin();
}

void loop() // Put code here to loop forever
{
  nano.digitalWrite(N13, HIGH);
  delay(1000);
  nano.digitalWrite(N13, LOW);
  delay(1000);
}
