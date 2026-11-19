
#include <Servo.h>

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist;
Servo gripper;

void setup() {
  Serial.begin(9600);

  base.attach(3);
  shoulder.attach(5);
  elbow.attach(6);
  wrist.attach(9);
  gripper.attach(10);

  // Initial positions
  base.write(90);
  shoulder.write(90);
  elbow.write(90);
  wrist.write(90);
  gripper.write(90);

  Serial.println("5 Servo Robotic Arm Ready!");
  Serial.println("Enter servo number and angle.");
  Serial.println("Example: 1 90");
}

void loop() {
  if (Serial.available()) {
    int servoNumber = Serial.parseInt();
    int angle = Serial.parseInt();

    angle = constrain(angle, 0, 180);

    switch (servoNumber) {
      case 1:
        base.write(angle);
        break;

      case 2:
        shoulder.write(angle);
        break;

      case 3:
        elbow.write(angle);
        break;

      case 4:
        wrist.write(angle);
        break;

      case 5:
        gripper.write(angle);
        break;

      default:
        Serial.println("Invalid servo number!");
        break;
    }

    Serial.println("Command executed!");
  }
}
