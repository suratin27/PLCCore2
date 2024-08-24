#include <PLCCore2.h>

long lastTime;
bool m0;

void setup(){
  initPLC(ESP32_CONTROL);
}

void loop(){
  if(millis() - lastTime > 1500){    //- Random value and assing to D100
    //setU16D(100,random(0,999));
    m0 = getM(0);
    Serial.printf("FREE HEAP: %d\n",ESP.getFreeHeap());
  }
}
