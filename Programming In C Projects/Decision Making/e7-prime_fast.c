/************************************************************************
* C Programming Practice Files
*
* Chapter 6 - Ex. 7 - Adding Efficiency to Prime Number Check
*
* 12/9/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <locale.h> // This should add number types to give us commas in our number output (testing on guesses)

int main (void)

{

	setlocale(LC_NUMERIC, ""); // setting our locale for commas in printout.
	
	int p, d, primes_found;	// declaring variables p and d as integers
	long long int guesses;
	bool isPrime;  // declaring variable isPrime to be a BOOLEAN VARIABLE

	guesses = 0;
	primes_found = 0;
	
	for ( p = 1; p <= 50000; p = p + 2, ++guesses ) // Sets up a for loop to cycle through the integers 2 through 50
					//p represents the value you are currently testing to see if it is prime.
	{

		isPrime = true;


		

		for ( d = 2; d < p && isPrime == true; ++d , ++guesses ) // this will divide p by the integers from 2 through p-1 (one less than p)
			if ( p % d == 0 )	// test to see if the remainder of p divided by d is 0, if it is, you know that P cannot be a prime number because an integer other than 1
						// and itself can evenly divide into it.
				isPrime = false;	// to signal that p is no longer a candidate as a prime number, the value of the variable isPrime is set equal to 0

			
		

			if ( isPrime != false )	// When the above loop finishes execution, the value of isPrime is tested. If it's value is not equal to zero, no integer was found
						// that evenly divides p; therefore, p must be a prime number 
				{
				printf ("%'i  ", p); // will display the value of the number if it is prime.
				primes_found++ ;
				}

	}

	printf ("\n");
	printf ("Total Guesses: %'lli\n", guesses);
	printf ("Total Primes Found: %'i\n", primes_found);
	
	return 0;

}

/* isPrime only takes on either the number 0 or 1, this is why we declared it to be a _Bool value. It's value is 1 as long as the number being tested is still
	a candidate as a prime number, but as soon as a single even divisor is found, it's value is set to 0 to indicate that p no longer satisfies the criteria
	Variables that are used in such a manner are referred to as FLAGS. A flag typically assumes two different values. The value of that flag is usually tested
	atleast once within the program to see if it's value is TRUE or FALSE, and some particular action is taken depending on the results of that test.
	**In C, the ntion of a flag being TRUE or FALSE is most naturally translated into the values 1 and 0. So the reason why we set the value of isPrime to 1 inside the loop
	was to effectively set the first number as a potential candidate: "P is prime, if during the course of the execution of the inner for loop an even divisor is found,
	the value of isPrime is set to FALSE to indicate that P is NO LONGER a prime." */

//Total Guesses: 1,249,975,000 - ORIGINAL UNOPTIMIZED VERSION
//Total Primes Found: 5,133 
//THIS IS FOR p <= 50000

/* After changing p to 1 and changing ++p to p = p + 2 (to skip even integers, since evens are divisible by 2 and cannot be prime numbers:
Total Guesses: 624,975,001
Total Primes Found: 5,133
*/


/* In the original project, the inner for loop was set to :
		for ( d = 2; d < p; ++d), I added && isPrime == true as a condition because without it the loop will always test from d to p-1 before continuing, 
		by adding this condition && isPrime, the moment isPrime is changed to false, the loop will stop executing, this cut time DRASTICALLY */
