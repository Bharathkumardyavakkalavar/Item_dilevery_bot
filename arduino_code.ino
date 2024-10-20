#define echoPin 39 
#define trigPin 41 

#include <Servo.h>

Servo myservo;

float d;
long duration; // variable for the duration of sound wave travel
int distance;
int pos=0;
char v=0;
void setup() {
  Serial.begin(9600);
   pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
 pinMode(echoPin, INPUT);
  // put your setup code here, to run once:
myservo.attach(3);
  
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(28,OUTPUT);
pinMode(29,OUTPUT);
pinMode(30,OUTPUT);
pinMode(31,OUTPUT);

pinMode(14,OUTPUT);
pinMode(15,OUTPUT);
pinMode(16,OUTPUT);

pinMode(17,OUTPUT);
pinMode(18,OUTPUT);
pinMode(19,OUTPUT);


pinMode(20,OUTPUT);



pinMode(13,INPUT);

pinMode(2,OUTPUT);
pinMode(7,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);

pinMode(51,OUTPUT);


}

void loop() {
                                            /*  14-RIGHT SIDE --1
                                                15-RIGHT SIDE --2
                                                16-RIGHT SIDE --3 

                                                17-LEFT SIDE --1
                                                18-LEFT SIDE --2
                                                19-LEFT SIDE --3
                                                  
                                                 




  */                                              
                                             
                                                
   digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
   Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  v=Serial.read();
  
  if(v=='1') //Forward
  {
    digitalWrite(9,LOW);
     digitalWrite(10,LOW);
       digitalWrite(12,LOW);
      digitalWrite(11,LOW);
       
  do{
analogWrite(2,200);
analogWrite(3,200);
analogWrite(4,200);
analogWrite(5,200);
    
  digitalWrite(30,HIGH);
   
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);

   digitalWrite(28,HIGH);
  digitalWrite(29,LOW);
  digitalWrite(31,LOW);
  }
  while(v!='1');
  }
  

 
   else if(v=='2') //Right
   { 
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
    do
    {
analogWrite(2,200);
analogWrite(7,200);
analogWrite(4,200);
analogWrite(5,200);

  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);

  digitalWrite(28,LOW);
  digitalWrite(29,HIGH);
  digitalWrite(30,HIGH);
  digitalWrite(31,LOW);
   }while(v!='2');
   }


   
   else if(v=='3') //Left
   {
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
    do
   {

    analogWrite(2,200);
analogWrite(7,200);
analogWrite(4,200);
analogWrite(5,200);

  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);

  digitalWrite(28,HIGH);
  digitalWrite(29,LOW);
  digitalWrite(30,LOW);
  digitalWrite(31,HIGH);
   }while(v!='3');
   }


   
   else if(v=='4') //Reverse
   {
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
     do
   { 
    analogWrite(2,200);
analogWrite(7,200);
analogWrite(4,200);
analogWrite(5,200);

    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);

    digitalWrite(28,LOW);
    digitalWrite(29,HIGH);
    digitalWrite(30,LOW);
    digitalWrite(31,HIGH);
   }
   while(v!='4');
   }
  

  else if(v=='5') // stop
  {
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
     do
   {
analogWrite(2,200);
analogWrite(7,200);
analogWrite(4,200);
analogWrite(5,200);
    
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);

    digitalWrite(28,LOW);
    digitalWrite(29,LOW);
    digitalWrite(30,LOW);
    digitalWrite(31,LOW);
    
  }while(v!='5');
  }

  else if(distance <=20 && distance!=0)
  {

    
    digitalWrite(9, LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);

    digitalWrite(28,LOW);
    digitalWrite(29,LOW);
    digitalWrite(30,LOW);
    digitalWrite(31,LOW);
digitalWrite(51,HIGH);
digitalWrite(51,LOW);

digitalWrite(20,HIGH);
}
else
{
  digitalWrite(20,LOW);
  }
 
  
if(digitalRead(13)==0)
{

analogWrite(2,200);
analogWrite(7,200);
analogWrite(4,200);
analogWrite(5,200);

  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);

  digitalWrite(28,HIGH);
  digitalWrite(29,LOW);
  digitalWrite(30,LOW);
  digitalWrite(31,HIGH);

//LED BLINK
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
delay(180);

digitalWrite(14,LOW);
digitalWrite(15,LOW);
digitalWrite(16,LOW);
delay(180);

  
  analogWrite(2,200);
analogWrite(3,200);
analogWrite(4,200);
analogWrite(5,200);
    
  digitalWrite(30,HIGH);
   
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);

   digitalWrite(28,HIGH);
  digitalWrite(29,LOW);
  digitalWrite(31,LOW);
   }
   digitalWrite(51,LOW);

  if(digitalRead(36)==0)
  {
   
analogWrite(2,200);
analogWrite(7,200);
analogWrite(4,200);
analogWrite(5,200);

  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);

  digitalWrite(28,LOW);
  digitalWrite(29,HIGH);
  digitalWrite(30,HIGH);
  digitalWrite(31,LOW);
    
    digitalWrite(42,HIGH);
    digitalWrite(51,HIGH);
   // delay(500);

    analogWrite(2,200);
analogWrite(3,200);
analogWrite(4,200);
analogWrite(5,200);
    
  digitalWrite(30,HIGH);
//LED BLINK
digitalWrite(17,HIGH);
digitalWrite(18,HIGH);
digitalWrite(19,HIGH);
delay(180);

digitalWrite(17,LOW);
digitalWrite(18,LOW);
digitalWrite(19,LOW);
delay(180);


  
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);

   digitalWrite(28,HIGH);
  digitalWrite(29,LOW);
  digitalWrite(31,LOW);
  
   }

if(v=='6')
{
  //  for (pos = 0; pos <= 100; pos += 1) 
   // { 
   
    myservo.write(90);              
  //  delay(50);                       
 // }   
  
  }

if(v=='7')
{
  for (pos = 100; pos >= 0; pos -= 1) 
  { 
    myservo.write(pos);              
    delay(50 );                       
  } 
  }
  }
