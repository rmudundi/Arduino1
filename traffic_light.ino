int red = 9;
int yellow = 8;
int green = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red, HIGH);
  delay(1500);
  digitalWrite(red, LOW);
  delay(1500);
  digitalWrite(yellow, HIGH);
  delay(1500);
  digitalWrite(yellow, LOW);
  delay(1500);
  digitalWrite(green, HIGH);
  delay(1500);
  digitalWrite(green, LOW);
  delay(1500);
}
