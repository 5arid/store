// Test01 : forward

#define R1 4
#define R2 5
#define L1 6
#define L2 7

#define SpeedR 10
#define SpeedL 11

void setup()
{
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(L1, OUTPUT);  
  pinMode(L2, OUTPUT);
  
  digitalWrite(R1, LOW);
  digitalWrite(R2, HIGH);
  digitalWrite(L1, LOW);
  digitalWrite(L2, HIGH);
  
  analogWrite(SpeedR, 100);
  analogWrite(SpeedL, 100);
}

void loop()
{

}
