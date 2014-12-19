/***************************************************************************************************************************
* Programming in C (3rd edition)
*
*
* Chapter 7 - Working With Arrays - E7-2 : Update P7-1 and set all elements in the array to zero.
*
*
* 12/17/2014
****************************************************************************************************************************/

#include <stdio.h>

int
main (void)

{

	int values[10];	// declaring the variable values which will be an array containing 10 elements [0-9] using integers.
	int index;

	for ( index = 0; index < 10; ++ index)
		values[index] = 0;	// this will loop through every element in values and set them to zero.
	
	values[0] = 197;
	values[2] = -100; // this will print as -101 because of decrementing below
	values[5] = 350;
	values[3] = values[0] + values[5];
	values[9] = values[5] / 10;
	--values[2]; // decrementing values[2] by 1

	for ( index = 0; index < 10; ++ index ) // index will run from element 0 - 9
		printf ("values[%i] = %i\n", index, values[index]); // each time the variable index increments by 1, it will print out the related element in the array values.

	return 0;

}
	 

/* OUTPUT : **BEFORE ELEMENTS IN ARRAY SET TO ZERO**

values[0] = 197
values[1] = 32767	// not defined
values[2] = -101
values[3] = 547
values[4] = 4195760	// not defined
values[5] = 350
values[6] = 4195392	// not defined
values[7] = 0		// not defined
values[8] = 1291527696	// not defined, Elements that contain no information print out oddities. 
values[9] = 35

*/

/* OURPUT AFTER UPDATES:
values[0] = 197
values[1] = 0
values[2] = -101
values[3] = 547
values[4] = 0
values[5] = 350
values[6] = 0
values[7] = 0
values[8] = 0
values[9] = 35
*/ 




