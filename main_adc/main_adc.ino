/*
 * File:   main.ino
 * Author: akirik
 *
 * Created on January 19, 2018, 3:52 PM
 * 
 * Analog to Digital Converter (ADC)
 * 
 *  Board connection (Arduino Uno):
 *   PIN        	Module                         				  
 * ------------------------------------------                        
 *   12		        LED
 *   
 *   A2           POTENCIOMETER
 */

#define POT A0
#define LED 12

void setup() 
{
	pinMode(LED, OUTPUT);	// Initialize Pin 12 as Digital Output
}

void loop() 
{
  digitalWrite(LED, analogRead(POT) > 512 ? HIGH : LOW); // if higher than ~2.5 V
  delay(50);                                             // sleep 50 milliseconds
}
