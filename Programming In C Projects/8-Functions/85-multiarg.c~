/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 8 - Working With Functions - 8.5 - Greatest Common Divisor - Using multiple input functions
*
*
* 12/18/2014
*****************************************************************************************************************/

#include <stdio.h>

void gcd (int u, int v)	// declaring function gcd which will take two integer arguments using formal parameters u and v.
{
	int temp;

	printf ("The gcd of %i and %i is ", u, v); // these are printed first because their values will change inside the loop, otherwise
						// the values of u and v could be assigned to two more variables and used in the loop.

	while (v != 0 ) // step 1, if v = 0 you are done and gcd = u
	{

		temp = u % v;	// step 2 and go back to step 1
		u = v; 	      
		v = temp;    
	}

	printf ("%i\n", u);
	
}

	/* 	The greatest common divisor is found using a simple algorithm:
		Problem: Find the greatest common divisor of two nonnegative integers u and v
		Step 1 : If v = 0, you are done and gcd is equal to u
		Step 2 : Calculate temp = u % v, u = v, v = temp and go back to step 1
	*/ 

int main (void)
{

	gcd (150, 35);
	gcd (1026, 405);
	gcd (83, 240);

	return 0;

}
