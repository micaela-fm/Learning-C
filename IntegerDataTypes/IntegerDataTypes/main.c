/*
 * File:   main.c
 * Author: Micaela FM
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MINUTES_PER_HOUR 60
 /*
  * Demonstrates integer data type
  */
int main(int argc, char** argv)
{
	int totalMinutes = 113; 

	// calculate and print hours
	int hours = totalMinutes / MINUTES_PER_HOUR; 
	printf("Hours: %d\n", hours);

	// calculate and print minutes 
	int minutes = totalMinutes % MINUTES_PER_HOUR; 
	printf("Minutes: %d\n", minutes); 

	return (EXIT_SUCCESS);
}
