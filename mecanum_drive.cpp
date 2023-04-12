#include <mecanum_drive.h>


// frontRightMotor (A) connections
const int enA = 3;
const int in1A= 22;
const int in2A = 24;
// frontLeftMotor (B) connections
const int enB = 2;
const int in3B = 26;
const int in4B = 28;

//backRightMotor (C) connections
const int enC = 4;
const int in1C = 29;
const int in2C = 27;
//backLeftMotor (D) connections
const int enD = 5;
const int in3D = 25;
const int in4D = 23;

// this function turns off motors
void motorOff() {
  // Turn off motors
	digitalWrite(in1A, LOW);
	digitalWrite(in2A, LOW);
	digitalWrite(in3B, LOW);
	digitalWrite(in4B, LOW);
 
    digitalWrite(in1C, LOW);
	digitalWrite(in2C, LOW);
	digitalWrite(in3D, LOW);
	digitalWrite(in4D, LOW);
}

// this function sets the motors output
void motor_setup() {
    pinMode(enA, OUTPUT);
	pinMode(enB, OUTPUT);
	pinMode(in1A, OUTPUT);
	pinMode(in2A, OUTPUT);
	pinMode(in3B, OUTPUT);
	pinMode(in4B, OUTPUT);
  
 	pinMode(enC, OUTPUT);
	pinMode(enD, OUTPUT);
	pinMode(in1C, OUTPUT);
	pinMode(in2C, OUTPUT);  
	pinMode(in3D, OUTPUT);
	pinMode(in4D, OUTPUT);
	
	motorOff();
}

// this function sets the wheel direction for the frontRight wheel
void frontRightWheel(String direction, int speed) {

  analogWrite(enA, speed);
  //sets wheel direction forward or backward
  if (direction == "forward"){
	  digitalWrite(in1A, HIGH);
	  digitalWrite(in2A, LOW);
  }  
  else if (direction == "backward"){
    digitalWrite(in1A, LOW);
	  digitalWrite(in2A, HIGH);
  }
}

//this function sets the wheel direction for the frontLeft wheel
void frontLeftWheel(String direction, int speed) {

  analogWrite(enB, speed);
  //sets wheel direction forward or backward
  if (direction == "forward"){
	  digitalWrite(in3B, HIGH);
	  digitalWrite(in4B, LOW);
  }  
  else if (direction == "backward"){
    digitalWrite(in3B, LOW);
	digitalWrite(in4B, HIGH);
  }
}

//this function sets the wheel direction for the backRight wheel
void backRightWheel(String direction, int speed) {

  analogWrite(enC, speed);
  //sets wheel direction forward or backward
  if (direction == "forward"){
	  digitalWrite(in1C, HIGH);
	  digitalWrite(in2C, LOW);
  }  
  else if (direction = "backward"){
    digitalWrite(in1C, LOW);
	  digitalWrite(in2C, HIGH);
  }
}

//this function sets the wheel direction for the backLeft wheel
void backLeftWheel(String direction, int speed) {

  analogWrite(enD, speed);
  //sets wheel direction forward or backward
  if (direction == "forward"){
	  digitalWrite(in3D, HIGH);
	  digitalWrite(in4D, LOW);
  }  
  else if (direction == "backward"){
    digitalWrite(in3D, LOW);
	  digitalWrite(in4D, HIGH);
  }
}

// This function makes the wheel move forward
void moveForward(int speed) {
  // Set motors speed
	// For PWM maximum possible values are 0 to 255 (255=max speed)
  frontRightWheel("forward", speed);
  frontLeftWheel("forward", speed);
  backRightWheel("forward", speed);
  backLeftWheel("forward", speed);
}

// This function makes the wheel move backward
void moveBackward(int speed) {
  // Set motors speed
	// For PWM maximum possible values are 0 to 255
  frontRightWheel("backward", speed);
  frontLeftWheel("backward", speed);
  backRightWheel("backward", speed);
  backLeftWheel("backward", speed);
}

// This function makes the wheel move sideways to the right
void moveSidewaysRight(int speed) {
  // Set motors speed
	// For PWM maximum possible values are 0 to 255
  frontRightWheel("backward", speed);
  frontLeftWheel("forward", speed);
  backRightWheel("forward", speed);
  backLeftWheel("backward", speed);
}

// This function makes the wheel move sideways to the left
void moveSidewaysLeft(int speed) {
  // Set motors speed
	// For PWM maximum possible values are 0 to 255
  frontRightWheel("forward", speed);
  frontLeftWheel("backward", speed);
  backRightWheel("backward", speed);
  backLeftWheel("forward", speed);
}

// This function makes the wheel rotate to the right
void rotateRight(int speed) {
  // Set motors speed
	// For PWM maximum possible values are 0 to 255
  frontRightWheel("backward", speed);
  frontLeftWheel("forward", speed);
  backRightWheel("backward", speed);
  backLeftWheel("forward", speed);
}

// This function makes the wheel rotate to the left
void rotateLeft(int speed) {
  // Set motors speed
	// For PWM maximum possible values are 0 to 255
  frontRightWheel("forward", speed);
  frontLeftWheel("backward", speed);
  backRightWheel("forward", speed);
  backLeftWheel("backward", speed);
}