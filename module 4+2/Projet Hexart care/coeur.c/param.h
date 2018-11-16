//declaration of an integer MODE variable
 int MODE = 10; 
//start of the function
 void function()
 {
 declaration and initialization an integer variable led to random
 int led = random(2, 12);
//sets the led on
 digitalWrite(led, HIGH);
//waits 200 milliseconds
 delay(200);
//sets the led  off
 digitalWrite(led, LOW);
//waits 200 milliseconds
 delay(200);
 }