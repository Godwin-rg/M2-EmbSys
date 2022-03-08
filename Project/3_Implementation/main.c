#include<SoftwareSerial.h>

int bulb1 = 8;
int bulb2 = 9;
int bulb3 = 10;
int bulb4 = 11;

SoftwareSerial bt(0,1); /* (Rx,Tx) */

String str;

void setup() {
bt.begin(9600);
Serial.begin(9600);

pinMode(bulb1,OUTPUT);
pinMode(bulb2,OUTPUT);
pinMode(bulb3,OUTPUT);
pinMode(bulb4,OUTPUT);

}

void loop() {

if (bt.available())
{
str = bt.read();
Serial.println(str);
//bulb1
if(str==”bulb1 on”)
{
digitalWrite(bulb1,HIGH);
Serial.println(“BUlB 1 is ON”);
}
else if(str==”bulb1 off”)
{
digitalWrite(bulb1,LOW);
Serial.println(“BUlB 1 is OFF”);
}
else
{
digitalWrite(bulb1,LOW);
}
//bulb2
if(str==”bulb2 on”)
{
digitalWrite(bulb2,HIGH);
Serial.println(“BUlB 2 is ON”);
}
else if(str==”bulb2 off”)
{
digitalWrite(bulb2,LOW);
Serial.println(“BUlB 2 is OFF”);
}
else
{
digitalWrite(bulb2,LOW);
}
////bulb3
if(str==”bulb3 on”)
{
digitalWrite(bulb3,HIGH);
Serial.println(“BUlB 3 is ON”);
}
else if(str==”bulb3 off”)
{
digitalWrite(bulb3,LOW);
Serial.println(“BUlB 3 is OFF”);
}
else
{
digitalWrite(bulb3,LOW);
}
//bulb4
if(str==”bulb4 on”)
{
digitalWrite(bulb4,HIGH);
Serial.println(“BUlB 4 is ON”);
}
else if(str==”bulb4 off”)
{
digitalWrite(bulb4,LOW);
Serial.println(“BUlB 4 is OFF”);
}
else
{
digitalWrite(bulb4,LOW);
}

}
}