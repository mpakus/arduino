#include <Wire.h>
#include <LiquidCrystal.h>

int seconds = 60;
int speakerPort = 9;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup(){
  delay(1000);
  lcd.begin(16, 2);
  lcd.print("L-minus:");
  pinMode(speakerPort, OUTPUT);
}

void loop(){
  lcd.setCursor(0, 1);
  if (seconds == 0) {
    lcd.print("...liftoff!     ");
    for(int i=500; i <= 1000; i++) { tone(speakerPort, i, 1*i*0.7); }
    for(int i=1000; i >= 500; i--) { tone(speakerPort, i, 1*i*0.7); }
  } else {
    lcd.print(String(seconds) + " seconds");
    seconds--;
    tone(speakerPort, 440, 10);
  }
  delay(100);
}