// Copyright (c) 2023, John Simonis and The Ohio State University
// This code was written by John Simonis for a research project at The Ohio State University.

#include <ACS712XX.h> //Library for the ACS712XX current sensors https://github.com/ElectroRush4u/ACS712
#include <Wire.h> //Standard Arduino Library
#include <AHT20.h> //Library for the AHT temperature and relative humidity sesnsor https://github.com/dvarrel/AHT20
AHT20 aht20; //Temperature + Humidity sensor object
#define period1 10000 //Time period 1
#define period2 1000 //Time period 2
unsigned long time1; //Time collected 1
unsigned long time2; //Time collected 2
unsigned long lastmillis1 = 0; //Used for timers
unsigned long lastmillis2 = 0;
unsigned long comparative_moisture = 0; //This needs normalized after the fact in excel
unsigned long last_moisture = 0;
float curavg = 0; //Allows us to mitigate noise in current average
ACS712XX ACS712(ACS712_30A,A0);
void setup() {
  Serial.begin(9600);
  Wire.begin(); //Begins wire foor I2C
  float _offset = ACS712.autoCalibrate(); //Current calibration
  last_moisture = analogRead(A2); 
}

void loop() { 
  time1 = (lastmillis1 + period1);
  time2 = (lastmillis2 + period2);
  if (analogRead(A2)>last_moisture){
    comparative_moisture = analogRead(A2);
    last_moisture = comparative_moisture;
  }
  if (millis() >= time1){ 
    Serial.println(String(curavg) +","+String(comparative_moisture)+","+String(map(analogRead(A3),0,1024,0,25)) + String(curavg/10*0.00277778*24)+","+String(aht20.getTemperature())+","+String(aht20.getHumidity()));
    lastmillis1 = millis();
    curavg = 0;
  }
  if (millis() >= time2){
    curavg += ACS712.getDC();
    lastmillis2 = millis();
  }
}
