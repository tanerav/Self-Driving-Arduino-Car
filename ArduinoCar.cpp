int motor1pin1 = 2;
int motor1pin2 = 3;
int motor2pin1 = 4;
int motor2pin2 = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
}


void loop() {
 
digitalWrite(motor1pin1, HIGH);
digitalWrite(motor2pin1, HIGH);
turnleft(motor1pin1,motor2pin1);
}# self driving car code
