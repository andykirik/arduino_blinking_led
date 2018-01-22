/*
 * File:   main.ino
 * Author: akirik
 *
 * Created on January 19, 2018, 3:52 PM
 * 
 * Interrupt
 * 
 *  Board connection (Arduino Uno):
 *   PIN          Module                                  
 * ------------------------------------------                        
 *   12           LED
 *
 *   4            BUTTON
 *
 */

#define BUTTON 2
#define LED 12

void setup() 
{
  pinMode(LED, OUTPUT);                 // Initialize Pin 12 as Digital Output
  pinMode(BUTTON, INPUT_PULLUP);        // Initialize Pin 4 as Input
  attachInterrupt(0, isr, HIGH );  // Attach an interrupt to the ISR vector
}

void loop() 
{
  // do nothing            
}

void isr() 
{
  digitalWrite(LED, digitalRead(BUTTON) ? HIGH : LOW);    // if button pressed
}

