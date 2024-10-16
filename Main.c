int red1 = 7;
int yellow1 = 8;
int green1 = 9;
int red2 = 10;
int yellow2 = 11;
int green2 = 12;

void setup() 
{
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
}

void loop() 
{
  digitalWrite(green1, HIGH);
  digitalWrite(red2, HIGH);
  delay(10000);
  digitalWrite(red1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, LOW);

  digitalWrite(green1, LOW);  
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, HIGH);
  delay(5000);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(green2, LOW);

  digitalWrite(red1, HIGH);
  digitalWrite(green2, HIGH);
  delay(10000);
  digitalWrite(red1, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(yellow2, LOW);
}
