int sensorPin = A0;  
int sensorValue = 0;
int BUTTON = 3;
int c=0;

void setup() {
  pinMode(2, OUTPUT); 
  Serial.begin(9600); 
  pinMode(BUTTON,INPUT);
}

void loop() {
  
if(digitalRead(BUTTON) == HIGH)
{delay(100);
 if(digitalRead(BUTTON) == LOW)
 {c++;}
}
 if(c>0)
 {
  sensorValue = analogRead(sensorPin);    
  Serial.println(sensorValue); 
  
  if(sensorValue < 470) 
  { digitalWrite(2,HIGH); 
  delay(500);
  digitalWrite(2,LOW); 
   delay(500);}
  else
  {
  digitalWrite(2,HIGH); 
  delay(100);
  digitalWrite(2,LOW); 
   delay(100);}
 
            
}}
