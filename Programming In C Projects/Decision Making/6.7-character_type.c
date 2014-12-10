/************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 6 - 6.7 - Categorizing a Single Character
*
* 12/9/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h>

int main (void)

{

	char c;
	
	printf ("Enter a single character:\n");
	scanf  ("%c", &c);	//%c is the caller for a CHAR (one single character)

	if ( (c >= 'a'  && c <= 'z') || (c >= 'A'  && c <= 'Z') ) // testing whether the char is between a and z or A and Z
		printf ("It's an alphabetic character.\n");

	else if ( c >= '0' && c <= '9' )	// testing whether the character is between CHARACTERS 0-9
		printf ("It's a digit.\n");
	else					// if the character is neither a or A - z or Z, nor 0-9, it must be a special digit.
		printf ("It's a special character\n");
	
	return 0;

}

/* notes:
	-These tests will work on all computers that store characters in ASCII FORMAT**
First the program will test whether the char input by the user is an alphabetic character a-z or A-Z
	if the first test returns FALSE, the else if statement will execute to test if the char is between 0-9
	If the second teset returns FALSE, we can assume the character is a special char ( & ! (@ @ [] etc.. )

NOTE*** For the else if clause, we are testing to see if it is between CHARACTERS 0 - 9, NOT INTEGERS, this is because a character was read from the terminal
	and the characters '0' to '9' are not the same as the numbers 0-9. In a computer using ASCII format, the CHARACTER '0' is actually represented internally
	as the number 48, the character '1' as the number 49 and so on. 
