/*
 * File:   main.ino
 * Author: akirik
 *
 * Created on January 19, 2018, 3:52 PM
 * 
 * PWM
 * 
 *  Board connection (Arduino Uno):
 *   PIN        	Module                         				  
 * ------------------------------------------                        
 *   12           LED
 *   
 *   A2           POTENCIOMETER
 */

#define POT A0
#define LED 9

void setup() 
{
  //pinMode(LED, OUTPUT); // Initialize Pin 12 as Digital Output
}

void loop() 
{
  int nPotValue = analogRead(POT);                      // read analog input
  int nMappedValue = map(nPotValue, 0, 1023, 0, 255);   // map it to the range of the analog output
  analogWrite(LED, nMappedValue);                       // write analog output
  delay(50);                                            // sleep 50 milliseconds
}
