/*
 * File:   main.c
 * Author: Micaela FM
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

 /*
  * Objective: Define a user-defined data type, 
  * declare variables of that data type, 
  * and display output of operations using those variables
  */
int main(int argc, char** argv)
{
	// Problem 1 – Define user-defined data type
	typedef struct Coordinates Coordinates; 
	struct Coordinates
	{
		float latitude; 
		float longitude;
	};

	// Problem 2 – Declare and initialize variables
	Coordinates currentLocation = { 38.17833, -7.06311 };
	Coordinates destinationLocation; 
	destinationLocation.latitude = 22.33996; 
	destinationLocation.longitude = 31.62489; 

	// Problem 3 – Calculate and output latitude and longitude differences
	float latitudeDifference = currentLocation.latitude - destinationLocation.latitude; 
	float longitudeDifference = currentLocation.longitude - destinationLocation.longitude;

	printf("Latitude difference: %f\n", latitudeDifference); 
	printf("Longitude difference: %f\n", longitudeDifference); 

	return (EXIT_SUCCESS);
}
