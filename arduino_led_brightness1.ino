# define led 10
int counter=5;
int a=0;
void setup()
{
pinMode(10,OUTPUT);
}

void loop()
{
  analogWrite(led,a);
  a=a+counter;
  if(a==255 || a==0){
    counter=-counter;
  }
  delay(25);
}
