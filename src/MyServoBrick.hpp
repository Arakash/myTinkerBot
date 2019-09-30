#pragma once

#include "lib/brick_servo.h"
#include <stdio.h>

#define SERVO_FULL_SPEED 65535

/**
 * TODO: this class should hold a list of up to 8 servo objects.
 */
class MyServoBrick {


	// Create device object
	Servo servo;
	IPConnection ipcon;

public:
    MyServoBrick(const char* UID, const char* HOST, int PORT);
    ~MyServoBrick();

    void setOutputVoltage(int voltage_mV); //defgault 5500
	void setDegree(int servoNum, int min, int max);
	void setPulseWidth(int servoNum, int min, int max);
	void setPeriod(int servoNum, int period); // default 19500
	void setAcceleration(int servoNum, int acceleration);//1000
	void setVelocity(int servoNum, int speed); // Full speed: 65535
	void setPosition(int servoNum, int pos); // Set to most right position = 100
	void setServoEnabled(int servoNum, bool enabled);
};