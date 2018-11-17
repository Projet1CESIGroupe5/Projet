#include <Arduino.h>
//start of the function
void function()
 {
//beginning of a loop for
//condition of the loop : initialize variable i to 2, must i less than 12 and i increments of 1 with each step
  for(int i = 2; i < 12; i++)
 {
//sets a HIGH level to a numeric pin
//sets led i on
 digitalWrite(i, HIGH);
 }
//end of a loop for
//waits 50 milliseconds
 delay(50); 
//new loop for with the same conditions as the previous loop
 for(int i = 2; i < 12; i++)
 {
//sets the led i off
 digitalWrite(i, LOW);
 }
//end of a loop for
 }
