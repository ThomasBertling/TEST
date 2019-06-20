#include <DS3231.h>
DS3231  rtc(SDA, SCL);

int sensorwert;

void setup() 
{
rtc.begin(); 
Serial.begin(9600);     
}

void loop() 
{
sensorwert=analogRead(A0);          //Auslesen des Temperatursensorwertes.
delay(500);              
Serial.print("Sensorwert: ");
Serial.println(sensorwert);         //Nun wird der Sensorwert über die serielle Kommunikation an den PC gesendet.

// Send time
Serial.print(", ");
Serial.println(rtc.getTimeStr());
}
