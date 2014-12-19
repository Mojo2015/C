/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 7 - Working With Arrays - 7.4 - Prime Numbers Further Optimized Using Array
*
*
* 12/17/2014
****************************************************************************************************************************/

/* Two more rules for prime numbers are included in this modification:
	1. All nonprime integers (n) must be divisible by an integer that is less than or equal to the SQUARE ROOT of n
		-Only necessary to determine if a given integer is prime by testing it for even divisibility against all prime factors up to the square root of the integer.
	2. A prime number is not evenly divisible by any other prime number. (stemming from the fact that nonprime integers can be expressed as a multiple of prime factors). */


#include <stdio.h>
#include <stdbool.h> 


int main (void)

{

	int p, i, primes[50], primeIndex = 2, guesses; // the amount of elements set for primes is not necessary, there will not be 50 primes found when searching to 50 for primes.
	bool isPrime; 				// isPrime will be set to true unless found to be false within the loops.

	primes[0] = 2;	// setting primes[0] equal to the first prime - 2
	primes[1] = 3; 	// setting primes[1] equal to the second prime - 3, this way the loop has a few primes stored to test against

	for ( p = 5; p <= 50; p = p + 2 ) // p = p + 2 as per our prior optimization, no even numbers can be prime.
	{
		isPrime = true;						// isPrime is set to true in the beginning to assume it IS prime unless proven otherwise.

		for ( i = 1; isPrime && p / primes[i] >= primes[i]; ++i ) // "p / primes[i]" ensures that the value of p does not exceed the square root of primes[i] (see rule 1)
									  // assume p = 5, primes[i] = 2. 5/2 >= 2, 
									  // since isPrime is set to a boolean value, the for loop is checking to make sure it is true. 
		{
			guesses++;

			if ( p % primes[i] == 0 ) 			  // if the remainder of p % any prime = 0, it is not a prime. The above loop ensures it does not try any primes that are
									  // more than the square root of p.
				isPrime = false;				// Setting is prime to false to indicate the number is NOT prime.
		}

		if ( isPrime == true ) 
		{
			primes[primeIndex] = p;				// only prime numbers will be stored in the array, there will not be empty spaces in the array.
			++primeIndex;					// primeIndex is incremented each time a new prime is added to the array, only prime numbers will be stored.
		}
	}

	for ( i = 0; i < primeIndex; ++i )
		printf ("%i ", primes[i]);				//This will print out all of the primes, this program does not work like the previous ones and will calculate all of the primes
									//first, then print them.

	printf ("\n");
	printf ("Total Guesses: %i\n", guesses);

	return 0;

}
