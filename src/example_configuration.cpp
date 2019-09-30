#include <stdio.h>
#include <iostream>
#include <memory>

#include <SDL2/SDL.h>

#include "MyServoBrick.hpp"
#include "InputHandler.hpp"

#define HOST "192.168.178.199"
#define PORT 4223
#define UID "6wUYoV" // Change XXYYZZ to the UID of your Servo Brick

	/*
	Servo 0
	my servos dont stop at 0, but have individual stop points. 
	This should go into a config, as soon as I have one.
	
	Also, this should be adjustable in my ServoBrick class - not here...
	*/
	#define SERVO_0_NULLPOINT 600
	#define SERVO_1_NULLPOINT 800 //Servo 1

int main(void) {
	InputHandler inputH;
	// Create IP connection
	/*IPConnection ipcon;
	ipcon_create(&ipcon);

	// Create device object
	Servo servo;
	servo_create(&servo, UID, &ipcon);


	// Connect to brickd
	if(ipcon_connect(&ipcon, HOST, PORT) < 0) {
		fprintf(stderr, "Could not connect\n");
		return 1;
	}*/
	
	int currentLeftMotor = 0;
	int currentRightMotor = 0;



	auto myServoBrick = std::make_shared<MyServoBrick>(UID ,HOST, PORT);


	SDL_Init(SDL_INIT_VIDEO);
    SDL_Window * window = SDL_CreateWindow("SDL2 Keyboard/Mouse events", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);

	inputH.addKeyDownListener([&currentLeftMotor, &currentRightMotor, &myServoBrick](int SDLKEY)->void {
		if(SDLKEY==SDLK_LEFT){
			if(currentLeftMotor != 100){
				currentLeftMotor = 100;
				std::cout << "LEFT FULL SPEED!" << std::endl;
				myServoBrick->setPosition( 1, -5000 + SERVO_1_NULLPOINT); // Set to most right position
			}
		}
		else if(SDLKEY==SDLK_RIGHT){
			if(currentRightMotor != 100){
				currentRightMotor = 100;
				std::cout << "RIGHT FULL SPEED!" << std::endl;
				myServoBrick->setPosition( 0, 5000 + SERVO_0_NULLPOINT); // Set to most right position
			}
		}
		else if(SDLKEY==SDLK_DOWN){
			if(currentRightMotor != 100){
				currentRightMotor = 100;
				std::cout << "RIGHT FULL SPEED!" << std::endl;
				myServoBrick->setPosition( 0, -3000 + SERVO_0_NULLPOINT); // Set to most right position
			}
			if(currentLeftMotor != 100){
				currentLeftMotor = 100;
				std::cout << "LEFT FULL SPEED!" << std::endl;
				myServoBrick->setPosition( 1, 3000 + SERVO_1_NULLPOINT); // Set to most right position
			}
		}
	});

	inputH.addKeyUpListener([&currentLeftMotor, &currentRightMotor, &myServoBrick](int SDLKEY)->void {
		if(SDLKEY==SDLK_LEFT){
			if(currentLeftMotor != 0){
				currentLeftMotor = 0;
				std::cout << "LEFT STOP!" << std::endl;
				myServoBrick->setPosition(1, SERVO_1_NULLPOINT); // Set to most right position
			}
		}
		else if(SDLKEY==SDLK_RIGHT){
			if(currentRightMotor != 0){
				currentRightMotor = 0;
				std::cout << "RIGHT STOP!" << std::endl;
				myServoBrick->setPosition( 0, SERVO_0_NULLPOINT); // Set to most right position
			}
		}
		else if(SDLKEY==SDLK_DOWN){
			if(currentLeftMotor != 0){
				currentLeftMotor = 0;
				std::cout << "LEFT STOP!" << std::endl;
				myServoBrick->setPosition(1, SERVO_1_NULLPOINT); // Set to most right position
			}
			if(currentRightMotor != 0){
				currentRightMotor = 0;
				std::cout << "RIGHT STOP!" << std::endl;
				myServoBrick->setPosition( 0, SERVO_0_NULLPOINT); // Set to most right position
			}
		}
	});





	// Don't use device before ipcon is connected

	// Configure two servos with voltage 5.5V
	// Servo 1: Connected to port 0, period of 19.5ms, pulse width of 1 to 2ms
	//          and operating angle -100 to 100°
	//
	// Servo 2: Connected to port 5, period of 20ms, pulse width of 0.95
	//          to 1.95ms and operating angle -90 to 90°
	myServoBrick->setOutputVoltage(5500);

	myServoBrick->setDegree(0, -10000, 10000);
	myServoBrick->setPulseWidth(0, 1000, 2000);
	myServoBrick->setPeriod(0, 19500);
	myServoBrick->setAcceleration(0, 65535); 
	myServoBrick->setVelocity(0, 65535); // Full speed

	myServoBrick->setDegree(1, -10000, 10000);
	myServoBrick->setPulseWidth(1, 1000, 2000);
	myServoBrick->setPeriod(1, 19500);
	myServoBrick->setAcceleration(1, 65535);
	myServoBrick->setVelocity(1, 65535); // Full speed

	//servo_set_degree(&servo, 5, -9000, 9000);
	//servo_set_pulse_width(&servo, 5, 950, 1950);
	//servo_set_period(&servo, 5, 20000);
	//servo_set_acceleration(&servo, 5, 65535); // Full acceleration
	//servo_set_velocity(&servo, 5, 65535); // Full speed

	//myServoBrick->setPosition( 0, 100); // Set to most right position
	myServoBrick->setServoEnabled( 0, true);
	myServoBrick->setServoEnabled( 1, true);

	//servo_set_position(&servo, 5, -9000); // Set to most left position
	//servo_enable(&servo, 5);

	inputH.doInputLoop();
	
	myServoBrick->setServoEnabled(0, false);
	myServoBrick->setServoEnabled(1, false);
	//servo_disable(&servo, 5);
	myServoBrick.reset();


	/* Clean up */
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}
