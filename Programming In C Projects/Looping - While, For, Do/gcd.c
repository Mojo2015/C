/************************************************************************
* C Programming Practice Files
*
* Greatest Common Divisor Using a WHILE Loop
*
* 12/7/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h>

int main (void)

{

	int u, v, temp;

	printf ("Please type two nonnegative integers\n");
	scanf  ("%i%i", &u, &v); // typical scanf usage asking for two integers and pointing to variables u and v (don't forget the & signs)

	while ( v != 0 ) // according to the algorithm if v = 0, the gcd is equal to v so the program will stop running when that occurs

	{
		//The following functions come from the known algorithm to calculate gcd, see comments in bottom
		temp = u % v;
		u = v;
		v = temp;

	}

	printf ("The greatest common divisor is %i\n", u);

	return 0;

}

/*
	The greatest common divisor is found using a simple algorithm:
		Problem: Find the greatest common divisor of two nonnegative integers u and v
		Step 1 : If v = 0, you are done and gcd is equal to u
		Step 2 : Calculate temp = u % v, u = v, v = temp and go back to step 1

*/


