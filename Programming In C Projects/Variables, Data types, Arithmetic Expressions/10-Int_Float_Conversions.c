// Basic Conversions in C int <--> float

#include <stdio.h>

int main(void)
{
	float f1 = 123.125, f2;
	int   i1, i2 = -150;
	char   c = 'a';
	
	i1 = f1;		// floating to integer conversion
	printf ("%f assigned to an int produces %i\n", f1, i1);

	f1 = i2;		// integer to floating conversion
	printf ("%i assigned to a float produces %f\n", i2, f1);

	f1 = i2 / 100;		//integer divided by integer returned as a float
	printf ("%i divided by 100 produces %f\n", i2, f1);

	f2 = i2 / 100.0;	// integer divided by a float returned as a float
	printf ("%i divided by 100 produces %f\n", i2, f2);
	
	f2 = (float) i2 / 100;  // type cast operator, float divided by integer returned as float
	printf ("(float) %i divided by 100 produces %f\n", i2, f2);
	
	return 0;
	
}

/* 
Whenever a floating point value is assigned to an integer variable in C, the decimal gets truncated.
So when fi gets assigned to i1, the decimal place is not stored (truncated).

Converting an integer to a float does not cause any change in the number (since it already was a whole number), it simply adds decimals to it.

ALWAYS REMEMBER: Whenever two operands in an expression are integers, the operations are carried out using normal integer arithmetic, converting the result to a float WILL NOT produce the desired decimal places 
	An int divided by a float however will functionally divide a float by a float.
	
*/