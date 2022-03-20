//
// HWK6_2_changeFucntion.c
//
// Name: Bren Garcia
// Date: 2/16/2022
// Class: ECE2021
// Assignment: Serperate file for user function change - HWK6_2_changeFucntion.c
//  
// Problem statement: Write a C function to determine the number of quarters, 
//	dimes, nickels and pennies in the number passed.
//
//		1111 user function algorithm 1111

// pass the total value because we are going to reduce the total to 0 and thus dont need to return in
// pass the address of quarters, dimes, nickles and pennies because we need to check the values, but 
// can only "return" 1 value per function.

////////////////////ALGORITHM///////////////////////

// START change()
	// take the total and divide by 25. save the result into the address of quarters
	// keep the REMAINDER of total/25 to calculate remaining coins

	// take the total and divide by 10. save the result into the address of dimes
	// keep the REMAINDER of total/10 to calculate remaining coins

	// take the total and divide by 5. saven the result into the address of nickles
	// keep the REMAINDER of total/5 to calculate remaining coins

	// take the total and save it into the address of pennies
// END change()

////////////////////////////////////////////////////////////

// pass the total value because we are going to reduce the total to 0 and thus dont need to return in
// pass the address of quarters, dimes, nickles and pennies because we need to check the values, but 
// can only "return" 1 value per function.
void change(int total, int* quarters, int* dimes, int* nickels, int* pennies)
{ // START change()
	*quarters = (total / 25); // take the total and divide by 25. save the result into the address of quarters
	total = total % 25; // keep the REMAINDER of total/25 to calculate remaining coins

	*dimes = (total / 10); // take the total and divide by 10. save the result into the address of dimes
	total = total % 10; // keep the REMAINDER of total/10 to calculate remaining coins

	*nickels = (total / 5); // take the total and divide by 5. saven the result into the address of nickles
	total = total % 5;// keep the REMAINDER of total/5 to calculate remaining coins

	*pennies = total; // take the total and save it into the address of pennies
} // END change()
