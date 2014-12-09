/************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 5 - Exercise 3; Triangular Numbers
*
* 12/7/2014
*
* Moj0
*
************************************************************************/

//Simple formula for counting triangular numbers is = n ( n + 1 ) / 2 (where 10 is table size)

#include <stdio.h>

int main ()

{

	printf("Triangular tables every 5th digit from 5 to 50");

	int n, triangularNumber;
	n = 0;
	

	for (; n <= 50; n = n+5)
	{
	triangularNumber = n * (n + 1) / 2;
	printf("For a table of size %2i, the total amount of digits to form a triangular table is %4i\n", n, triangularNumber);
	}
}
