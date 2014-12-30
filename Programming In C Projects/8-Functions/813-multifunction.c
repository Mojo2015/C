/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 8 - Working With Functions - 8.12 - Sorting an Array of Integers into Ascending Order
*
* 12/21/2014
*
*****************************************************************************************************************/

#include <stdio.h>

int main (void)
{

	void scalarMultiply (int matrix[3][5], int scalar);
	void displayMatrix (int matrix[3][5]);
	int sampleMatrix[3][5] = 	// defining a 3x5 matrix "sampleMatrix"
		{
			{ 7, 16, 55, 13, 12 },
			{12, 10, 52,  0,  7 },
			{-2,  1,  2,  4,  9 }
		};

	printf ("Original Matrix:\n");
	displayMatrix (sampleMatrix);

	scalarMultiply (sampleMatrix, 2);	// NOTE THAT WHEN PASSING AN ENTIRE ARRAY TO A FUNCTION, THE CALCULATIONS PERFORMED WILL REPLACE THE ORIGINAL ELEMENTS!!

	printf ("\nMultiplied by 2:\n");
	displayMatrix (sampleMatrix);

	scalarMultiply (sampleMatrix, -1);	// NOTE THAT THIS SECOND CALL TO THE SAME ARRAY WILL MODIFY THE ALREADY MODIFIED ELEMENTS!!!

	printf ("\nThen Multiplied by -1:\n");
	displayMatrix (sampleMatrix);

	return 0;
}

// Function to multiply a 3 x 5 array by a scalar

void scalarMultiply (int matrix[3][5], int scalar)	// scalar multiplication = multiplying the entire table by a single integer
{

	int row, column;	

	for ( row = 0; row < 3; ++row )				// outer loop will cycle from 0-2 representing each of the 3 rows, within each row the inner column loop will start and complete
		for ( column = 0; column < 5; ++column )		// for each row the outer loop selects, this loop will print each column element to completion, then the outer loop will run again
			matrix[row][column] *= scalar;			// will multiply each element in the matrix by the scalar integer. 

}

void displayMatrix (int matrix[3][5])	// this functions sole purpose is to print out the matrices 
{
	int row, column;

	for ( row = 0; row < 3; ++row) 	// outer for loop will cycle from 0-2 representing the 3 rows
	{
		for ( column = 0; column < 5; ++column )	// between each run of the outer loop, the inner loop will run from column 0-4, thus printing an entire row then going back to outer loop
			printf ("%5i", matrix[row][column]);	// %5i to leave 5 spaces between each print
			
		printf ("\n");					// This will run AFTER the for loop above completes (since there are no curly braces, only the print above will execute with the loop
	}
}
