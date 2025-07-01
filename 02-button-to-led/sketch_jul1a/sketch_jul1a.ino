int portNumber = 7;

void setup() {
  pinMode(A5, INPUT_PULLUP); // button input with internal resistor
  pinMode(portNumber, OUTPUT); // LED for output
  Serial.begin(9600); // console
}

void loop() {
  boolean button1 = !digitalRead(A5); // read and invert

  Serial.println("Button1: " + button1);
  
  if(button1 == 1){
    digitalWrite(portNumber, HIGH);
  } else{
    digitalWrite(portNumber, LOW);
  }
}
