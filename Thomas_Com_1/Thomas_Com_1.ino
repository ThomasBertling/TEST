int sensorwert;

void setup() 
{
Serial.begin(9600);     
}

void loop() 
{
sensorwert=analogRead(A0);          //Auslesen des Temperatursensorwertes.
delay(500);              
Serial.print("Sensorwert: ");
Serial.println(sensorwert);         //Nun wird der Sensorwert über die serielle Kommunikation an den PC gesendet.
}
