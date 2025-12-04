int BUT1 = D0;
int BUT2 = D1;
int BUT3 = D2;

int LED1 = D3;
int LED2 = D4;
int LED3 = D5;

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
  
  int endTime;
  int reactionTime;

  int randomNum = random(0, 3);                     //picks a random number in order to light up that LED

  digitalWrite(LEDs[randomNum], HIGH);
  int startTime = millis();                      //gets the time from when the LED is lit

  while (digitalRead(BUTs[randomNum]) != LOW)
  {
      endTime = millis();                                  //updates the time until you press the right button
  }
  
  digitalWrite(LEDs[randomNum], LOW);                       //turns off LED
  reactionTime = endTime - startTime;                          //calculates reaction time

  if (reactionTime <= 200)                                 //if your reaction time is fast enough the lights will turn on and off repeatedly 
  {
    for(int i = 0; i<3; i++)
      {
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED3, HIGH);

        delay(200);

        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);

        delay(200);
        
      }
  }

  delay(random(500, 1000));                                    //random delay before the next round so you cant always know when you need to press the button
}








  
