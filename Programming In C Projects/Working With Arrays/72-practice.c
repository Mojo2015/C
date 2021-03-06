/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 7 - Working With Arrays - 7.2 PRACTICE - Demonstrating an Array of Counters
*
*
* 12/17/2014
****************************************************************************************************************************/

#include <stdio.h>

int main (void)

{

	int ratingCounter[11], i, uInput;

		for (i = 1; i <= 10; i++)
			ratingCounter[i] = 0;

		printf ("Enter your ratings: \n");

		for (i = 1; i <= 20; i++) // 20 ratings
		{
		
			scanf ("%i", &uInput);

			if (uInput < 1 || uInput > 10)
				printf("Error, Bad Input: %i\n", uInput);

			else
				++ratingCounter[uInput];
		}

		
		printf ("\n\n Rating	Number of Responses\n");
		printf ("----- -----------------\n");

			for ( i = 1; i <=10; i++ )
				printf ("%4i %14i\n", i, ratingCounter[i]);

		return 0;

}




