int i=0;
void setup()
{
  for(i;i<8;i++)
  pinMode(i, OUTPUT);
}

void loop()
{
  for(i;i<4;i++){
  digitalWrite(i, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(i+4, LOW);
  delay(700); // Wait for 1000 millisecond(s)
  }
  
}