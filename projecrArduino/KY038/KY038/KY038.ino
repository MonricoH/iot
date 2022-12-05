  int soundPin = 4;
  int sensorValue = 0;
 
void setup () 
{
  Serial.begin (9600);
}
 
void loop () 
{
  sensorValue = digitalRead (soundPin);
  Serial.println (sensorValue, DEC);
  delay (100);
}
