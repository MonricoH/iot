const int BUTTON1 = 2;//Initialize Pin2 with Button1
const int BUTTON2 = 4;//Initialize Pin4 with Button2
const int BUTTON3 = 7;//Initialize Pin7 with Button3
const int LED1 = 8;//Initialize pin8 for LED1
const int LED2 = 12;//Initialize pin12 for LED2
const int LED3 = 13;//Initialize pin13 for LED3
int BUTTONstate1 = 0; // To read the button1 state
int BUTTONstate2 = 0;// To read the button2 state
int BUTTONstate3 = 0;// To read the button3 state

void setup()
{
  pinMode(BUTTON1, INPUT);//Define Button1 as input pin
  pinMode(BUTTON2, INPUT);//Define Button2 as input pin
  pinMode(BUTTON3, INPUT);//Define Button3 as input pin
  pinMode(LED1, OUTPUT);//Define LED1 as output pin
  pinMode(LED2, OUTPUT);//Define LED2 as output pin
  pinMode(LED3, OUTPUT);//Define LED3 as output pin
}

void loop()
{
  BUTTONstate1 = digitalRead(BUTTON1);//Read button1 state
  if (BUTTONstate1 == LOW)
  {
    digitalWrite(LED1, HIGH);// Turn LED1 ON
  } 
  else{
    digitalWrite(LED1, LOW);// Turn LED1 ON
  }
  BUTTONstate2 = digitalRead(BUTTON2);//Read button2 state
  if (BUTTONstate2 == HIGH)
  {
    digitalWrite(LED2, LOW); // Turn LED2 OFF
  } 
  else{
    digitalWrite(LED2, HIGH); //Turn LED2 ON
  }
  BUTTONstate3 = digitalRead(BUTTON3);//Read button3 state
  if (BUTTONstate3 == HIGH)
  {
    digitalWrite(LED3, LOW);// Turn LED3 OFF
  } 
  else{
    digitalWrite(LED3, HIGH);// Turn LED2 ON
  }
  
}
