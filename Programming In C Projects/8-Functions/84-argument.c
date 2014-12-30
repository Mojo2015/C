/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 8 - Working With Functions - 8.4 - Calculating the nth Triangular Number - Using Arguments in a function
*
*
* 12/18/2014
*****************************************************************************************************************/

#include <stdio.h>

void calculateTriangularNumber (int n) // int n means this function takes an INPUT ARGUMENT (variable n, which is an int)
{

	int i, triangularNumber = 0;

	for ( i = 1; i <= n; ++i )
		triangularNumber += i; // same triangular number calculation as earlier examples, adds every number from 1 to n together.

	printf ("Triangular number %i is %i\n", n, triangularNumber);	// prints out the triangular number

}

int main (void)
{

	calculateTriangularNumber (10); // argument is basically setting the integer n argument to the number enclosed in parenthesis.
	calculateTriangularNumber (50); // that simple.
	calculateTriangularNumber (20);

	return 0;
}




