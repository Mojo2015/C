/* Simple math printing arguments %i in sequence */

#include <stdio.h>

int main (void)
{
	//Declare Variables
	int value1, value2, sum;
	
	//Assign values and calculate their sum
	value1 = 50;
	value2 = 25;
	sum = value1 + value2;
	
	//Display the Result
	printf ("The sum of %i and %i and %i\n", value1, value2, sum);
	
	return 0;
	
}

// OUTPUT: The sum of 50 and 25 is 75; This works because each reference to %i will print out the very next int argument in sequence (value1, value2, sum)

/* note that printf also allows you to specify %d format characters to display an integer, it will work the exact same as %i */ 

// The first program statement declares 3 variables called value1, value2, and sum all to be of type int. This statement could have also been done as follows:
		/* int value1;
		   int value2;
		   sum;
		   
		After all 3 variables have been declared, the program assigns the value 50 to value1, 25 to value2. The sum of these two variables is then computed and the result assigned
		to the variable "sum"
		
		The call to the printf function now contains four arguments. printf (input here is called FORMAT STRING) - describes to the system how the remaining arguments are 
		to be displayed. value1 first, value2 second, sum last.

