#include <Arduino.h>

extern void motorOff();
extern void motor_setup();
extern void frontRightWheel(String direction, int speed);
extern void frontLeftWheel(String direction, int speed);
extern void backRightWheel(String direction, int speed);
extern void backLeftWheel(String direction, int speed);
extern void moveForward(int speed);
extern void moveBackward(int speed);
extern void moveSidewaysRight(int speed);
extern void moveSidewaysLeft(int speed);
extern void rotateRight(int speed);
extern void rotateLeft(int speed);