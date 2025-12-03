int BUT1 = D0;
int BUT2 = D1;
int BUT3 = D2;

int LED1 = D3;
int LED2 = D4;
int LED3 = D5;

int currentLED = 0;
int LEDs [] = {LED1, LED2, LED3};
int BUTs [] = {BUT1, BUT2, BUT3};

void setup() {
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(BUT3, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  randomSeed(analogRead(26));
 
}

void loop() {
  
  int startTime = milis();
  int endTime;
  int reactionTime;

  randomNum = random(0, 3);

  digitalWrite(LEDs[randomNum], HIGH);

  while (BUTs[randomNum] != LOW)
  {
      endTime = millis();
  }
  
  digitalWrite(LEDs[randomNum], LOW);
  reactionTime = endTime - startTime;

  if (endtime <= 200)
  {
    
  }
    
    

  
  
  
}








  
