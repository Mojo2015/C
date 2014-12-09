/************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 5 - Exercise 4; Factorial Numbers
*
* 12/7/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h>

int main ()

{

	int n, nIn;
	long long int nFact;
	
	printf ("This is a table of factorials, how high would you like it to go?\n");
	scanf  ("%i", &nIn);
	
	printf ("Number!		Factorial\n");
	printf ("-------		---------\n\n");

	n     = 1;
	nFact = 1;
	

	for (; n <= nIn; n++)
	{
	
		nFact = nFact * n;	
		printf ("   %i!		     %lli\n", n, nFact);

	}

	return 0;

}

/* A factorial number is n multiplied by each preceeding digit (i.e. 2! = 2 x 1, 3! = 3 x 2 x 1, etc)
	This program works in reverse of how you would do it with paper, instead it starts with 1 and
	works it's way up to the input number (nIn). For example, if the user were to ask for 5!, the 
	program begins by calculating 1! (since we have n set to 1). This is done by simply multiplying 1
	by itself (1 x 1 = 1) and storing the result in the variable nFact.

	Moving on, n will increase to 2 and the loop will calculate nfact = 1 * 2 and update nFact to 2 (effectively 2!)
	Then n will increase to 3 and the loop will calculate nfact = 2 * 3 = 6 and update nFact to 6 (3! = 6)
	Then 4.. nfact = 6 * 4 = 24 and store it
	Then 5.. nfact = 24 * 5 = 120 and store this value. 
	The loop will terminate here since on the next run n becomes 6 (we have n <= nIn in our for loop)
	Simple and effective way to calculate factorials!

*/
