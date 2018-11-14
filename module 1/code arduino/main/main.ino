void setup() {
Serial.begin(9600); //initialisation de la sortie
}

void loop() {
long time = millis();
Serial.println(time);
delay(100); //delai d'affichage du nombre des millisecondes
}
