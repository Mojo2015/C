/**********************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 6 - 6.2 - Calculating the Absolute Value of an Integer
*
* 12/9/2014
*
* Moj0
*
************************************************************************************/

// Program to calculate the absolute value of an integer

#include <stdio.h>

int main (void)

{

	int number;

	printf ("Type in your number: ");
	scanf  ("%i", &number);

	if ( number < 0 )
		{
			number = -number;
			printf ("You entered a negative number, converting...\n");
		}

	printf ("The absolute value is %i\n", number);

	return 0;

}
