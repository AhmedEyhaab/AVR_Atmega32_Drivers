/*
 * DIO_cnfg.c
 *
 *  Created on: Sep 22, 2019
 *      Author: HOBA
 */


#include "DIO_cnfg.h"



DIO_cnfg_t DIO_cnfg_arr[NUM_OF_PINS] =
{
	
	/*
	// initialize the Keypad Pins
	{KEYPAD_PORT_,PIN2,OUTPUT,HIGH,NA,INITIALIZED},
	{KEYPAD_PORT_,PIN3,OUTPUT,HIGH,NA,INITIALIZED},
	{KEYPAD_PORT_,PIN4,OUTPUT,HIGH,NA,INITIALIZED},
	{KEYPAD_PORT_,PIN5,INPUT,NA,PULLUP,INITIALIZED},
	{KEYPAD_PORT_,PIN6,INPUT,NA,PULLUP,INITIALIZED},
	{KEYPAD_PORT_,PIN7,INPUT,NA,PULLUP,INITIALIZED},
	*/
	// initialize the LCD Pins
	{LCD_4Bits_PORT_,PIN1,OUTPUT,NA,NA,INITIALIZED},
	{LCD_4Bits_PORT_,PIN2,OUTPUT,NA,NA,INITIALIZED},
	{LCD_4Bits_PORT_,PIN3,OUTPUT,NA,NA,INITIALIZED},
	{LCD_4Bits_PORT_,PIN4,OUTPUT,NA,NA,INITIALIZED},
	{LCD_4Bits_PORT_,PIN5,OUTPUT,NA,NA,INITIALIZED},
	{LCD_4Bits_PORT_,PIN6,OUTPUT,NA,NA,INITIALIZED},
	{LCD_4Bits_PORT_,PIN7,OUTPUT,NA,NA,INITIALIZED},
		
	/*
	// initialize the LED Pins
	{LED_PORT_,PIN4,OUTPUT,NA,NA,INITIALIZED},
	{LED_PORT_,PIN5,OUTPUT,NA,NA,INITIALIZED},
	{LED_PORT_,PIN6,OUTPUT,NA,NA,INITIALIZED},
	{LED_PORT_,PIN7,OUTPUT,NA,NA,INITIALIZED},
	
	// Initialize the Switch Pin
	{SWITCH_1_PORT_,SWITCH_1_PIN,INPUT,NA,PULLDOWN,INITIALIZED},
	{SWITCH_2_PORT_,SWITCH_2_PIN,INPUT,NA,PULLDOWN,INITIALIZED},
	*/
	
	// Initialize the Servo Motor Pin
	{SERVO_SIGNAL_PORT_ , SERVO_SIGNAL_PIN , OUTPUT , NA , NA , INITIALIZED},
		
	// Initialize the Motor Pin
	{PORT_MOTOR_1_,PIN0,OUTPUT,NA,NA,INITIALIZED},
	{PORT_MOTOR_1_,PIN1,OUTPUT,NA,NA,INITIALIZED},
	{PORT_MOTOR_2_,PIN2,OUTPUT,NA,NA,INITIALIZED},
	{PORT_MOTOR_2_,PIN3,OUTPUT,NA,NA,INITIALIZED},
	{PORT_MOTOR_1_,PIN4,OUTPUT,NA,NA,INITIALIZED},
	{PORT_MOTOR_2_,PIN5,OUTPUT,NA,NA,INITIALIZED},
};

