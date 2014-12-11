/************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 6 - 6.6 Implementing The Sign Function
*
* 12/9/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h>

int main (void)

{

	int number, sign;		// Declaring our variables as integers

	printf ("Please type in a number: ");
	scanf  ("%i", &number);		// Assigning user input to the variable number

	printf ("Sign = %i\n", (number < 0 ) ? -1 : (number == 0) ? 0 : 1); // Updated completely using conditional operator, shrunk the program drastically.

	
	return 0;

}

/* 
Very simple example of using else if to make a 3 valued logic decision
	-Is the number < 0? If so set variable to -1
	-Is the number = 0? If so set variable to  0
	-Is the number > 0? If so set variable to  1

This is the most commonly used formatting, it is far more readable than making a new indented if statement for each scenario,
	especially when the amount of logic decisions grows large (which is very common).

*/ 
