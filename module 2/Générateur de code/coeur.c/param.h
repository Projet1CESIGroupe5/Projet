//declaration of an integer MODE variable
 int MODE = 10; 
//start of the function
 void function()
 {
 declaration and initialization an integer variable led to random
 int led = random(2, 12);
//sets the led on
 digitalWrite(led, HIGH);
//waits 60 milliseconds
 delay(60);
//sets the led  off
 digitalWrite(led, LOW);
//waits 60 milliseconds
 delay(60);
 }