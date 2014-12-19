/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 7 - Working With Arrays - 7.8 - Generating Fibonacci Numbers Using Variable-Length Arrays
*
*
* 12/18/2014
****************************************************************************************************************************/

#include <stdio.h>

int main (void)

{

	int i, numFibs;	// numFibs is used to store the requested number of Fibonacci numbers that the user wants to generate.

	printf ("How many Fibonacci numbers do you want (between 1 and 75)? ");
	scanf  ("%i", &numFibs);	// request number of fibonacci numbers to be calculated

	if (numFibs < 1 || numFibs > 75) 	// checking to make sure user input of numFibs is within our specified bounds.
	{
		printf ("Bad number, Sorry!\n");
		return 1;			// return 1 causes the program to terminate immediately
	}

	unsigned long long int	Fibonacci[numFibs];	// array size is variable and not a constant because it is using a variable as its size declaration. unsigned long long int will provide the longest possible number that you can store in a variable on a computer. 

	Fibonacci[0] = 0;	// By definition
	Fibonacci[1] = 1;	// By definition

	for ( i = 2; i < numFibs; ++i )	// i starting at 2 so we can start with element 2 (0 and 1 already entered above)
		Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1]; // fibonacci numbers are equal to the last two numbers added together

	for ( i = 0; i < numFibs; ++i )
		printf ("%llu		", Fibonacci[i]); // %llu prints unsigned long long int.

	printf ("\n");

	return 0;

}
