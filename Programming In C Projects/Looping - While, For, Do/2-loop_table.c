/************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 5 - Exercise 2; loop + table
*
* 12/7/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h>

int main (void)

{
	int n = 0, n2, count;
	printf ("Enter an integer - How high do you want this table to go?\n");
	scanf  ("%i", &count);

	
	printf (" Table of Squares\n");
	printf (" n	       n^2\n");
	printf ("---	       ---\n\n");



	for ( ; n <= count; n++ ) 
	{
		n2 = n * n;
		printf("%i	        %i\n",n,n2);
	
	}

	printf ("\n");
	
	return 0;

}



		

	
