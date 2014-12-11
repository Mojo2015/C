/************************************************************************
* C Programming Practice Files
*
* Chapter 6 - 6.9 Evaluate Simple Expressions - Version 2
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
	scanf  ("%f %c %f", &value1, &operator, &value2);

	switch (operator)
	{

		case '+':	// note that each case is followed by a COLON
			printf ("%.2f\n", value1 + value2);
			break;	// note that each case must end with a break which signals the end of each case and terminates the execution of the switch function.

		case '-':
			printf ("%.2f\n", value1 - value2);
			break;

		case '*':
		case 'X':
		case 'x':  // this shows how you can use multiple cases to execute the same program statement, *, X, and x will all cause the following print statement to execute.
			printf ("%.2f\n", value1 * value2);
			break;

		case '/':
			if ( value2 == 0 )
				printf ("Division by zero.\n");
			else
				printf ("%.2f\n", value1 / value2);
			break;

		default:
			printf ("Unknown Operator\n");
			break;

		}

	return 0;

}

/* This program is literally the exact same as the simple_expressions project from earlier in this section. Instead of using if and else-if, it is built using the switch operator which 
functions the same way, the condition in switch (operator in this case) is checked against each case for a match, if any of them match the subsequent program statements will execute
if none of them match default will execute. 
	Note: You must remember to use the break statement at the end of each case to terminate the switch, otherwise the program will not continue beyond the switch statement.
