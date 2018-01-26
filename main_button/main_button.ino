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
 *   12		        LED
 *
 *   4           	BUTTON (don't forget pull up register!)
 *
 */

#define BUTTON 4 
#define LED 12

void setup() 
{
	pinMode(LED, OUTPUT);	          // Initialize Pin 12 as Digital Output
	pinMode(BUTTON, INPUT_PULLUP);	// Initialize Pin 4 as Input
  digitalWrite(LED, LOW);
}

void loop() 
{
	digitalWrite(LED, digitalRead(BUTTON) ? HIGH : LOW);    // if button pressed
	delay(50);                                              // sleep 50 milliseconds            
}
