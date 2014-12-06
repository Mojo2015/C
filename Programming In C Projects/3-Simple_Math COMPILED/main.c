/* Simple math printing arguments %i in sequence */

#include <stdio.h>

int main(void)
{

	int value1, value2, sum;

	value1 = 50;
	value2 = 25;
	sum = value1 + value2;
	printf("The sum of %i and %i and %i\n", value1, value2, sum);

	
	getch(); /* this keeps the program from closing as soon as it opens*/
	return 0;
}

//PLEASE NOTE THE USE OF getch(); when compiling the program for windows it WILL CLOSE WITHOUT SOME KIND OF PAUSE COMMAND!!!
