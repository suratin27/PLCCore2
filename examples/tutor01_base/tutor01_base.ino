#include <PLCCore2.h>
//#include "lcd.h"

long lastTime;
bool m0;

void setup(){
  initPLC(DINO_PLC_V2);
  //initLCD();
  //lcdPrint("Hello World",0,0);
}

void loop(){
  if(millis() - lastTime > 1500){

  }
}
