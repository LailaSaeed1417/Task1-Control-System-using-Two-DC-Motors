//L293D

//MotorA
const int MotorAPin1  = 2;  // Pin 10 of L293D
const int MotorAPin2  = 3;  // Pin 15 of L293D
//Motor B
const int MotorBPin1  = 4; // Pin  2 of L293D
const int MotorBPin2  = 5;  // Pin  7 of L293D

void setup() {
  // put your setup code here, to run once:
   
    pinMode(MotorAPin1, OUTPUT);
    pinMode(MotorAPin2, OUTPUT);
    pinMode(MotorBPin1, OUTPUT);
    pinMode(MotorBPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

for (int i=0; i<=256; i++)
{
analogWrite(MotorAPin1, i);
analogWrite(MotorAPin2, i);
analogWrite(MotorBPin1, i);
analogWrite(MotorBPin2, i);
}
delay(5000);
for (int i=255; i>=0; i--)
{
analogWrite(MotorAPin1, i);
analogWrite(MotorAPin2, i);
analogWrite(MotorBPin1, i);
analogWrite(MotorBPin2, i);
}
delay(5000);
}
