//declaration of an integer MODE variable
int MODE = 5;
//start of the function
void function()
 {
//beginning of a loop for//condition of the loop : initialize variable i to 11, must i higher or equal to 12 and i increments of -1 with each step
  for(int i = 11; i >=2; i--)
 {
//sets the led i on
 digitalWrite(i, HIGH);
 //waits 200 milliseconds
 delay(200);
  //sets the led i off
 digitalWrite(i, LOW);
 //waits 200 milliseconds
 delay(200);
 }
}