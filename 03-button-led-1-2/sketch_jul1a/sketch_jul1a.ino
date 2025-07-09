boolean buttonFlag = false;
boolean buttonState = false;
boolean ledFlag = false;
int ledPort = 7;

void setup() {
  pinMode(3, INPUT_PULLUP);
  pinMode(ledPort, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = !digitalRead(3);
  if (buttonState == true && buttonFlag == false){
    buttonFlag = true;
    Serial.println("Button pressed");
    ledFlag = !ledFlag;
    digitalWrite(ledPort,ledFlag);
  }
  if (buttonState == false && buttonFlag == true) {
    buttonFlag = false;
    Serial.println("Button released");
  }
}