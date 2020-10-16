/*
(C) UA6EM 16.10.2020
*/

#include "ALSerial.h"
#include "uniFT857d.h"
#include <CustomSoftwareSerial.h>


//#define SOFTPORT  // если определено используем SofwareSerial
//#define SERIAL1   //328PB ONLY

#ifdef  SOFTPORT
ALSerial RadioPort(2, 3); // RX, TX
//uniFT857d Radio(RadioPort);
uniFT857d Radio = uniFT857d(RadioPort);
#else
#ifdef SERIAL1
ALSerial RadioPort(&Serial1);
uniFT857d Radio = uniFT857d(RadioPort);
#else
ALSerial RadioPort(&Serial);
uniFT857d Radio = uniFT857d(RadioPort);
#endif
#endif

float ftFreq;



void setup() {
 /*
  Serial.begin(115200);
  delay(250);
  Serial.println("Start...");
  */
//  Radio.begin();
  Radio.begin(4800,SERIAL_8N2);
}

void loop() {
  
  }
