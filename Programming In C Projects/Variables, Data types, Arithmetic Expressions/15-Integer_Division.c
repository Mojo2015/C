/* Chapter 4 exercise 8 find the next multiple evenly divisible when:

i		j
365		7
12,258  23
996		4

*/

#include <stdio.h>

int main (void)
{
	int Next_Multiple, result; // Declaring Variables as int
	
	int i1 = 365, j1 = 7; // declaring i1 and j1 as per the book
	Next_Multiple = i1 + j1 - i1 % j1;  // using the function given in the book i + j - i % j rounds off an integer i to the next largest even multiple of another integer j
	printf ("For i = 365\n");
	printf ("The next multiple divisible by 7 is %i\n", Next_Multiple);
	result = Next_Multiple / j1; // evaluates the results to make sure it evenly divides. 
	printf ("%i divided by %i equals %i\n\n", Next_Multiple, j1, result);
	
	
	i1 = 12258, j1 = 23;
	Next_Multiple = i1 + j1 - i1 % j1; 
	printf ("For i = 12258\n");
	printf ("The next multiple divisible by 23 is %i\n", Next_Multiple);
	result = Next_Multiple / j1;
	printf("%i divided by %i equals %i\n\n", i1, j1, result);
	
	i1 = 996, j1 = 4;
	Next_Multiple = i1 + j1 - i1 % j1;
	printf ("For i = %i\n", i1);
	printf ("The next mutiple divisible by %i is %i\n", j1, Next_Multiple);
	result = Next_Multiple / j1; // again to prove that it is evenly divisible with a clear answer
	printf("%i divided by %i equals %i\n\n", i1, j1, result);
	printf("And the ultimate proof below\n");
	int result2 = result * j1;
	printf("%i X %i = %i, where the original value was %i and we added Next_Multiple %i which divided into %i!!\n", result, j1, result2, i1, Next_Multiple, result);
	
	
	
	
	
	return 0;
	
	
}