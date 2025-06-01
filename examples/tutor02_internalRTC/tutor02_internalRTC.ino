#include <PLCCore2.h>

extern ESP32Time rtc;

void setup(){
  initPLC(MINIPLC_S3);
  rtc.setTime(30, 24, 15, 17, 1, 2024); 
}

void loop(){
  
}