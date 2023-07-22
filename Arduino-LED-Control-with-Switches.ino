//const int led[6]={8,9,10,11,12,13};


 const int  green1= 9;
const int red1= 9;
const int red2= 10;
const int red3= 11;
const int red4= 12;
const int green2= 13;
const int sw1= 7;
const int sw2= 5;
const int d=250;


void setup()
{
  for (int i=8;i<14;i++)
  {pinMode(i,OUTPUT);}
 
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);}
  
   



void loop()
{
  while(digitalRead(sw1==LOW))
        {
         analogWrite(green1,127);
         digitalWrite(red2,HIGH);
           delay(d);}

        for (int c=8;c<10;c++)
        {digitalWrite(c,LOW);delay(d);}
        while(digitalRead(sw2==LOW))
              {analogWrite(green2,127);
               digitalWrite(red4,HIGH);delay(d);}

               for (int n=12;n<14;n++)
               {digitalWrite(n,LOW);delay(d);}}
               
               