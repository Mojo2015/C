/************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 6 - Ex. 3 - Division to 3 decimals
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
	float result;
	
	printf ("Enter two digits to be computed: ");
	scanf  ("%i%i", &int1, &int2);

	result = (float) int1 / int2;
	
	if (int2 == 0)
		printf ("Error: Division by zero\n");
	else
		printf ("%i divided by %i equals %.3f\n", int1, int2, result);

	return 0;

}
