//
// HWK6_5_euclidMethod.c
//
// Name: Bren Garcia
// Date: 2/26/2022
// Class: ECE2021
// Assignment: Serperate file for user function - HWK6_5_euclidMethod.c
//  
// Problem statement:  Write a C program that puts Euclid’s method into a user function.
//			Pass it the two user entered unsigned ints. Return the GCD. Print the value
//			to the screen in main function.
//
// Step 1: Divide the larger number by the smaller and retain the remainder.
// Step 2: Divide the smaller number by the reminder, again retaining the remainder.
// Step 3: Continue dividing the previous remainder by the current remainder until
//		the remainder is zero, at which point the last non - zero remainder is the GCD.

//////////////// ALGORITHM //////////////////////////
//		3333 user function algorithm 3333

// IF input 1 is the greater number
	// IF the remainder is not 0
		// divide the larger number by the smaller, retain the remainder
		// give the smaller number and the REMAINDER back into the BEGINNING of the function by calling it again
			// this creates a sort of psuedo-loop that repeats the dividing until the remainder is 0
	// ELSE the remainder is 0
		// return the smaller number
// ELSE input 2 is the greater number
	// IF the remainder is not 0
		// divide the larger number by the smaller, retain the remainder
		// give the smaller number and the REMAINDER back into the BEGINNING of the function by calling it again
			// this creates a sort of psuedo-loop that repeats the dividing until the remainder is 0
	// ELSE the remainder is 0
		// return the smaller number
// end of euclidMethod() function 

////////////////////////////////////////////////////

// 3333 user function 3333
int euclidMethod(int num1, int num2)
{
	if (num1 > num2) // input 1 is greater
	{	// if there is a remainder != 0
		if (num1 % num2) // divide the larger number by the smaller, retain the remainder
		{
			// give the smaller number and the REMAINDER back into the function
			// this creates a sort of psuedo-loop that repeats the dividing
			return euclidMethod(num2, (num1 % num2));
		}
		else // the remainder is 0
		{
			return num2; // return the smaller number
		} 
	} // end of dividing input 1
	else //input 2 is greater
	{	// if there is a remainder != 0
		if (num2 % num1) // divide the larger number by the smaller, retain the remainder
		{
			// give the smaller number and the REMAINDER back into the function
			return euclidMethod(num1, (num2 % num1));
		}
		else // else the remainder is 0
		{
			return num1; // return the smaller number
		}
	} // end of dividing input 2
} // end of euclidMethod