#include <Arduino.h>
//start of the function
void function()
 {
//beginning of a loop for//condition of the loop : initialize variable i to 0, must i less than 12 and i increments of 1 with each step
  for(int i = 2; i < 12; i++)
 {
  digitalWrite(i, HIGH);
 }

 delay(200);

 for(int i = 2; i < 12; i++)
 {
  digitalWrite(i, LOW);
 }
}
