int red=7;
int blue=8;
int yellow=11;
int orange=12;
int buzzer=13;
void setup() {
  
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(orange,OUTPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
}

void loop() {
int sensor=analogRead(A5);
Serial.println(sensor);


if(sensor<=200){
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(orange,LOW);
  delay(100);
}
else if(sensor>420 && sensor<=470){ 
  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(orange,LOW);
  delay(100);
}
else if(sensor>470 && sensor<=542){
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(orange,LOW);
  delay(100);
}
else if(sensor>542 && sensor<=600){
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(orange,HIGH);
  delay(100);
  digitalWrite(buzzer,HIGH);
}
 delay(100);
}
