int leds[] = {3, 5, 6, 9,10};

void setup()
{
  for(int i=0; i<5; i++)
  {
    pinMode(leds[i], OUTPUT);
  }
}

void loop()
{
  for(int j=0; j<5; j++)
  {
    for(int b=0; b<=255; b+=5)
    {
      analogWrite(leds[j], b);
      delay(20);
    }

    for(int b=255; b>=0; b-=5)
    {
      analogWrite(leds[j], b);
      delay(20);
    }
  }
}
