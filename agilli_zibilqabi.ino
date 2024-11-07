#include <Ultrasonic.h>
#include <Servo.h>

Ultrasonic nicat(12, 13); 
Servo zibilyiganservo;

void setup() {
  zibilyiganservo.attach(9);
}

void loop() {
  int mesafe = nicat.read();

  if(mesafe < 5){
    zibilyiganservo.write(90);
    delay(2000);
  }else{
    zibilyiganservo.write(180);
  }

  delay(100);
}
