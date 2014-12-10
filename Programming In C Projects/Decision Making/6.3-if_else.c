/***************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 6 - 6.3 / 6.4 Determining if a Number is Even or Odd
*
* 12/9/2014
*
* Moj0
*
****************************************************************************/

#include <stdio.h>

int main ()

{

	int number_to_test, remainder;

	printf ("Enter your number to be tested.: ");
	scanf  ("%i", &number_to_test);

	remainder = number_to_test % 2;

	if (remainder == 0 )
		printf ("The number is even.\n");

	else			// 6.3 simply has the user use a second if statement (if (remainder != 0)), it is easier to just use else as per 6.4.
		printf ("The number is odd.\n");

	return 0;

}
