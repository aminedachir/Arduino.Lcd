#include <LiquidCrystal.h>
LiquidCrystal lcd( 8,  9,  4,  5,  6, 7);
void setup() {
 lcd.begin(10, 2);
 lcd.setCursor(0,0);
 lcd.print("YOUSSEF   ");
 lcd.setCursor(0,1); 
 lcd.print(" AMINE DACHIR ");
}
void loop() {
}
