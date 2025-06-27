
const int led =9;
const int sensorPin = A0;
const int level = 100;

int sensor;

void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensor = analogRead(sensorPin);
  
  Serial.println(sensor);
  
  if (sensor < level) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
