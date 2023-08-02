/*
 * File:   main.c
 * Author: Micaela FM
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

 /*
  * Demonstrates a user-defined data type
  */
int main(int argc, char** argv)
{
	typedef struct Student Student; 
	struct Student
	{
		int number; 
		float percentage; 
		char grade;
	};

	// initialize and print student info
	Student student0 = { 10101010, 89.5, 'B' };
	printf("Student 0\n"); 
	printf("---------\n"); 
	printf("Number: %d\n", student0.number); 
	printf("Percent: %.1f\n", student0.percentage); 
	printf("Grade: %c\n", student0.grade); 
	printf("\n"); 

	// initialize and print student info
	Student student1;
	student1.number = 222222222; 
	student1.percentage = 59.99; 
	student1.grade = 'F'; 
	printf("Student 1\n");
	printf("---------\n");
	printf("Number: %d\n", student1.number);
	printf("Percent: %.1f\n", student1.percentage);
	printf("Grade: %c\n", student1.grade);
	printf("\n");

	return (EXIT_SUCCESS);
}
