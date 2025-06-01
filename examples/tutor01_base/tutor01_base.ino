#include <PLCCore2.h>
//#include "lcd.h"

long lastTime;
bool m0;

void setup(){
  initPLC(MINIPLC_32UE);
  //initLCD();
  //lcdPrint("Hello World",0,0);
}

void loop(){
  if(millis() - lastTime > 1500){

  }
}
