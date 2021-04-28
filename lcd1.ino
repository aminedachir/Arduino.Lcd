#include "LiquidCrystal.h"
LiquidCrystal lcd( 8, 9, 4, 5, 6,7);
void setup() {
  int a = 0;
  lcd.begin(2,2);
  for (int i=0;i<=8;i++){
    lcd.setCursor(a,1);
    lcd.write(Serial.read());
    a = a + 1;
    delay(400);
    lcd.setCursor(a,1);
    lcd.write(Serial.read());
    a = a + 1;
    delay(400);
  }
  lcd.clear();
  delay(400);
}
void loop() {
  lcd.setCursor(3,0);
  lcd.print("Succefully");
  lcd.setCursor(3,1);
  lcd.print("Downloading");
  delay(1000);
  lcd.clear()
  delay(400);
}
