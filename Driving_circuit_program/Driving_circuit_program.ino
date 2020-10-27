// connect motor controller pins to Arduino digital pins
// motor one
int enA = 10;
int in1 = 9;
int in2 = 8;
// motor two
int enB = 5;
int in3 = 7;
int in4 = 6;
void setup()
{
  Serial.begin(9600);
  // set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}
void demoOne()
{
  if (Serial.available() > 0) {
    int a = Serial.read();
    // this function will run the motors in both directions at a fixed speed
    // turn on motor A
    if (a == '1') {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      // set speed to 200 out of possible range 0~255
      analogWrite(enA, 250);
      // turn on motor B
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      // set speed to 200 out of possible range 0~255
      analogWrite(enB, 200);
    }
    if (a == '0') {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      // set speed to 200 out of possible range 0~255
      analogWrite(enA, 100);
      // turn on motor B
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      // set speed to 200 out of possible range 0~255
      analogWrite(enB, 150);
    }
    if (a == '2') {
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      // set speed to 200 out of possible range 0~255
      analogWrite(enA, 250);
      // turn on motor B
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      // set speed to 200 out of possible range 0~255
      analogWrite(enB, 200);
    }
    else {
      Serial.println("Sotty");
    }
  }
}
void loop()
{
  demoOne();
  delay(100);
}
