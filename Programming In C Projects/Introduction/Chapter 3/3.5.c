/*
Programming in C: Third Edition
  Second Reading (rehash)
  Program 3.5 Displaying Multiple Values
*/

#include <stdio.h>

int main(void)
{

	int value1, value2, sum; // Declaring 3 integers to be used in program

	value1 = 50;
	value2 = 25;
	sum = value1 + value2;
	printf ("The sum of %i and %i is %i\n", value1, value2, sum);

	return 0;

}

// Note that %d can also be used to call integers, %i is used in this book.
