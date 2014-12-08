/************************************************************************
* C Programming Practice Files
*
* FOR LOOPS WITH PRINTOUT TABLE
*
* 12/7/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h>

int main (void)

{

	int n, triangularNumber; // declaring two values to be stored as integers
	printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf (" n	sum from 1 to n\n");
	printf ("---	---------------\n");

	triangularNumber = 0;

	for ( n = 1; n <= 100; ++n ) // Note that ++n is the same as n += 1 or n = n + 1, this is known as the INCREMENT OPERATOR in C, which increments its operator by 1 every pass.
	{
		triangularNumber += n;
		printf (" %3i	       %i\n", n, triangularNumber); // note %3i, this is used to assign the amount of places in your integer, so when the table prints the numbers will line up
	}

	return 0;

}

/* As noted in the printf function, %2i, %3i, %4i, etc. Serve the pupose of assigning blank spaces of x characters before the 1s place of a digit, this serves to organize printing neatly.
THIS IS KNOWN AS A "FIELD WIDTH SPECIFICATION"
EX: Without using it
	7	1
	8	2
	9	3
	10	 4

With %2i used:
	 7	1
	 8	2
	 9	3
	10	4
*/ 
