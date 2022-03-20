//
// HWK6_3.c
//
// Name: Bren Garcia
// Date: 2/26/2022
// Class: ECE2021
// Assignment: HWK 6-3
//  
// Problem statement:  Write a C function named time() that accepts an integer number of
//	seconds and the addresses of three variables named hours, min, and sec. The function is
//	to convert the passes number of seconds into an equivalent number of hours, minutes, and
//	and directly alter the value of the respective variables using their passed addresses.

//////////////// ALGORITHM //////////////////////////
//
//~~~~ main function algorithm ~~~~
// pre-processor directives
// user function headerfiles


// start main
    // declare variables to hold the input as a total, hours, minutes, and seconds
    // take input and store into total
    // call time function, and give it the variable total, and the ADDRESSES of hours, minutes, and seconds
    // display the results to the console
// end main

#include <stdio.h>
#include "HWK6_3_userFunctionPrototypes.h"

int main() 
{
    // declare variables to hold the input as a total, hours, minutes, and seconds
    int total = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    // take input and store into total
    printf("Enter how many seconds (non-negative integer) to calculate: ");
    scanf_s("%d", &total);

    // call time function, and give it the variable total, and the ADDRESSES of hours, minutes, and seconds
    time(total, &hours, &minutes, &seconds);

    // display the results to the console
    printf("The total %d seconds divvied up to\n", total);
    printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
    return 0;
} // end main