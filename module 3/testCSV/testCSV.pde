//From Arduino to Processing to Txt or cvs etc.
//import
import processing.serial.*;
//declare
PrintWriter output; //Objet pour écrire dans un fichier

String[] lst = new String[] {"1;80", "2;85", "1000;70", "1500;75", "15;80"}; //valeurs al&atoires au format CSV
int i = 0; //compteur de lignes

void setup() {
  output = createWriter ("Battements.csv");
}

  void draw() {
    if(i < lst.length) { //On écrit pas plus que le nombre de valeurs dans la liste
      String SenVal = lst[i]; //On récupère la valeur actuelle de la liste
      output.println(SenVal); //On l'écrit dans le fichier .csv
    }
    i++; //On incrémente i de 1
  }

  void keyPressed(){ //Lors d'une pression sur une touche, on ferme le fichier et on quitte l'application
    output.flush();
    output.close();
    exit(); 
  }
