
#include "LiquidCrystal.h"
LiquidCrystal lcd( 8,  9,  4,  5,  6,  7);
void setup() {
 lcd.begin(16, 2);
}
void loop() {
  for (int i = 0;i<3;i++){
    delay(500);
    lcd.setCursor(4,0);
    lcd.print("MOHAMMED");
    delay(1000);
    lcd.setCursor(2,1);
    if (i = 1){lcd.print ("AMINE");}
    delay(1000);
    lcd.setCursor(9,1);
    if (i = 2){lcd.print ("DACHIR");}
    delay(1000);
    lcd.clear();
  } 
}
