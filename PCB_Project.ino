int BUT1 = D0;
int BUT2 = D1;
int BUT3 = D2;

int LED1 = D3;
int LED2 = D4;
int LED3 = D5;

int currentLED = 0;

void setup() {
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(BUT3, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  randomSeed(analogRead(26));
  NewLED();
}

void loop() {
  if (currentLED == 0 && digitalRead(BUT1) == LOW) press();
  if (currentLED == 1 && digitalRead(BUT2) == LOW) press();
  if (currentLED == 2 && digitalRead(BUT3) == LOW) press();
}

void NewLED() {

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);

  currentLED = random(0, 3);

  if (currentLED == 0 && digitalRead(BUT1) == HIGH) press();
  if (currentLED == 1 && digitalRead(BUT2) == HIGH) press();
  if (currentLED == 2 && digitalRead(BUT3) == HIGH) press();

}

void press() {

  if (currentLED == 0) digitalWrite(LED1, LOW);
  if (currentLED == 1) digitalWrite(LED2, LOW);
  if (currentLED == 2) digitalWrite(LED3, LOW);

  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);

  delay(200);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);

  delay(200);

  NewLED();


}




  
