// Ch. 4 EX: 4 - Fahrenheit to Celcius

#include <stdio.h>

int main (void)
{

	int dF = 27;  // Define degrees F as an int (to practice int and float conversion)
	
	float C = (dF - 32) / 1.8; // assigns the variable C as a float using (27 - 32) / 1.8
	
	printf ("%f\n",C);	// print float, new line, VARIABLE
	printf ("%i - 32 / 1.8 equals %f", dF, C); // print quote, Variable1, Variable2
	
	return 0;
	
}

/* OUTPUT:
-2.777778
27 - 32 / 1.8 equals -2.777778
*/