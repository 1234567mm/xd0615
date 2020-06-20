/*
'b':后退；
‘f’:前进；
'l':左转;
'r':右转;
*/
char c=" ";
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.printIn("OK!");
}

void turn(a)
{
  if(a==1)
  {
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);  
    digitalWrite(9, LOW);
  }
  else if(a==2)
  {
    digitalWrite(7, HIGH);
    digitalWrite(66, LOW);
    digitalWrite(9, HIGH);  
    digitalWrite(8, LOW);
  }
  else if(a==3)
  {
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(8, HIGH);  
    digitalWrite(9, LOW);
  }
  else if(a==4)
  {
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(9, HIGH);  
    digitalWrite(8, LOW);
  }
}
void loop()
{
  if(Serial.available()>0)
  {
     ch=Serial.read();
    switch(ch)
    {
      case 'f':turn(1);break;
      case 'b':turn(2);break;
      case 'l':turn(3);break;
      case 'r':turn(4);break;
      default;
    }
  }
}