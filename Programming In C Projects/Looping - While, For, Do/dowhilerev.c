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

	do		// do while statement
	
	{
	
		right_digit = number % 10;
		printf ("%i", right_digit);
		number = number / 10;

	}
	while ( number != 0 );	// while conditions are checked AFTER the program statements are executed
	
	printf ("\n");
	
	return 0;

}

/* Same exact algorithm as whilerev.c except this time using a "do while" statement, this ensures that the program statement 
   will run at least once before the conditions are checked. If a user enters 0 in whilerev.c it will output nothing, this one will at least print 
   0. 

	**See Notes 5 - Program Looping for a thorough explanation */ 
