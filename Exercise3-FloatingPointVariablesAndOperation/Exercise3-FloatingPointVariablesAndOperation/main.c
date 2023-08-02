/*
 * File:   main.c
 * Author: Micaela FM
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MAX_SCORE 100000

 /*
  * Objective: Declare floating-point variables and display output of floating-point operations
  */
int main(int argc, char** argv)
{
	// Problem 1 – Output a score
	int score = 56103; // Store a score between 0 and 100000 in this variable.
	printf("The score is %d\n", score);

	// Problem 2 – Output a percentage
	float percent = (float)score / MAX_SCORE * 100; 
	printf("The percentage is %.2f\n", percent);

	// Problem 3 – Output a rounded percentage
	printf("The rounded percentage is %.0f\n", percent);

	return (EXIT_SUCCESS);
}
