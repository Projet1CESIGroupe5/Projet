//declaration of an integer MODE variable
int MODE = 7;
//start of the function
void function()
 {
//beginning of a loop for//condition of the loop : initialize variable i to 0, must i less than 12 and i increments of 1 with each step
  for(int i = 0; i < 12; i++)
 {
//sets the led i off
 digitalWrite(LEDS[i], LOW);
 //waits 200 milliseconds
 delay(200);
 //sets the led i on
 digitalWrite(LEDS[i], HIGH);
 //waits 200 milliseconds
 delay(200);
 }
}