/************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 5 - Exercise 11; sum of digits!
*
* 12/7/2014
*
* Moj0
*
************************************************************************/

//I'm sure C has some method of separating each char from a string but it wasn't taught 
//in the book up to this point, so we will use the modulous method to extract the final digit 
//as done in the print backwards example of this chapter

#include <stdio.h>

int main ()

{

	int uInput, result, digit;
	
	result = 0;

	printf ("Enter any number >= 2 digits and I will add them together\n");
	scanf  ("%i", &uInput);

	while (uInput > 0)
	{

		digit = uInput % 10;	// this will extract the last digit	
		uInput = uInput / 10;		// this will remove the last digit
		result = result + digit;
		if (uInput < 1)
			printf ("Every digit of the number entered combined and added together is equal to %i\n", result);

	}

	
	return 0;

}

	
