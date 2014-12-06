#include <stdio.h> // Must be called for the program to understand printf call

int sum();
int main() //Naming the porogram (CH.3 Exercise 1)

{

	printf("1. In C, lowercase letters are significant. \n");
	printf("2. main is where program execution begins. \n");
	printf("3. Opening and closing braces enclose program statements in a routine.\n4. All program statements must be terminated by a semicolon.\n");





	//CH.3 Exercise 4

	//Declare Variables
	int value1, value2, sum;

	//Assign values to the variables
	value1 = 87;
	value2 = 15;
	sum = value1 - value2;

	printf("\nThe solution to %i minus %i is %i\n", value1, value2, sum);

	getchar();
	return 0;
	
	
	
}


