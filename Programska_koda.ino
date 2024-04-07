const int ledPin = 8; 
const int ldrPin = A3;

void setup() 
{ 
  Serial.begin(9600);
  pinMode (ledPin, OUTPUT);
  pinMode (ldrPin, INPUT);
}

void loop() 
{
  int ldrStatus = analogRead(1drPin); 
  if (ldrStatus <= 300) 
  {
    digitalWrite(ledPin, HIGH);
  } 
  else 
  {
  	  digitalWrite(ledPin, LOW);
  }
}
