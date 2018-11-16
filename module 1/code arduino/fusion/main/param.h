#include <Arduino.h>
//start of the function
void function()
 {
//beginning of a loop for//condition of the loop : initialize variable i to 0, must i less than 12 and i increments of 1 with each step
  for(int i = 2; i < 12; i++)
 {
//sets the led i off
 digitalWrite(i, LOW);
 //waits 200 milliseconds
 delay(200);
 //sets the led i on
 digitalWrite(i, HIGH);
 //waits 200 milliseconds
 delay(200);
 }
}
