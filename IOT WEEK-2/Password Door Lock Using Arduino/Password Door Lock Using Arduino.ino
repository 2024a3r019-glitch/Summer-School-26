#include <Servo.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

#define buzzer 11

Servo servo;
LiquidCrystal_I2C lcd(0x27,16,2);


// Password
String password = "0123";
String input = "";


// Keypad setup
const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'D','C','B','A'},
  {'#','9','6','3'},
  {'0','8','5','2'},
  {'*','7','4','1'}
};

byte rowPins[ROWS] = {2,3,4,5};
byte colPins[COLS] = {6,7,8,9};


Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);



void setup()
{
  pinMode(buzzer,OUTPUT);

  servo.attach(10);
  servo.write(110);   // locked position


  lcd.init();
  lcd.backlight();


  lcd.setCursor(2,0);
  lcd.print("WELCOME");
  lcd.setCursor(0,1);
  lcd.print("DOOR LOCK SYSTEM");

  delay(2000);
  lcd.clear();
}



void loop()
{

  lcd.setCursor(0,0);
  lcd.print("ENTER PASSWORD");

  char key = keypad.getKey();


  if(key)
  {

    if(key == 'C')
    {
      input="";
      lcd.clear();
    }


    else if(key == 'D')
    {
      checkPassword();
    }


    else
    {
      input += key;

      lcd.setCursor(input.length()+4,1);
      lcd.print("*");
    }

  }

}



void checkPassword()
{

  if(input == password)
  {

    lcd.clear();
    lcd.print("CORRECT PASSWORD");

    delay(500);


    servo.write(50);   // open door


    lcd.setCursor(0,1);
    lcd.print("DOOR OPEN");

    beep();


  }

  else
  {

    lcd.clear();
    lcd.print("WRONG PASSWORD");

    wrongBeep();

  }


  delay(2000);

  input="";
  lcd.clear();

}




void beep()
{
  digitalWrite(buzzer,HIGH);
  delay(300);
  digitalWrite(buzzer,LOW);
}



void wrongBeep()
{

 for(int i=0;i<3;i++)
 {
  digitalWrite(buzzer,HIGH);
  delay(200);
  digitalWrite(buzzer,LOW);
  delay(200);
 }

}
