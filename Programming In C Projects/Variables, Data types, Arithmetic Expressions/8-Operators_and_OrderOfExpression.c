#include <stdio.h>

int main (void)
{
	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;
	
	result = a - b;  // subtraction
	printf ("a - b = %i\n", result);
	
	result = b * c; // multiplcation
	printf ("a * b = %i\n", result);
	
	result = a / c; // division
	printf ("a / b = %i\n", result);
	
	result = a + b * c; // example of precedence.
	printf ("a + b * c = %i\n", result);
	
		result = (a + b) * c; // example of proper formatting of the above function (granted you wanted (A+B)*C)
		printf ("(a + b) * c = %i\n", (a + b) * c);
	
	printf ("a * b + c * d = %i\n", a * b + c * d);
	
	return 0;
	
}

/* OUTPUT:
a - b = 98
a * b = 50
a / b = 4
a + b * c = 150 - it did b * c then added A (25 x 2 = 50, +100 = 150) Multiplication takes precedence over addition and subtraction: a = (b * c) 
(a + b) * c = 2550
a * b + c * d = 300 // it computed (a * b) + (c * d) as per precedence of operations. 

*/ 