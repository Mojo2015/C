#include <stdio.h>

int main (void)
{
	int integerVar = 100; // assigns an integer to the variable integerVar
	float floatingVar = 331.79; // assigns a float to the variable floatingVar
	double doubleVar = 8.44e+11; // assigns a double to the variable doubleVar
	char charVar = 'W';  // assigns a char to the variable charVar **CHAR VARIABLES MUST BE SET INSIDE SINGLE QUOTES
	
	_Bool boolVar = 0; // assigns a Boolean value to the variable boolVar
	
	printf("integerVar = %i\n", integerVar); //%i tells the printf function to print an integerVar
	printf ("floatingVar = %f\n", floatingVar); //%f tells the printf function to print the float, don't forget %g drops the unnecessary decimal places for more aesthetic printout.
	printf ("doubleVar = %e\n", doubleVar); // %e tells the printf function to print a double or float in scientific notation, same rule with %g applies above and will determine whether to print as a decimal or scientific notation for you.
	printf ("doubleVar = %g\n", doubleVar); // %g lets printf choose whether to use %e or %f and automatically removes any trailing zeroes.
	printf ("charVar = %c\n", charVar); // %c tells the printf function to print the char data type stored in variable charVar
	
	printf ("boolVar = %i\n", boolVar); // displays the value of the Boolean test as an integer
	
	return 0;
	
}