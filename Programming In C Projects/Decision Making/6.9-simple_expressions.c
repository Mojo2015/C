/************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 6 - 6.7 & 6.8 Evaluating Simple Expressions
*
* 12/9/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h>

int main (void)

{

	float value1, value2;
	char operator;

	printf ("Type in your expression.\n");
	scanf  ("%f %c %f", &value1, &operator, &value2); // Note the spaces between %f %c and %f, this tells C to allow an arbitrary amount of spaces between inputs
							  // The user will be able to input "1+1", "1 + 1", "1      +1*" etc)

	if ( operator == '+' )
		printf ("%.2f\n", value1 + value2);
	
	else if ( operator == '-' )
		printf ("%.2f\n", value1 - value2);

	else if ( operator == '*' )
		printf ("%.2f\n", value1 * value2);
	
	else if ( operator == '/' )
		{
		if ( value2 == 0 )
			printf ("Error: Division by zero is not allowed.\n");
		else
			printf ("%.2f\n", value1 / value2);
		}

	else
		printf ("Unknown Operator. \n");

	return 0;

}
