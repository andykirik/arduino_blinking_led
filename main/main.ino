/*
 * File:   main.ino
 * Author: akirik
 *
 * Created on January 19, 2018, 3:52 PM
 * 
 * Blinking LED
 * 
 *  Board connection (Arduino Uno):
 *   PIN        	Module                         				  
 * ------------------------------------------                        
 *   12		        LED
 *
 */

#define LED 12

void setup() 
{
	pinMode(LED, OUTPUT);	// Initialize Pin 12 as Digital Output
}

void loop() 
{
	digitalWrite(LED, digitalRead(LED) ? LOW : HIGH);   // Toggle the LED
	delay(500);                                         // sleep 0.5 second
}

