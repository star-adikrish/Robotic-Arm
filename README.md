# 5 Servo Robotic Arm

This is a robotic arm I made using an Arduino and 5 servo motors. The idea was to make an arm that can move in different directions and pick up objects using a gripper.

I'm using individual servo motors for the base, shoulder, elbow, wrist and gripper.

## What I used

- Arduino Uno
- 5 Servo Motors
- Jumper wires
- External 5V power supply
- Robotic arm frame

## Connections

| Part | Arduino Pin |
|---|---|
| Base | 3 |
| Shoulder | 5 |
| Elbow | 6 |
| Wrist | 9 |
| Gripper | 10 |

## How it works

Each servo controls a different part of the arm. I used the Arduino Servo library to control their angles.

For now, I'm controlling the servos through the Serial Monitor. I can enter a servo number and an angle to move that particular part.

For example:

- `1 90` – Move the base
- `2 45` – Move the shoulder
- `3 120` – Move the elbow
- `4 60` – Move the wrist
- `5 30` – Move the gripper

## Getting it running

1. Connect all 5 servos to the Arduino.
2. Connect the external power supply.
3. Upload the Arduino code.
4. Open the Serial Monitor.
5. Set the baud rate to 9600.
6. Enter the servo number and angle.

## A few things to keep in mind

- I'm using an external power supply because 5 servos can draw more current than the Arduino can provide.
- The Arduino and external supply share a common GND.
- Servo angles may need adjustment depending on the actual arm structure.

## What's next?

Some things I would like to try adding later:

- Joystick controls
- Bluetooth control
- Automatic movement sequences
- Better object pickup and placement

Still working on improving the arm and making its movements smoother!

---

*Made with Arduino and a lot of trial and error.*
