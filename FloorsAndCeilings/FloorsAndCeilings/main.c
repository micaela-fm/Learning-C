/*
 * File:   main.c
 * Author: Micaela FM
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 /*
  * Calculates floors and ceilings
  * 
  * Only workds for positive numbers
  * Only works to 2 decimal places
  */
int main(int argc, char** argv)
{
	float x; 

	// prompt for and get float from user
	printf("Enter floating-point number: "); 
	scanf_s("%f", &x);
	printf("\n"); 

	// calculate and print floor 
	printf("Floor: %d\n", (int)x); 

	// calculate and print ceiling
	printf("Ceiling: %d\n", (int)(x + 0.99)); 
	printf("\n"); 

	// calculate and print floor and ceiling using math.h
	printf("Floor using math.h: %d\n", (int)floorf(x)); 
	printf("Ceiling using math.h: %d\n", (int)ceilf(x)); 
	printf("\n"); 

	return (EXIT_SUCCESS);
}
