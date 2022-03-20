//
// HWK6_3_changeFucntion.c
//
// Name: Bren Garcia
// Date: 2/26/2022
// Class: ECE2021
// Assignment: Serperate file for user function change - HWK6_3_changeFunction.c
//  
// Problem statement:  Write a C function to convert the passes number of seconds into 
//	an equivalent number of hours, minutes, and and directly alter the value of the
//	respective variables using their passed addresses.
//

//////////////// ALGORITHM //////////////////////////
//		2222 user function algorithm 2222


// get whole number of input/3600 to find hours. store into address of hours variable

// update total with the remaining time
    // because minutes is concerned with the whole number result
    // AND seconds is concerned with the remainder result
    // there is no need to further update total

// get whole number of input/3600 to find minutes, store into the address of minutes variable
// get REMAINDER  of input/3600 to find seconds, store into the address of the seconds variable

// end of time() function 

////////////////////////////////////////////////////


void time(int total, int* hours, int* minutes, int* seconds)
{
    *hours = total / 3600; // get whole number of input/3600 to find hours
    total = total % 3600; // update total with the remaining time
    // because minutes is concerned with the whole number result
    // AND seconds is concerned with the remainder result
    // there is no need to further update total
    *seconds = total % 60; // get REMAINDER  of input/3600 to find seconds
    *minutes = total / 60; // get whole number of input/3600 to find minutes
    
} // end of time() function 