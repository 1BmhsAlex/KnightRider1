int off=200;
int on = 30;
int x=75;
int a=HIGH;
int b=LOW;
void setup ()  {
      pinMode (3,OUTPUT); 
      pinMode (2,OUTPUT);
      pinMode (4,OUTPUT);
      pinMode (5,OUTPUT);
      pinMode (6,OUTPUT);
   }

void loop() {
digitalWrite(2,a);
delay(x);

digitalWrite(3,a);
delay(x);
digitalWrite(2,b);
delay(x);

digitalWrite(4,a);
delay(x);
digitalWrite(3,b);
delay(x);

digitalWrite(5,a);
delay(x);
digitalWrite(4,b);
delay(x);

digitalWrite(6,a);
delay(x);
digitalWrite(5,b);
delay(x);

digitalWrite(6,b);
delay(x);
digitalWrite(5,a);
delay(x);

digitalWrite(4,a);
delay(x);
digitalWrite(5,b);
delay(x);

digitalWrite(3,a);
delay(x);
digitalWrite(4,b);
delay(x);
digitalWrite(3,b);
delay(x);






      }
