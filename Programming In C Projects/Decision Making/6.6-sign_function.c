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

	if ( number < 0 )		// if number is less than zero
		sign = -1;		// set variable sign to -1
	else if ( number == 0 )			//if number is not less than zero, but equal to zero
		sign = 0;			//set variable sign to 0
	else				//must be positive
		sign = 1;			//set variable sign to 1

	printf ("Sign = %i\n", sign);

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
