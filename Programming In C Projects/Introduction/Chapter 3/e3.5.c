/*
Programming in C: Third Edition
  Second Reading (rehash)
  Exercise 3.5 - Debugging
*/

#include <stdio.h>

int main(Void)
{ // they used a ( instead in the book

	int sum; // int is capital (INT) in the book, this will not work as the call is int
	/* COMPUTE RESULT */ // The comment is not closed in the book and opened improperly
	sum = 25 + 37 - 19;
	/* Display Results */ // The comment is closed wrong, you can't open and close with two different comment calls
	
	printf ("The answer is %i\n", sum); // The book did not use the comma after the comment
	return 0;

}
