
const int greenLED = 2;
const int leftLED = 3;
const int rightLED = 4;

float target = 20.0;
float tolerance = 5.0;
float angle = 10.0;

void setup() {
pinMode(leftLED, OUTPUT);
pinMode(greenLED, OUTPUT);
pinMode(rightLED, OUTPUT);
}

void loop() {
  digitalWrite(leftLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(rightLED, LOW);

if (angle > target + tolerance) {
  digitalWrite(leftLED, HIGH);
  } else if (angle < target - tolerance) {
  digitalWrite(rightLED, HIGH);
} else {
  digitalWrite(greenLED, HIGH);
  }
}



