/************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 5 - Exercise 7: Print Formatting
*
* 12/7/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h>

int main ()

{

	int dollars, cents, count;

	for ( count = 1; count <= 10; count++ )

	{

		printf ("Enter Dollars: ");
		scanf  ("%i", &dollars);
	
		printf ("Enter Cents: ");
		scanf  ("%i", &cents);

		printf ("$%i.%.2i\n\n", dollars, cents); // $%i is normal, the $ is just to be printed before the integer is called.
							 // the first . is also just a character print so you get: $int. when it prints
							 // %.2i tells the print function to expect a two digit decimal place, so if "1" is entered for cents: it will print .01
							

	}

	return 0;

}
