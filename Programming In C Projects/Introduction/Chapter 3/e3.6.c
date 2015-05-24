/*
Programming in C: Third Edition
  Second Reading (rehash)
  Exercise 3.6 - What's the answer?
*/ 

#include <stdio.h>

int main(Void)
{

	int answer, result; // Declaring two integers

	answer = 100;
	result = answer - 10;
	printf ("The result is %i\n", result + 5);

	return 0;

}

// Herp derp, it's going to subtract 10 from answer (100) leaving 90 then add back 5 in the integer call so it will print "The result is 95".. 
