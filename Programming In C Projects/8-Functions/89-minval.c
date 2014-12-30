/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 8 - Working With Functions - 8.9 - Finding The Minimum Value In An Array (using multiple functions)
*
*
* 12/20/2014
*****************************************************************************************************************/

#include <stdio.h>



int main (void)
{

	int scores[10], i, minScore;
	int minimum (int values[10]); 	// This is a prototype declaration for the function minimum, minimum returns an int and takes an array of 10 elements as an input

	printf ("Enter 10 scores\n");

	for ( i = 0; i < 10; ++i )
		scanf ("%i", &scores[i]);	// simple loop incrementing through the array scores one at a time attaching users score input

	minScore = minimum (scores);		// passes the entire array scores over to the function minimum, minimum will run and return an integer value to minScore.
	printf ("\nMinimum score is %i\n", minScore);	// when minimum returns its output, it will be printed via the variable minScore set above.

	return 0;

}

int minimum (int values[10])	// the formal parameter "values" will be the array name for the scores passed here from "scores" in main.
{

	int minValue, i;

	minValue = values[0];	// this will be used to store the lowest value in the array and is initially set to values[0], only to be replaced if any of the following numbers are smaller.

	for ( i = 1; i < 10; ++i )	// standard for loop using i as an index from 10 - 9 (to run through elements 0-9 in the array)
		if ( values[i] < minValue )	// If the current value in values[i] is LESS THAN what is already stored in minValue (from above),
			minValue = values[i];		// replace the value in minValue with the current smaller value.

	return minValue;		// returns the integer stored in minvalue back to "minScore" in main (the caller)

}

	
/* The primary thing to gain through this is that you can pass entire arrays through to functions, simply make sure to declare in the input arguments of your function that it will be taking an array (int values) and be sure to declare what type of output it will be passing back to its caller (int). */ 
