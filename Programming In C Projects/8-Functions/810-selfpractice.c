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

int minimum (int values[], int numberOfElements)
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

	
	int minimum (int values[], int numberOfElements); 	//prototype of our function minimum, this must always be used if the function is defined AFTER (Best practice to always prototype)
	int i = 0, index = 0;
	int uInput[i];
	bool uContinue;

	uContinue = true;
	printf ("Enter your scores: \n");

	do
	{
	scanf ("%i", &uInput[i]);
	

		if (uInput[i] == 'X' || uInput[i] == 'x')
		{	
			
			uContinue = false;	
		}
		
		else
		{
			i++;
			printf("\n%i\n", i);
		}

	}
	
	
	while (uContinue = true);
		

	for (index = 0; index <= i; index++);
	{
	printf ("%i\n", uInput[index]);
	}
	printf ("array1 minimum: %i\n", minimum (uInput, i));
	

	return 0;

}

/* This doesn't work, look back another time and figure out why */ 
