int val;
int tempPin = A0;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  val = analogRead(tempPin);
  float mv = ( val / 1023.0)*5000;
  float cel = mv/10;
  float farh = (cel * 9) /5 + 32;
  Serial.print("Temperature = ");
  Serial.print(cel);
  Serial.print(" *C ");
  Serial.print(farh);
  Serial.println(" *F ");
  delay(1000);
}
