
#include "LiquidCrystal.h"
LiquidCrystal lcd( 8,  9,  4,  5,  6,  7);
void setup() {
 lcd.begin(16, 2);
 lcd.setCursor(4,0);
 lcd.print("MOHAMMED");
}
void loop() {
  for (int i = 0;i<3;i++){
    delay(1000);
    lcd.setCursor(2,1);
    if (i = 1){lcd.print ("AMINE");}
    delay(1500);
    lcd.setCursor(9,1);
    if (i = 2){lcd.print ("DACHIR");}
  } 
}
