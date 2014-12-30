/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 8 - Working With Functions - 8.12 - Sorting an Array of Integers into Ascending Order
*
* 12/20/2014
*****************************************************************************************************************/

#include <stdio.h>

void sort (int a[], int n)
{

	int i, j, temp;			// temp is used as temporary storage while switches are being made

	for ( i = 0; i < n - 1; ++i )		// first for loop sequences through the array from the first element through the next-to-last element (a[n-2])
		for ( j = i + 1; j < n; ++j )		// starts with element AFTER the one currently selected by above loop and ranges through the LAST element of the array
			if (a[i] > a[j] ) 			// if a[i] is greater than a[j] the elements are switched		
			{
				temp = a[i];	// temp is set to a[i]
				a[i] = a[j];	// to switch a[i] to the lower value a[j] at this point now both elements will be the same
				a[j] = temp;		// replaces a[j] with temp (the original value in a[i] -- now the swap is complete.
			}
}

int main (void)
{

	int i;
	int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
			  44, -3, -9, 12, 17, 22, 6, 11 };

	void sort (int a[], int n);

	printf ("The array before the sort:\n");

	for ( i = 0; i < 16; ++i )
		printf ("%i ", array[i]);

	sort (array, 16);

	printf ("\n\nThe Array after the sort:\n");

	for ( i = 0; i < 16; ++i )
		printf ("%i ", array[i]);

	printf ("\n");

	return 0;
}


