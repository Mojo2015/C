/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 8 - Working With Functions - 8.6 - Greatest Common Divisor - Using return to output information back to main
*
*
* 12/18/2014
*****************************************************************************************************************/

#include <stdio.h>

int gcd (int u, int v)	// declaring function gcd which will take two integer arguments using formal parameters u and v.
{
	int temp;


	while (v != 0 ) // step 1, if v = 0 you are done and gcd = u
	{

		temp = u % v;	// step 2 and go back to step 1
		u = v; 	      
		v = temp;    
	}

	return u; // this is going to return the value stored in local variable u back to it's caller in main (result)
	
}

	/* 	The greatest common divisor is found using a simple algorithm:
		Problem: Find the greatest common divisor of two nonnegative integers u and v
		Step 1 : If v = 0, you are done and gcd is equal to u
		Step 2 : Calculate temp = u % v, u = v, v = temp and go back to step 1
	*/ 

int main (void)
{
	int result;
	
	result = gcd (150, 35);	// result is used as the caller which is going to recieve the output from the function gcd.
	printf ("The gcd of 150 and 35 is %i\n", result);

	result = gcd (1026, 405);
	printf ("The gcd of 1026 and 405 is %i\n", result);


	printf ("The gcd of 83 and 240 is %i\n", gcd (83, 240)); // the result does not need a variable, it can also be passed right to the printf function.

	return 0;

}
