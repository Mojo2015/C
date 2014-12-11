/************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 6 - Ex. 2 - Divisible numbers?
*
* 12/9/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h>

int main (void)

{

	int int1, int2;
	
	printf ("Enter two digits to be computed: ");
	scanf  ("%i%i", &int1, &int2);

	if (int2 == 0)
		printf ("Error, can not divide by zero.\n");

	else if (int1 % int2 == 0)
		printf ("%i is evenly divisible by %i\n", int1, int2);
	
		
	else 
	 	printf ("%i is not evenly divisible by %i\n", int1, int2);

	return 0;

} 
