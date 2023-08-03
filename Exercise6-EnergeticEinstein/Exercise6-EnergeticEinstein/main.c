/*
 * File:   main.c
 * Author: Micaela FM
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SPEED_OF_LIGHT 299792458

 /*
  * Objective: Implement a scientific computation 
  * and reflect on the implications of the result
  */
int main(int argc, char** argv)
{

// Problem 1 – Declare constant and variables
	float mass; 
	float energy; 
	
// Problem 2 – Get mass from user and calculate energy
	// Print for and scan mass
	printf("Enter mass (kg): ");
	scanf("%f", &mass);
	printf("\n");

	// Print energy
	energy = mass * powf((float)SPEED_OF_LIGHT, 2);
	printf("Energy = %f J", energy);

// Problem 3 – Think about what it all means

	printf("\n");
	return (EXIT_SUCCESS);
}
