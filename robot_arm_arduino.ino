#include <Servo.h>

Servo servo1, servo2, servo3, servo4;

char buffer[10];
int charsRead;
int val;
int angle2, angle3, angle4;

void setup(){
  servo1.attach(11);
  servo2.attach(10);
  servo3.attach(9);
  servo4.attach(6);
  Serial.begin(9600);
  }
  
  void loop(){
    while(Serial.available() > 0){
      charsRead = Serial.readBytesUntil('\n', buffer, sizeof(buffer) - 1);
      buffer[charsRead] = '\0';
      val = atoi(buffer);
      if (val == 5){
        servo1.write(40);
        }
        else if(val == 6){
          servo1.write(160);
          }
          else{
            servo2.write(170);
    
    while (val == 201){
      servo2.write(angle2--);
      delay(35);
      }
        while (val == 202){
          servo2.write(angle2++);
          delay(35);
          }
      while (val != 201 && val != 202){
        angle2 = servo2.read();
        servo2.write(angle3);
        delay(35);
        }
                 servo3.write(170);
    
    while (val == 301){
      servo3.write(angle3--);
      delay(35);
      }
        while (val == 302){
          servo3.write(angle3++);
          delay(35);
          }
      while (val != 301 && val != 302){
        angle3 = servo3.read();
        servo3.write(angle3);
        delay(35);
        }
                 servo4.write(170);
    
    while (val == 401){
      servo4.write(angle4--);
      delay(35);
      }
        while (val == 402){
          servo4.write(angle4++);
          delay(35);
          }
      while (val != 401 && val != 402){
        angle4 = servo4.read();
        servo4.write(angle4);
        delay(35);
        }
        
       }
      }
    }
