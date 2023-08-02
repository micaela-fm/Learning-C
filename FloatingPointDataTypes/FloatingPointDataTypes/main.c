/*
 * File:   main.c
 * Author: Micaela FM
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

 /*
  * Demonstrates floating-point data types
  */
int main(int argc, char** argv)
{
	// collected data
	int hoursDriven = 5; 
	int milesDriven = 262; 

	// calculate and print miles per hour
	float mph = (float)milesDriven / hoursDriven; 
	printf("MPH: %.1f\n", mph); //%.1f prints float with only 1 decimal place

	return (EXIT_SUCCESS);
}
