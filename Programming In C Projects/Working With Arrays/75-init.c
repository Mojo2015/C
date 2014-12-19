/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 7 - Working With Arrays - 7.5 - Initializing Arrays Example
*
*
* 12/17/2014
****************************************************************************************************************************/

#include <stdio.h>

int main (void)

{

	int array_values[10] = { 0, 1, 4, 9, 16 };	// The first 5 elements are initialized to the square of their element number
	int i;

	for ( i = 5; i < 10; ++i )			// for elements [5-10], this loop will run.
		array_values[i] = i * i;			// each element will be the square of its own element number (array_value[5] = 5 * 5;)

	for ( i = 0; i < 10; ++i )
		printf ("array_values[%i] = %i\n", i, array_values[i]);	// This loop simply runs through all 10 elements to display their values at the terminal

	return 0;

}

/*
Basic program covering the initialization of an array, the first for loop could have easily handled the entire array from element 0 - 9 without initializing the first 5 manually, this was just done
	to show that you can declare them manually, or you can use a for loop with an incrementing function to quickly and easily initialize the elements of an array.
*/


