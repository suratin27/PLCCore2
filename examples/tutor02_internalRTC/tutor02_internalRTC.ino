#include <ESP32Time.h>
#include "PLCCore2.h"

extern ESP32Time rtc;

void setup(){
  initPLC(MINIPLC_32U);
  //Serial.begin(115200);
  rtc.setTime(30, 24, 15, 17, 1, 2024); 
}

void loop(){
  //Serial.println(rtc.getTime("%A, %B %d %Y %H:%M:%S"));
  //struct tm timeinfo = rtc.getTimeStruct();
  //delay(1000);
}