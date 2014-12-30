/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 8 - Working With Functions - 8.8 - Greatest Common Divisor - Calculating the Square Root of a Number
*
*
* 12/18/2014
*****************************************************************************************************************/

#include <stdio.h>

float absoluteValue (float x);
float squareRoot    (float x);

float absoluteValue (float x)	// simple function to check for and reverse negative numbers, absolute values should be compared to epsilon.
{

	if ( x < 0 )
		x = -x;
	return (x);
}

// Function to compute the square root of a number

float squareRoot (float x)
{

	const float epsilon = .00001;	// local variable, used to determine when to end the iteration process (when our answer is within .00001 of correct)
	float	    guess   =1.0;	// local variable
	
	if (x < 0)
	{
		printf ("Negative argument to squareRoot.\n");
		return -1.0;
	}
	
	while ( absoluteValue (guess * guess - x) >= epsilon ) // step 2 - Loop will not stop until guess^2 - x becomes LESS THAN our epsilon. guess^2 - x is first passed to the abs value function before comparison.

		guess = ( x / guess + guess ) / 2.0; // step 3 will be repeated until step 2 is fulfilled

	return guess;

}

int main (void)
{
	printf ("squareRoot (  2.0) = %f\n", squareRoot (  2.0));
	printf ("squareRoot (144.0) = %f\n", squareRoot (144.0));
	printf ("squareRoot (-17.5) = %f\n", squareRoot (-17.5));

	return 0;

}

/* Newton-Raphson method of computing square root:

1. Set the value of guess to 1
2. If |guess^2 - x| < epsilon, proceed to step 4
3. Set the value of guess to (x / guess + guess) / 2 and return to step 2 (this is your new guess)
4. The guess is the approximation of the square root

Also note how both absoluteValue and squareRoot functions both use the formal parameter 'x', this is not an issue and the C compiler will not get confused. Each function has its own formal parameters 
	so the parameter x inside absoluteValue is distinct from the parameter x inside of the squareRoot function (they are not the same, they are two different x's.

You can also reuse LOCAL VARIABLE names from function to function, they will be distinct from one another because a local variable can only be accessed from within the function where it is defined.

"The SCOPE of a local variable is the function in which it is defined" */


