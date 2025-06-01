#include <LiquidCrystal_I2C.h>

/*-------------------------------------------------------k
                        LCD Part
-------------------------------------------------------*/
LiquidCrystal_I2C lcd(0x27, 20, 4);

void initLCD(){
  lcd.begin();
  lcd.noBacklight();
}

void lcdPrint(String msg,uint8_t y,uint8_t x,bool light=true){
  lcd.setCursor(x,y);
  if(light==true){
    lcd.backlight();
  }else{
    lcd.noBacklight();
  }
  lcd.print(msg);
}

void lcdClear(int _delay){
  if(_delay > 0){
    delay(_delay);
  }
  lcd.clear();
}

void lcdOff(){
  lcd.noDisplay();
  lcd.noBacklight();
}

void lcdOn(){
  lcd.display();
  lcd.backlight();
}

void lcdPrintBlank(uint8_t y){
  lcd.setCursor(0,y);
  lcd.print("                    ");
}

void lcdPrintBlank(uint8_t y,uint8_t from,uint8_t last){
  for(uint8_t i=from;i<last;i++){
    lcd.setCursor(i,y);
    lcd.print(" ");
  }
}