/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 7 - Working With Arrays - P7.5 - What will the output be?
*
*
* 12/18/2014
****************************************************************************************************************************/

#include <stdio.h>

int main (void)
{

	int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int i, j;

	for ( j = 0; j < 10; ++j )
		for (i = 0; i < j; ++i )
			numbers[j] += numbers[i];

	for ( j = 0; j < 10; ++j )
		printf ("%i ", numbers[j]);

	printf ("\n");

	return 0;

}

/* first loop: j = 0, i = 0, numbers[0] += numbers[0] = element zero will remain 1 (since 1 was defined already)
   second    : j = 1, i = 0, numbers[1] += numbers[0] = 1
   third     : j = 2, i = 0, numbers[2] += numbers[0] += numbers[1] = 1?
   fourth    : j = 3, i = 0, numbers[3] += numbers[0] += numbers[1] += numbers[2] = 3
   fifth     : j = 4, i = 0, numbers[4} += numbers[1] += numbers[2] += numbers[3] = 6

	I HAVE NO CLUE

OUTPUT: 1 1 2 4 8 16 32 64 128 256 


*/ 
