//
// HWK6_5.c
//
// Name: Bren Garcia
// Date: 2/26/2022
// Class: ECE2021
// Assignment: HWK 6-5
//  
// Problem statement:  Write a C program that puts Euclid’s method into a user function.
//			Pass it the two user entered unsigned ints. Return the GCD. Print the value
//			to the screen in main function.
//////////////// ALGORITHM //////////////////////////
//
// pre-processor directives
// userFunction headerfiles

// main function
	// variables to hold the input and the resulting GCD
	// message to user and get two integer inputs
	// call the function the calculates GCD using the euclid method
	// print the results to the console
// end main
//
//	3333 USER FUNCTION 333

//////////////////////////////////////////////////
#include <stdio.h>
#include "HWK6_5_userFunctionPrototypes.h"

int main(void)
{
	// variables to hold the input and the resulting GCD
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	
	// message to user and get two integer inputs
	puts("Enter two numbers to find their GCD: ");
	scanf_s("%d\n%d", &num1, &num2);

	// call the function the calculates GCD using the euclid method
	result = euclidMethod(num1, num2);

	// print the results to the console
	printf_s("The greatest common denomenator between %d and %d is %d\n", num1, num2, result);

	return 0;
}//end main

