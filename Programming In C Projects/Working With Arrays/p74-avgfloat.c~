/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 7 - Working With Arrays - P7.4 - Average of Array of 10 floating-point values.
*
*
* 12/18/2014
****************************************************************************************************************************/

#include <stdio.h>

int main (void)
{
	
	int i;
	float average[10], uInput, sum = 0;

	printf("Enter 10 floats: \n");
	
	for ( i = 0; i < 10; i++ )
	{
		scanf ("%f", &uInput);	// simple loop that will run 10 times 
		average[i] = uInput;	// each time the program loops the users input will be stored in the next sequential element of the array.

	}
	
	for (i = 0; i < 10; i++)
		sum = sum + average[i]; // sum is originally set to 0 above, this loop will run through each element of our array average and add each one to sum.

	printf ("The average of your entries is equal to %f\n", sum / 10); // simple printout to reveal the average, since the program is set for a total of 10 inputs, we can just divide sum by 10 for the average.
	

	return 0;

}

/* Chapter 7 exercise 4: Write a program that calculates the average of an array of 10 floating-point values, this is set up so the user can actually input those 10 values to make it a bit more complex.
*/
