/************************************************************************
* C Programming Practice Files
*
* Chapter 6 - 6.10 - Table of Prime Numbers using #include <stdbool.h>
*
* 12/9/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h>
#include <stdbool.h> // This header file includes special values for _Bool types including type bool, true, and false.

int main (void)

{

	int p, d;	// declaring variables p and d as integers
	bool isPrime;  // declaring variable isPrime to be a BOOLEAN VARIABLE. Note how we now used "bool" instead of _Bool since we included <stdbool.h>

	for ( p = 2; p <= 5000; ++p ) // Sets up a for loop to cycle through the integers 2 through 50
					//p represents the value you are currently testing to see if it is prime.
	{

		isPrime = true; // note how this was changed from 1 to true, this is another special value called from <stdbool.h>

		for ( d = 2; d < p; ++d ) // this will divide p by the integers from 2 through p-1 (one less than p)
			if ( p % d == 0 )	// test to see if the remainder of p divided by d is 0, if it is, you know that P cannot be a prime number because an integer other than 1
						// and itself can evenly divide into it.
				isPrime = false;	// to signal that p is no longer a candidate as a prime number, the value of the variable isPrime is set equal to 0
							// NOTE HOW IT WAS CHANGED TO FALSE IN THIS VERSION OF THE PROGRAM, ALSO A SPECIAL VALUE OF <stdbool.h>

			if ( isPrime != false )	// When the above loop finishes execution, the value of isPrime is tested. If it's value is NOT FALSE, no integer was found
						// that evenly divides p; therefore, p must be a prime number, false is also another special value from <stdbool.h>
				printf ("%i  ", p); // will display the value of the number if it is prime.

	}

	printf ("\n");
	
	return 0;

}

/* isPrime only takes on either the number 0 or 1, this is why we declared it to be a _Bool value. It's value is 1 as long as the number being tested is still
	a candidate as a prime number, but as soon as a single even divisor is found, it's value is set to 0 to indicate that p no longer satisfies the criteria
	Variables that are used in such a manner are referred to as FLAGS. A flag typically assumes two different values. The value of that flag is usually tested
	atleast once within the program to see if it's value is TRUE or FALSE, and some particular action is taken depending on the results of that test.
	**In C, the ntion of a flag being TRUE or FALSE is most naturally translated into the values 1 and 0. So the reason why we set the value of isPrime to 1 inside the loop
	was to effectively set the first number as a potential candidate: "P is prime, if during the course of the execution of the inner for loop an even divisor is found,
	the value of isPrime is set to FALSE to indicate that P is NO LONGER a prime." */
