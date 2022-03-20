//
// HWK6_2.c
//
// Name: Bren Garcia
// Date: 2/26/2022
// Class: ECE2021
// Assignment: HWK 6-2
//  
// Problem statement:  Write a C function named change () that accepts a single-precision
//	number and the addresses of the integer variables named quarters, dimes, nickles and pennies.
//	The function should determine the number of quarters, dimes, nickels and pennies in the number
//	passed to it and write these values directly into the respective variables declared in its 
//	calling function
//////////////// ALGORITHM //////////////////////////
//
//~~~~ main function algorithm ~~~~
// pre-processor directives
// user function headerfiles


// start main
	// varible to hold input for total cents
	// take input from uer and hold in total variable
	// integers to hold quarters, dimes, nickles and pennies
	// call change function and give it the ADDRESS of the variables so it can "return" more than one result
	// print the results to console
//
// end main
//  
//		1111 user function algorithm 1111
	// pass the total value because we are going to reduce the total to 0 and thus dont need to return in
	// pass the address of quarters, dimes, nickles and pennies because we need to check the values, but 
	// can only "return" 1 value per function.

////////////////////////////////////////////////////////////
#include <stdio.h>
#include "HWK6_2_userFunctionPrototypes.h"

int main() {
	int total = 0; //variable to hold user input

	// take input from uer and hold in total variable
	printf_s("Enter how much cents (non-negative integer) to calculate: ");
	scanf_s("%d", &total);
	puts(""); //formatting

	// integers to hold quarters, dimes, nickles and pennies
	int quarters = 0;
	int dimes = 0;
	int nickles = 0;
	int pennies = 0; 

	// call change function and give it the ADDRESS of the variables so it can "return" more than one result
	change(total, &quarters, &dimes, &nickles, &pennies);
	
	// print the results to console
	printf("The total %d cents divvied up to\n", total);
	printf("%d quarters, %d dimes, %d nickels, %d pennies\n", quarters, dimes, nickles, pennies);
	return 0;
} // end main