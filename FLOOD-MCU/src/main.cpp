// Copyright (c) 2023, John Simonis and The Ohio State University
// This code was written by John Simonis for a research project at The Ohio State University.

#include <Arduino.h> //Arduino platform library
#include <Wire.h>  //Standard Arduino Library
#include <AHT20.h> //Library for the AHT temperature and relative humidity sesnsor https://github.com/dvarrel/AHT20

#define Cap_Pin PORTB5 // Capacitive touch pin from port register
#define Port_Cap PORTB // Pins port register
#define Data_Dir DDRB //Pin data direction register more information here: https://www.microchip.com/en-us/product/ATMEGA328P

#define Increment 1000     // In Millis
#define Testing_Time 1     // In Minutes
#define Target_Humidity 60 // In RH%
AHT20 THSensor; //Temperature + Humidity sensor object

float time, temperature, humidity; //Testing Data

void flood(int level) //Flood function 
{
  for (int i = 0; i <= level * 2; i++) //This sets the intensity of the humidifier based on the 3 preprogrammed levels
  {
    Data_Dir = Data_Dir & ~(1 << Cap_Pin); //More efficient than pinmode, using simple bitwise math to turn OFF 5th binary digit
    delay(1000);
    Data_Dir = Data_Dir | (1 << Cap_Pin); //More effecient than pinmode, using simple bitwise math to turn ON 5th binary digit
    Port_Cap = Port_Cap & ~(1 << Cap_Pin); //More efficient than digitalwrite, using simple bitwise math to turn ON 5th binary digit
    delay(1000);
  }
  for (int q = 0; q <= 7 - level * 2; q++) //Residual levels to turn off humidifier
  {
    Data_Dir = Data_Dir & ~(1 << Cap_Pin);
    delay(100);
    Data_Dir = Data_Dir | (1 << Cap_Pin);
    Port_Cap = Port_Cap & ~(1 << Cap_Pin);
    delay(100);
  }
}

int main(void) //Main function
{
  init(); //Initializes important USB protocols on Arduino Nano as well as hardware timers
  Data_Dir = Data_Dir | (1 << Cap_Pin);
  Wire.begin(); //Begins wire foor I2C
  Serial.begin(57600);
  if (!THSensor.begin()) //Checks for our THSensor object
  {
    Serial.println("Fatal Program Error: No THSensor");
    while (true)
    {
    };
  }
  while (true) //Main program loop
  {
    while (Serial.available() == 0) //Waits for any serial input to start automatic testing sequence (use datalogger)
    {
    }
    bool input = Serial.readStringUntil('\n'); //Reads for string
    if (input)
    { // Upon serial input this sequence will begin
      time = 0;
      Serial.println("Temperature (C), Humidity (%RH), Time (s)"); //Creates test headers
      while (time <= Testing_Time * 60)
      {
        temperature = THSensor.getTemperature();
        humidity = THSensor.getHumidity();
        while (humidity < Target_Humidity) //Simple checking loop to adjust intensity of humidification
        {
          if (humidity < Target_Humidity - 10)
          {
            flood(3);
          }
          else if (humidity < Target_Humidity - 5)
          {
            flood(2);
          }
          else if (humidity < Target_Humidity)
          {
            flood(1);
          }
          humidity = THSensor.getHumidity();
        }
        Serial.println(String(temperature) + "," + String(humidity) + "," + String(time)); //Output sensor data every interval when desired humidity is met.
        time += (Increment / 1000); //Increment time for loop.
      }
    }
  }
}
