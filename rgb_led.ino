#define BLUE 3
#define RED 6
#define GREEN 5

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(BLUE, LOW);
  digitalWrite(GREEN, LOW);

}

int redValue;
int blueValue;
int greenValue;

void loop() {
  // put your main code here, to run repeatedly:
  #define delayTime 10

  redValue = 255;
  greenValue = 0;
  blueValue = 0;

  for (int i = 0; i < 255; i++) {
    redValue -= 1;
    greenValue++;
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }

  redValue = 0;
  greenValue = 255;
  blueValue = 0;

  for (int i = 0; i < 255; i++) {
    greenValue -= 1;
    blueValue++;
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }

}
