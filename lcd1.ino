#include "LiquidCrystal.h"
LiquidCrystal lcd(8, 9, 4, 5, 6,7);
void setup() {
  lcd.begin(2,2);
}
void loop() {
  delay(1000);
  lcd.setCursor(1,0);
  lcd.print("<!--MOHAMMED AMINNE DACHIR-->");
  lcd.scrollDisplayLeft();
}
