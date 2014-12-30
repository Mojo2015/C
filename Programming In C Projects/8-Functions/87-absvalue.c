/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 8 - Working With Functions - 8.7 - Calculating Absolute Value
*
*
* 12/19/2014
*****************************************************************************************************************/

#include <stdio.h>

float absoluteValue (float x) // this is a function, it will return a float to it's caller upon completion, and take a float argument (x)
{

	if (x < 0 )
		x = -x; // simple absolute value, if the number is < 0, multiply it by itself (- * - = + ) to make a positive

	return x;

}

/* Just for an example, the above function does nothing more but check the user input which will be entered below in main to see if it is negative, if it is it flips it to a positive, otherwise it leaves it alone and returns the same value to its caller */

int main (void)
{

	float f1 = -15.5, f2 = 20.0, f3 = -5.0;
	int   i1 = -716;
	float result;

	result = absoluteValue (f1); // you can pass a variable as an argument as well, this will be passed to the absoluteValue function and the results will be returned to "result"
	printf ("result = %.2f\n", result);
	printf ("f1 = %.2f\n", f1);	// to show that the above function cannot and will not change the local variable f1

	result = absoluteValue (f2) + absoluteValue (f3);	// you can run the function twice and add them together
	printf ("result = %.2f\n", result);

	result = absoluteValue ( (float) i1 ); // you can pass an integer to the function that is set to accept floats by simply converting the int to a float in the argument.
	printf ("result = %.2f\n", result);

	result = absoluteValue (i1); // I'm assuming this will work because the function is set to use its arg as a float, the compiler will likely convert this.
	printf ("result = %.2f\n", result);

	printf ("%.2f\n", absoluteValue (-6.0) / 4 ); // dividing a float with an int always results in floating point arithmetic, this will pass -1.5 to absoluteValue.

	return 0;
}

/* Note that ANY values passed from main to absoluteValue function are placed in the local variable x within absoluteValue and the results are returned to the caller. The other function CANNOT and WILL NOT
	update any of the local variable values set within main, and vise verse, this can only be don with global variables. */



