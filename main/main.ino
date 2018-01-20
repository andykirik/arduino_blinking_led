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
 *   13		        LED
 *
 */

void setup() 
{
	pinMode(13, OUTPUT);	// initialize digital pin 13 as an output
}

void loop() 
{
	digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
	delay(500);               // wait for 0.5 second
	digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
	delay(500);               // wait for 0.5 second
}
