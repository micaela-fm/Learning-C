/*
 * File:   main.c
 * Author: Micaela FM
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define YEAR_BORN 1962
#define CURRENT_YEAR 2023
 /*
  * Objective: Declare integer variables and display output of integer operations
  */
int main(int argc, char** argv)
{
	// Problem 1
	int age = 19; 
	printf("Age: %d\n", age); 

	// Problem 2 
	int oldAge = CURRENT_YEAR - YEAR_BORN; 
	printf("Age of person born in %d: %d\n", YEAR_BORN, oldAge);

	// Problem 3 
	printf("Difference between oldAge and age: %d\n", oldAge - age); 

	return (EXIT_SUCCESS);
}
