/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 8 - Working With Functions - 8.10 - Finding The Minimum Value In An Array - Abitrary Amount of Inputs
*
*
* 12/20/2014
*****************************************************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int minimum (int values[], int numberOfElements) // defined to take two arguments: First, the array whose minimum you want to find and second, the number of elements in the array
{

	int minValue, i;

	minValue = values[0];

	for ( i = 1; i < numberOfElements; ++i )
		if ( values[i] < minValue )
		minValue = values[i];

	return minValue;
}

int main (void)
{
	
	int array1[5] = { 157, -28, -37, 26, 10 };
	int array2[7] = {  12,  45,   1, 10,  5, 3, 22};
	int minimum (int values[], int numberOfElements); // prototyping minimum function, it is good practice to always prototype

	printf ("array1 minimum: %i\n", minimum (array1, 5));
	printf ("array2 minimum: %i\n", minimum (array2, 7));

	return 0;

}

	
/* values[] has empty brackets but the brackets must be there to inform the C compiler that it is infact an array and not simply a variable integer.
