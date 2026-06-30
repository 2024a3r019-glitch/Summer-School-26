int rows[] = {9,8,7,6};
int cols[] = {5,4,3,2};

void setup()
{
  for(int i=0;i<4;i++)
  {
    pinMode(rows[i], OUTPUT);
    pinMode(cols[i], OUTPUT);
  }
}

void loop()
{
  // Turn everything OFF first
  for(int r=0;r<4;r++) digitalWrite(rows[r], LOW);
  for(int c=0;c<4;c++) digitalWrite(cols[c], HIGH);

  // Display V pattern
  lightLED(0,0);
  lightLED(0,3);

  lightLED(1,0);
  lightLED(1,3);

  lightLED(2,1);
  lightLED(2,2);

  lightLED(3,2);
}

void lightLED(int row, int col)
{
  digitalWrite(rows[row], HIGH);
  digitalWrite(cols[col], LOW);
}
