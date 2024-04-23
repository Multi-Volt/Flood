#include <ACS712XX.h>
#include <Wire.h>
#include <AHT20.h>
AHT20 aht20;
#define period1 10000
#define period2 1000
unsigned long time1;
unsigned long time2;
unsigned long lastmillis1 = 0;
unsigned long lastmillis2 = 0;
unsigned long comparative_moisture = 0;
unsigned long last_moisture = 0;
float curavg = 0;
ACS712XX ACS712(ACS712_30A,A0);
void setup() {
  Serial.begin(9600);
  Wire.begin();
  float _offset = ACS712.autoCalibrate();
  last_moisture = analogRead(A2)
}

void loop() { 
  time1 = (lastmillis1 + period1);
  time2 = (lastmillis2 + period2);
  if (analogRead(A2)>last_moisture){
    comparative_moisture = analogRead(A2);
    last_moisture = comparative_moisture;
  }
  if (millis() >= time1){ 
    Serial.println(String(curavg)) +","+String(comparative_moisture)+","+String(analogRead(A3)) + String(curavg/10*0.00277778*24)+","+String(aht20.getTemperature())+","+String(aht20.getHumidity()));
    lastmillis1 = millis();
    curavg = 0;
  }
  if (millis() >= time2){
    curavg += ACS712.getDC();
    lastmillis2 = millis();
  }
}
