/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 8 - Working With Functions - 8.11 - Changing Array Elements in Functions
*
* 12/20/2014
*
*****************************************************************************************************************/

#include <stdio.h>

void multiplyBy2 (float  array[], int n)
{

	int i;

	for ( i = 0; i < n; ++ i )
		array[i] *= 2;		// multiplies each element of the array by 2
}

int main (void)
{

	float floatVals[4] = { 1.2f, -3.7f, 6.2f, 8.55f };
	int i;
	void multiplyBy2 (float array[], int n);

	multiplyBy2 (floatVals, 4);

	for ( i = 0; i < 4; ++i )
		printf ("%.2f	", floatVals[i]);

	printf ("\n");

	return 0;

}

/* Note the most important piece of this program: the function multiplyBy2 is CHANGING the values inside of floatVals; this is contradictory to what happens with regular variables, but calculations
	performed on an ARRAY within a function CAN AND WILL UPDATE THE ARRAY!
