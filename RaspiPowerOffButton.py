#!/usr/bin/env python

#					PWR off button for Raspberry Pi

#This is a python program for Raspberry Pi giving the computer a simple turn off button

#Author: The Swedish Hobbyist www.thehobbyist.se
#Version: 1
#Last modified: 2015-06-14 

import RPi.GPIO as GPIO
from time import sleep
from subprocess import call

bPin = 7	#Name of pin connected to button, when pressed pin should be tied to ground


GPIO.setmode(GPIO.BCM)

#Initializes the button pin as input and activate pullup resistor
GPIO.setup(bPin, GPIO.IN, pull_up_down=GPIO.PUD_UP)


turnOff = false

while turnOff == false:

	if GPIO.input(bPin) == GPIO.LOW:
		
		#Simple debounce delay
		sleep(0.2)
		
		time = 0

		while GPIO.input(bPin) == GPIO.LOW:
			sleep(0.2)
			time += 1
				
			#This gives the function a delay of 3 seconds to prevent unintended shutdowns 
			if time == 15:

				call(["halt", "-d"])
				turnOff = true
		
	#Delay to make the program consume less resources
	sleep(0.5)	


