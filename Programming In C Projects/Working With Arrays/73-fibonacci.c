/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 7 - Working With Arrays - 7.3 - Generating Fibonacci Numbers
*
*
* 12/17/2014
****************************************************************************************************************************/

#include <stdio.h>

int main (void)

{

	int Fibonacci[15], i;

	Fibonacci[0] = 0; 	// by definition
	Fibonacci[1] = 1; 	// by definition

	for ( i = 2; i < 15; ++i ) // starting at 2 because we already defined Fibonacci[0-1]
		Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

	for ( i = 0; i < 15; ++i )
		printf ("%i\n", Fibonacci[i]);

	return 0;

}



