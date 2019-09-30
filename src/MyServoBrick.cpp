
#include "MyServoBrick.hpp"
#include "lib/ip_connection.h"

MyServoBrick::MyServoBrick(const char* UID, const char* HOST, int PORT){
	ipcon_create(&this->ipcon);
	servo_create(&this->servo, UID, &ipcon);
	
	// Connect to brickd
	if(ipcon_connect(&ipcon, HOST, PORT) < 0) {
		fprintf(stderr, "Could not connect\n");
	}
}

MyServoBrick::~MyServoBrick(){
	servo_destroy(&this->servo);
	ipcon_destroy(&this->ipcon);
}

void MyServoBrick::setOutputVoltage(int voltage_mV){
	servo_set_output_voltage(&this->servo, voltage_mV);
}

void MyServoBrick::setDegree(int servoNum, int min, int max){
	servo_set_degree(&this->servo, servoNum, min, max);
}

void MyServoBrick::setPulseWidth(int servoNum, int min, int max){
	servo_set_pulse_width(&this->servo, servoNum, min, max);
}

void MyServoBrick::setPeriod(int servoNum, int period){
	servo_set_period(&this->servo, servoNum, period);
}
void MyServoBrick::setAcceleration(int servoNum, int acceleration){
	servo_set_acceleration(&this->servo, servoNum, acceleration);
}

void MyServoBrick::setVelocity(int servoNum, int speed){
	servo_set_velocity(&this->servo, servoNum, speed);
}

void MyServoBrick::setPosition(int servoNum, int pos){
	servo_set_position(&this->servo, servoNum, pos);
} 

void MyServoBrick::setServoEnabled(int servoNum, bool enabled){
	if(enabled)
		servo_enable(&this->servo, servoNum);
	else
	{
		servo_disable(&this->servo, servoNum);
	}
	
}