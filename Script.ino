//My Traffic Light Simulation With Arduino!

int RED = 9;       //9 = RED
int YELLOW = 10;   //10 = YELLOW
int GREEN = 11;    //11 = GREEN

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(RED, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(GREEN, LOW);
}
