// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009
// this code is public domain, enjoy!

#include <AFMotor.h>
int str;


//dc motor on M4
AF_DCMotor motor4(4);
AF_DCMotor motor3(3);
AF_DCMotor motor2(2);
AF_DCMotor motor(1);

void setup() {
 Serial.begin(9600);           // set up Serial library at 9600 bps
 Serial.println("Motor test!");

 // turn on motor
 motor.setSpeed(100);
 motor2.setSpeed(100);
 motor3.setSpeed(100);
 motor4.setSpeed(100);

 motor.run(RELEASE);
 motor2.run(RELEASE);
 motor3.run(RELEASE);
 motor4.run(RELEASE);
}

void loop() {

 uint8_t i;
 if(Serial.available()>0)
 {
   str=Serial.read();
   if(str==49)
   {
     Serial.println("grab!");

     motor.run(FORWARD);
     motor2.run(FORWARD);
     motor3.run(FORWARD);
     motor4.run(FORWARD);
     

    
//    for (i=100; i<120; i++) {
//      motor.setSpeed(i);
//       motor2.setSpeed(i);
//       motor3.setSpeed(i);
//       motor4.setSpeed(i);
//       delay(10);
//         }
     //motor.run(RELEASE);
   //  motor2.run(RELEASE);
     //motor3.run(RELEASE);
     //motor4.run(RELEASE);
     return;
       }

   else if(str == 50)
   {
    Serial.println("release");
    
     motor.run(RELEASE);
     motor2.run(RELEASE);
     motor3.run(RELEASE);
     motor4.run(RELEASE);
     return;
   }
  else if(str == 51){
   motor.run(FORWARD);
   motor2.run(FORWARD);
   motor3.run(FORWARD);
   motor4.run(FORWARD);
  for (i=10; i<100; i++) {
   motor.setSpeed(i);
   motor2.setSpeed(i);
   motor3.setSpeed(i);
   motor4.setSpeed(i);
   
 }
 motor.run(RELEASE);
 motor2.run(RELEASE);
 motor3.run(RELEASE);
 motor4.run(RELEASE);
}
}
}
