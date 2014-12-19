/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 7 - Working With Arrays - 7.2 - Demonstrating an Array of Counters
*
*
* 12/17/2014
****************************************************************************************************************************/

#include <stdio.h>

int
main (void)

{
	int ratingCounters[11], i, response;	// declaring variable ratingCounters as an array to store 11 integer values

	for ( i = 1; i <= 10; ++i ) // counter i beginning at 1 and ending at 10, this way element 0 is not used in ratingCounters leaving us with ratingCounters[1 - 10]
		ratingCounters[i] = 0; // sets elements in ratingCounters[1-10] to zero so we can begin adding votes.

	printf ("Enter your responses\n");

	for ( i = 1; i <= 20; ++i ) // reusing the counter i for another for loop is fine, this time runnning from 1 to 20 (for a total of 20 user inputs)
	{
		scanf ("%i", &response); // this will run each time the program loops (20 times)
	
		if ( response < 1 || response > 10 ) // if response is less than one or greater than 10 (our ratings should be from 1-10)
			printf ("Bad response: %i\n", response); 
		else
			++ratingCounters[response]; // this is why element0 is not used in this program, since the ratings are from 1-10 and we have 10 elements in our array, we can simply
	}					    // assign the rating given in response as an increment to the same element in the array

	printf  ("\n\nRating	Number of Responses\n");
	printf  ("------ ---------------------\n");

	for ( i = 1; i <= 10; ++i )	// using the same counter again to run from 1 - 10
		printf ("%4i%14i\n", i, ratingCounters[i]); // %4 to leave 4 spaces, %14 to leave 14 spaces to line up the output with our chart.
	
	

	return 0;

}

/* 
	ratingCounters is set to hold 11 integers even though we only want 10, this was done in this program in order to use elements [1] - [10] in conjunction with the actual rating 1-10
		element zero is not used as the first for loop starts at 1 and ends at 10.
*/
