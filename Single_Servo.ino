

#include <Servo.h> 
Servo motor1;

void setup() {
motor1.attach(11);

}

void loop() {
motor1.write(5);
delay(1000);
motor1.write(85);
delay(1000);

}


