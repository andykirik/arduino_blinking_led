/*
 * File:   main.ino
 * Author: akirik
 *
 * Created on January 19, 2018, 3:52 PM
 * 
 * Switch and a LED
 * Digital I/O
 * 
 *  Board connection (Arduino Uno):
 *   PIN        	Module                         				  
 * ------------------------------------------                        
 *   13		        LED
 *
 *   2             	BUTTON
 *
 */

void setup() 
{
	pinMode(13, OUTPUT);	// initialize digital pin 13 as an output
	pinMode(2, INPUT);	// make the pushbutton's pin an input
}

void loop() 
{
	digitalWrite(13, digitalRead(2) ? HIGH : LOW);   // 
	delay(50);               
}
