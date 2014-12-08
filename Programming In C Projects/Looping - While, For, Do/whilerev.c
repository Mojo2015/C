/************************************************************************
* C Programming Practice Files
*
* WHILE LOOP: Enter a number and print it out backwards!
*
* 12/7/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h>

int main (void)

{

	int number, right_digit; 

	printf ("Enter your number. \n");
	scanf  ("%i", &number);

	while ( number != 0 )
	
	{
	
		right_digit = number % 10;
		printf ("%i", right_digit);
		number = number / 10;

	}

	printf ("\n");
	
	return 0;

}
