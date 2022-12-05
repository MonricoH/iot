void setup() {
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);

  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  int redbutton;
  int greenbutton;
  int bluebutton;

  redbutton = digitalRead(8);
  greenbutton = digitalRead(9);
  bluebutton = digitalRead(10);


  if(redbutton == LOW){
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  else if(redbutton == HIGH){
    digitalWrite(3, LOW);
  }

  if(greenbutton == LOW){
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  }
  else if(greenbutton == HIGH){
  digitalWrite(4, LOW);  
  }

  if(bluebutton == LOW){
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  }
  else if(bluebutton == HIGH){
  digitalWrite(5, LOW);  
  }
  delay(500);
}
