/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 7 - Working With Arrays - 7.6 - Character Arrays
*
*
* 12/17/2014
****************************************************************************************************************************/

#include <stdio.h>

int main (void)

{

	char word[] = { 'H', 'e', 'l', 'l', 'o', '!' }; // Note how there are no mention of the number of elements in the array.
	int i;

	for ( i = 0; i < 6; ++i )
		printf ("%c", word[i]);

	printf ("\n");

	return 0;

}

/* 
The C language allows you to define an array without specifying the number of elements. If this is done, the size of the array is determined automatically based on the number of initialization 
	elements. Because we used 6 initial elements, the array is implicitly designated to hold 6 elements. This approach is fine so long as every element in the array is initialized at the point
	the array is defined */
