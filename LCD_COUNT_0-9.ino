#include <LiquidCrystal.h> 
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

int count=0;

void setup() 
{
  lcd.begin(16, 2);
}
void loop() 
{
  lcd.setCursor(0,0);
  lcd.print("SRI ELECTRONIC & EMBEDDED SOLUTIONS");
  delay(2000);
   
  lcd.setCursor(0,1);
  lcd.print("Count:");
  
  for(count=0;count<10;count++)
  {
    lcd.setCursor(6,1); 
    lcd.print(count);
    delay(1000);
  }  
}
