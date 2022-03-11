// C++ code
//

int Red = 9;
int Blue = 8;
int Green = 7;
void setup()
{
  pinMode(Red, OUTPUT);
  pinMode(Blue, OUTPUT);
  pinMode(Green, OUTPUT);
}

void loop()
{ 
  digitalWrite(Red, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Red, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(Blue, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Blue, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(Green, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Green, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(Red, HIGH);
  digitalWrite(Green, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(Blue, HIGH);
  digitalWrite(Green, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Blue, LOW);
  digitalWrite(Green, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(Red, HIGH);
  digitalWrite(Blue, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Red, LOW);
  digitalWrite(Blue, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(Red, HIGH);
  digitalWrite(Blue, HIGH);
  digitalWrite(Green, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Red, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Blue, LOW);
  delay(1000); // Wait for 1000 millisecond(s)  
}
