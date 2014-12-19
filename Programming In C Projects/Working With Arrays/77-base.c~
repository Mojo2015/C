/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 7 - Working With Arrays - 7.7 - Converting a Positive Integer to Another Base
*
*
* 12/18/2014
****************************************************************************************************************************/

#include <stdio.h>

int main (void)

{

	const char baseDigits[16] = { 		// Declaring our array variable using const qualifier (to indicate that the element values will NOT change) containing 16 elements.
		'0', '1', '2', '3', '4', '5', '6', '7', 	// this type of spacing is perfectly fine for C and will compile + looks neat
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };	// A-F for numbers being converted above base 10 (representing 10-15)
	int	 convertedNumber[64];				// This will hold a maximum of 64 digits (long int) which will hold the conversion.
	long int numberToConvert;
	int	 nextDigit, base, index = 0;			// base will carry the user input conversion base, index will index into the convertedNumber array

	//get the number and the base
	
	printf ("Number to be converted: ");
	scanf  ("%ld", &numberToConvert);			// %ld is used to call a long integer
	printf ("Base: ");
	scanf ("%i", &base);

	// convert to the indicated base

	do 							// do is used here simply to ensure the program at minimum prints one number (incase the user puts in 0)
	{

		convertedNumber[index] = numberToConvert % base;	// First step in the algorithm; the remainder of the number to be converted % base becomes the next digit in the final output.
		++index;						// to move to the next element in the array convertedNumber to prepare it for the next digit of the conversion answer.
		numberToConvert = numberToConvert / base;		// Second step in the algorithm; divide the number with the base and discard any fractional remainder (3rd step is to repeat until 0)
	}
	
	while (numberToConvert != 0 );					// rule 3: repeat until the number to convert reaches zero, this will stop when numberToConvert hits zero, or never run if already 0.

		//display the results in reverse order (there are no statements running in the while statement, the following will execute when the do-while loop above is complete

		printf ("Converted Number = "); 

		for (--index; index >= 0; --index )	// as explained below, index will have 1 extra element due to being incremented in the do statement before the while terminates, --index decrements
		{
			nextDigit = convertedNumber[index];	//--index will start from the second to last element of the set, each time it loops it will decrement one further element back from the end, thus 
								// printing the results in reverse (as needed to display the response in the proper order since the algorithm gets the last number first, first last
			printf ("%c", baseDigits[nextDigit]);	// each time the loop runs, next digit is updated to the next value to be printed, %c because we stored CHARACTERS in baseDigits
		}

		printf ("\n");
		return 0;
}

/* const qualifier will not allow you to change the values of a variable element later in the program, it may or may not cause a compiler error upon building. Also, the compiler will place const variables
	into read-only memory.

	The value of the variable "index" is the number of digits in the converted number. Because the variable gets incremented one time too many inside the do loop, it's value is initially decremented by 1 inside the for loop (index will be incremented by 1 BEFORE the while loop runs, so even when numberToConvert = 0, index will still be incremented to one extra element beyond the answer values.

	This may seem confusing but the way it works is quite simple. Using the 3 step algorithm explained in the program (number % base, number / base, repeat until 0), we store each digit in the solution (each answer to step #1 in the algorithm) in reverse order in the variable convertedNumber. We use the variable index to ensure each number is stored in a new element of convertedNumber. Once the number being converted is divided and leaves zero, the program terminates and convertedNumber stores our answer in reverse (+1 empty element because of the do-while)
	Now we simply need to print out our results by comparing each entry in convertedNumber to it's matching element in our baseDigits array. 
		ex: if convertedNumber[1] = 15, that value is temporarily moved to nextDigit, so nextDigit = 15, we use that to print baseDigits[nextDigit] which in this case is baseDigits[15], the 
		15th element of our array baseDigits is F, thus F will print. We decrement through index for each print to print the last element first and continue on in reverse order.
			convertedNumber[2] = 6, baseDigits[6] = 6 so 6 will print
			convertedNumber[3] = 10, baseDigits[10] = A so A will print, etc.

*/
	
