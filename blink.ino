int LedRed=8;


void setup() {
  pinMode(LedRed, OUTPUT);
}

void loop() {
  blink(LedRed, 1, 200);

  delay(1000);
}
void blink(int led, int blinkTimes,int interval)
{
  for(int i=0; i<blinkTimes;i++)
  {
      digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(interval);
      digitalWrite(led, LOW);   // turn the LED on (HIGH is the voltage level)
      delay(interval);
  }
}
