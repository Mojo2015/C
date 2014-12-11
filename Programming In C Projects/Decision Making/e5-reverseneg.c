/************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 6 - Ex. 4 - Accumulator Calculator
*
* 12/11/2014
*
* Moj0
*
*****************************************************************************************************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main (void)

{

	int number, right_digit;

	printf ("Enter Your Number: \n");
	scanf  ("%i", &number);

	
	if (number < 0)
	{
		number = -number;
		printf("-");
	}	
	do
	{

		right_digit = number % 10;
		number = number / 10;
		printf ("%i", right_digit);

	}

	while (number != 0);
		printf ("\n");

	return 0;

}
