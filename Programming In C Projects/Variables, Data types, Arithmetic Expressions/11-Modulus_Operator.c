// THE MODULUS OPERATOR 

#include <stdio.h>

int main (void)
{

	int a = 25, b = 5, c = 10, d = 7;
	
	printf ("a %% b = %i\n", a % b); // %% the function indicates that you want to print a % sign. The modulus operator gives the REMAINDER of the first value divided by the second value
	printf ("a %% c = %i\n", a % c);
	printf ("a %% d = %i\n", a % d);
	printf ("a / d * d + a %% d = %i\n", a / d * d + a % d); // The modulus operator has equal precidence to multiplacation and division. NOTE: ANY ARITHMETIC PERFORMED AS INTEGERS DISCARDS THE REMAINDER, THE MODULUS IS ADDING ZERO!
	
	return 0;
	
}

/* OUTPUT:
a % b = 0
a % c = 5
a % d = 4
a / d * d + a % d = 25
*/

