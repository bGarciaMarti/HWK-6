//
// HWK6_4.c
//
// Name: Bren Garcia
// Date: 2/26/2022
// Class: ECE2021
// Assignment: HWK 6-4
//  
// Problem statement:  Write a C program using the getchar(), toupper().and putchar() function
//	that echo back all letters entered in their uppercase form.the program should terminate when 
//	either an x or X is entered.
//
// Hint: Convert all letters to uppercase and test only for an X.
// getchar() == It is used when single character input is required from the user.
// The function reads the input as an unsigned char ; then it casts and returns as an int or an EOF.
// putchar() == is used to write a character, of unsigned char type, to stdout
// toupper() == The toupper() function converts the lowercase letter c to the corresponding uppercase letter.
//////////////// ALGORITHM //////////////////////////
//
// pre-processor directives

//~~~~ main function algorithm ~~~~
	//label what the program does and how to end it
	// delcare a char variable to hold the input from user, initialize with 0
// do...while to accept and display input until x is entered
	// Displays the converted letters
	//prompt the user for a letter
	//use getchar to get a single input from the user. 
	 // Give that input to toupper to convert into capital letters
// end of do...while to accept and display input until x is entered
// end main

//////////////////////////////////////////////////
#include<stdio.h>

int main(void)
{	
	puts("Enter a character. It will echo back as itself in Uppercase. The program ends when an x is entered."); //label what the program does and how to end it
	char input = 0; // delcare a char variable to hold the input from user, initialize with 0

	// accept input until x is entered
	do
	{
		// Displays the converted letters
		putchar(input);
		//prompt the user for a letter
		input = getchar(); //use getchar to get a single input from the user. 
		input = toupper(input); // Give that input to toupper to convert into capital letters
	} while (input != 'X'); // end of input/displaying do...while
return 0;
} // end main