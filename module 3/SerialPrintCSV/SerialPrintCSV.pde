//From Arduino to Processing to Txt or cvs etc.
//import
import processing.serial.*;
//declare
PrintWriter output;
Serial udSerial;
boolean started = false;

void setup() {
  udSerial = new Serial(this, "COM6", 9600);
  output = createWriter ("Battements.csv");
}

  void draw() {
    if (udSerial.available() > 0 && started) {
      String SenVal = udSerial.readString();
      if (SenVal != null && SenVal.contains(";")) {
        output.print(SenVal);
      }
    }
  }

  void keyPressed(){
    if(!started) {
      started = true;
    }
    else {
     output.flush();
    output.close();
    exit();  
    }
  }
