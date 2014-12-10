/************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 6 - 6.5 Determining if a Year is a Leap Year
*
* 12/9/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h>

int main (void)

{

	int year, rem_4, rem_100, rem_400;		// declaring our integers

	printf ("Enter the year to be tested: ");
	scanf  ("%i", &year);				// assinging user input to variable year

	rem_4    = year %   4;				// calculating remainder of year divided by 4
	rem_100  = year % 100;				// calculating remainder of year divided by 100
	rem_400  = year % 400;				// calculating remainder of year divided by 400

	if ( (rem_4 == 0 && rem_100 != 0) || rem_400 == 0)	// this reads "(If remainder of years / 4 = 0 AND years / 100 DOES NOT equal zero) OR years / 100 = 0), execute the following
		printf ("It's a leap year.\n");

	else
		printf ("Nope, it's not a leap year.\n");	// if the if test fails, this else statement will execute.

	return 0;

}

/*
This program is being used to determine whether an input year is a leap year. Note that a leap year is divisible evenly by 4, but a year that is evenly divisible by 100 is NOT a 
	leap year unless it is also evenly divisible by 400!
We can break that down into an algorithm which reads 
	if the year divided by 4 = 0, AND it is not divisible by 100, it is a leap year
	OR if the year is evenly divisible by 400, it is a leap year
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) 
	**NOTE THAT && means "AND" and || means "OR" **

Final Note: You do not have to establish the calculations for rem_4, rem_100 and rem_400 before the if statement, you could have used:
	if (( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ) would have equally taken care of the same exact scenario.
	I find however that the above version is cleaner and much easier to debug (for me).


*/
