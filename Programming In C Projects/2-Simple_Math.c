/* Simple Math Formula: Programming in C Third Ed. P. 15 */

#include <stdio.h>

int main (void)
{
	int sum;
	
	sum = 50 + 25;
	printf ("The sum of 50 and 25 is %i\n", sum);
	
	return 0;
}

/* see 1-Hello_World.c for explanations on #include, int main, printf, return 0 /*

/* INT: the first statement "int sum;" declares the variable "sum" to be of type INTEGER (int)
	C requires that all program variables be declared before they are used in a program. 
	The declaration of a variable specifies to the C compiler how a particular variable will be used by the program. This information is needed
	by the compiler to generate the correct instructions to store and retrieve values into and out of the variables.
	A variable declared as type int can only be used to hold integral values (numbers without decimal places like 1, 3, 20, 35). Numbers with 
	decimal places are known as FLOATING POINT or REAL numbers */
	
/* SUM: a variable that is used to store the result of the addition of two integers together (50 and 25). 50 is added to 25 and the result is stored in the variable sum.
	*/
	
/* printf in this scenario now has two items or ARGUMENTS enclosed within the parenthesis. The arguments are separated by a COMMA.
	the % character inside the first argument is a special character recognized by the printf function. The character that immediately follows the % signal
	specifies what TYPE of value is to be displayed at that point. The letter i is then used to signify that an integer is to be displayed.
			%i = will always print the next integer within the argument, if you repeat it it will continue to the next integer in the argument "sum" See 3-Simple_Math2.c for an example with multiple %i usage /*
			

	