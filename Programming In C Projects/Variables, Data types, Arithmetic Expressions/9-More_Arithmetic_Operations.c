/* Arithmetic Expressions
12-6-2014
*/

#include <stdio.h>

int main (void)
{

	int   a = 25;
	int   b = 2;
	
	float c = 25.0;
	float d = 2.0;
	
	printf ("6 + a / 5 * b = %i\n", 6 + a / 5 * b); // this will evaluate starting with division (a / 5) then that result is multipled by b, then the addition is performed. Read: 6 + ((25 / 5)*b)
	printf ("a / b * b = %i\n", a / b * b); // we know this should do 25 / 2 * 2 = 25, but because it's an int, the computer is going to miscalculate and respond with 24!!!
	printf ("c / d * d = %f\n", c / d * d);
	printf ("-a = %i\n", -a);
	
	return 0;
	
}

/* OUTPUT:
6 + a / 5 * b = 16
a / b * b = 24      // COMPUTE ERROR DUE TO USING INT, IN C, 25/2 as an INT will result in 12 (rounding down from 12.5), then 12x2 = 24!!!!
c / d * d = 25.000000
-a = -25
*/

