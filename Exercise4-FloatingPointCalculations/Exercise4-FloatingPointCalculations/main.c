/*
 * File:   main.c
 * Author: Micaela FM
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

 /*
  * Objective: Implement basic floating-point calculations
  */
int main(int argc, char** argv)
{
	// Problem 1 – Convert between temperatures
	float originalFahrenheit; 
	printf("Enter temperature (Fahrenheit): ");
	scanf("%f", &originalFahrenheit);

	float calculatedCelsius = (originalFahrenheit - 32) / 9 * 5; 
	printf("%f degrees Fahrenheit is %f degrees Celsius\n", originalFahrenheit, calculatedCelsius); 

	float calculatedFahrenheit = calculatedCelsius * 9 / 5 + 32;
	printf("% f degrees Celsius is % f degrees Fahrenheit\n", calculatedCelsius, calculatedFahrenheit); 

	return (EXIT_SUCCESS);
}
