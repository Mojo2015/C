/************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 6 - Ex. 4 - Accumulator Calculator
*
* 12/11/2014
*
* Moj0
*
*****************************************************************************************************************************************************************/
/* This calculator was build completely solo based on exercise 4 of chapter 6 in "Programming in C". It contains a few bugs but is fully
	functioning. If I do make updates to this it will be saved under a different file which I will refer to as this is the best
	possible calculator that can be made using the techniques shown in the book up to this point.

Usage:
When the program first runs the user should set their Accumulator (an initial balance) by entering "S" or "s" followed by a number ex: S 250
	Note if no accumulator is set the program will just assume that your initial balance is zero.
After the Accumulator is set, the user can put in an operator sign followed by a number to build off of it. Ex: + 500 will add 500 to the initial balance.
After entering that, the accumulator will update to the answer of the prior entry, where the user can keep adding, subtracting, multiplying or dividing from it.

							Valid Operators:

							Multiplication: *, X, x
							Division: 	/
							Addition: 	+
							Subtraction	-
							Set Accumulator S 	(Accumulator can be reset at ANY point in the program)
							Clear (restart) C, c	(Same as setting accumulator but will restart the program)
							Exit Program    E, e	

******************************************************************************************************************************************************************/

#include <stdio.h>

int main (void)

{
	
	float number, ans = 0;	// declaring our integers NUMBER and ANSWER
	char accumulator;	// declaring our char accumulator
	
	printf ("******************************************************************************************	\n");
	printf ("			   CALCULATOR BY SERIOUS DON V. 0.2.1 BETA			   	\n");
	printf ("******************************************************************************************	\n");
	printf("   ___                      _                                       ___                   	\n");
	printf("  / __|    ___      _ _    (_)     ___    _  _     ___      o O O  |   \\    ___    _ _    	\n");
	printf("  \\__ \\   / -_)    |  _|   | |    / _ \\  | +| |   (_-<     o       | |) |  / _ \\  |   \\   	\n");
	printf("  |___/   \\___|   _|_|_   _|_|_   \\___/   \\_,_|   /__/_   MoJ0[O]  |___/   \\___/  |_||_|  	\n");
	printf("_|*****|_|*****|_|*****|_|*****|_|*****|_|*****|_|*****| {======|_|*****|_|*****|_|*****| 	\n");
	printf("* -0-0- * -0-0- * -0-0- * -0-0- * -0-0- * -0-0- * -0-0- ./o--000 * -0-0- * -0-0- * -0-0-  	\n\n");
	printf ("******************************************************************************************	\n");
	printf ("					CALCULATOR					   	\n");	
	printf ("	 Begin by typing S to set your first number followed by a digit (\"S 500\")        	\n");
	printf ("      [ C to clear ]  [ + to add ] [ - to subtract ] [ * to multiply ] [ / to divide ]        	\n");
	printf ("		     Enter your OPERATOR followed by your NUMBER                           	\n");
	scanf  (" %c %f", &accumulator, &number);	// first input from user setting number and accumulator
	

	while (accumulator != 'E' && accumulator != 'e') // while accumulator is NOT E or e, keep looping
	
		if (accumulator == 'S' || accumulator == 's')
			{
			ans = ans + number;		// resets the accumulated balance in the variable ans to whatever was typed in
			printf ("accumulator set to %f\n", number);	// Accumulator is reset
			printf ("ANS");
			scanf  ("\t\t\t %c %f", &accumulator, &number);
			
			}

		else if (accumulator == '+')
			{
			printf ("%f + %f = %f\n", ans, number, ans + number);
			ans = ans + number;
			printf ("ANS");
			scanf  (" %c %f", &accumulator, &number);
			}
		
		else if (accumulator == '-')
			{
			printf ("%f - %f = %f\n", ans, number, ans - number);
			ans = ans - number;
			printf ("ANS");
			scanf  (" %c %f", &accumulator, &number);
			}

		else if (accumulator == '*' || accumulator == 'x' || accumulator == 'X')
			{
			printf ("%f x %f = %f\n", ans, number, ans * number);
			ans = ans * number;
			printf ("ANS");
			scanf  (" %c %f", &accumulator, &number);
			}

		else if (accumulator == '/')
			
			if (number == 0 || ans == 0)
			{
				printf ("Error: Can not divide by zero\n");
				printf ("ANS");
				scanf  (" %c %f", &accumulator, &number);
			}
			else 
			{
				printf ("%f / %f = %f\n", ans, number, ans / number);
				ans = ans / number;
				printf ("ANS");
				scanf  (" %c %f", &accumulator, &number);
			}
	
		else if (accumulator == 'c' || accumulator == 'C') // setting clear button to RESET
			{
			printf ("CLEAR\n");
			main();
			}
	

		 else 
			{
			printf ("Not a valid entry\n");
			printf ("ANS");
			scanf  ("%c %f", &accumulator, &number);
			} 

		printf ("Exiting Program\n");

		return 0;

}

/* This is my solution to chapter 6 end of chapter exercise 4. I added a clear function. Some bugs in this program which I'm sure are expected at this point
	because I have not yet learned strings or any other input functions besides scan F
	1. If the user enters anything beginning with s or S (ex: suck it) the program will detect the nonvalid entry and spam not a valid entry AND reset the accumulator
	2. You HAVE to enter two figures for each scan, so if a user wants to use the Clear (C) function, they must also follow it with a number.

	Things to learn: How to add a help menu which will clear from the terminal when the user continues on. 

	Otherwise this calculator is fully functional!

*/
