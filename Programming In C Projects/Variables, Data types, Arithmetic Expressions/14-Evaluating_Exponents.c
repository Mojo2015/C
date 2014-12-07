//Evaluating expressoins with exponents


#include <stdio.h>
int main (void)
{

	float a1 = (3.31 * 10E-8 * 2.01 * 10E-7);
	float a2 = (7.16 * 10E-6 + 2.01 * 10E-8);
	float result = (a1 / a2);

	printf("%e / %e = %e\n", a1, a2, result);
	printf("%e",result);



	return 0;
}

/* OUTPUT:
6.653100e-13 / 7.180100e-05 = 9.266027e-09
9.266027e-09
*/

