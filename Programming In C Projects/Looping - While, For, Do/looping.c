/************************************************************************
* C Programming Practice Files
*
* FOR LOOPS EXPLAINED
*
* 12/7/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h>

int main()

{

	int n, triangularNumber;

	triangularNumber = 0;

	for ( n = 1; n <= 200; n = n + 1 )  		// instead of having to explicitly write out the numbers between 1 and 200, the for statement provides a mechanism for you.
		triangularNumber = triangularNumber + n; // This is repeated as long as the result of the relational test is TRUE (n <= 200)
		
		
	printf ("The 200th triangular number is %i\n", triangularNumber); // When the loop completes, it will move to the next program statement following it and continue as normal (this printf)

	return 0;

}

/* 
What's happening here is that every time the program loops, the new value of n is added and stored to triangular number.
EX: 
Loop1: n = 1, TriangularNumber = TriangularNumber(0) + n(1) = 1; Triangular number will store a value of 1
loop2 : n = 2, TriangularNumber = TriangularNumber(1) + n(2) = 3; Triangular number will store a value of 3
loop3 : n = 3, TriangularNumber = TriangularNumber(3) + n(3) = 6; Triangular number will store a value of 6
This will continue until n reaches 201 (in which case Triangular number will reveal the answer of our triangular number from when n=200; 20100!
**It is important to note that n reaches 201 but that number is NOT added into the value of triangularNumber because the loop is TERMINATED as soon as the looping
	condition is no longer satisfied.
Refer to the introduction of chapter 5: Programming in C(3rd edition) for an explanation of triangular numbers
*/
