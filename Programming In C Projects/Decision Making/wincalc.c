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
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h> //**WINDOWS ONLY**
#include <stdbool.h>
//#include <locale.h>	// Added to support printout of commas with numbers  (not working in windows)


int main(void)


{
	HANDLE hstdout; 
	hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
	//setlocale(LC_NUMERIC, "");	// must set your locale type with locale.h always use LC_NUMERIC for alpha numeric characters.
	system("mode 90,75");   //Set mode to ensure window does not exceed buffer size
	//SMALL_RECT WinRect = { 0, 0, 90, 75 };   //New dimensions for window in 8x12 pixel chars
	//SMALL_RECT* WinSize = &WinRect;
	//SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), true, WinSize);   //Set new size for window

	float number, ans = 0;	// declaring our integers NUMBER and ANSWER
	char accumulator;	// declaring our char accumulator
	SetConsoleTextAttribute(hstdout, FOREGROUND_RED);
	printf("******************************************************************************************		\n");
	printf("			   CALCULATOR BY SERIOUS DON V. 0.2.2 BETA			   	\n");
	printf("******************************************************************************************		\n");
	
	SetConsoleTextAttribute(hstdout, FOREGROUND_INTENSITY | 15);
	printf("   ___                      _                                       ___                   		\n");
	printf("  / __|    ___      _ _    (_)     ___    _  _     ___      o O O  |   \\    ___    _ _			\n");
	printf("  \\__ \\   / -_)    |  _|   | |    / _ \\  | +| |   (_-<     o       | |) |  / _ \\  |   \\   	\n");
	printf("  |___/   \\___|   _|_|_   _|_|_   \\___/   \\_,_|   /__/_   MoJ0[O]  |___/   \\___/  |_||_|  	\n");
	printf("_|*****|_|*****|_|*****|_|*****|_|*****|_|*****|_|*****| {======|_|*****|_|*****|_|*****|		\n");
	printf("* -0-0- * -0-0- * -0-0- * -0-0- * -0-0- * -0-0- * -0-0- ./o--000 * -0-0- * -0-0- * -0-0-  		\n\n");
	SetConsoleTextAttribute(hstdout, 15);
	printf("******************************************************************************************		\n");
	printf("					CALCULATOR					   	\n");
	printf("	 Begin by typing S to set your first number followed by a digit (\"S 500\")				 	\n");
	printf("      [ C Clear ]  [ + Add ] [ - Subtract ] [ * Multiply ] [ / Divide ][ R Reset ]				\n\n");
	printf("******************************************************************************************		\n");
	SetConsoleTextAttribute(hstdout, FOREGROUND_RED);
	printf("		        Enter your OPERATOR followed by your NUMBER										\n\n");
	SetConsoleTextAttribute(hstdout, FOREGROUND_INTENSITY | 15);
	scanf(" %c %f", &accumulator, &number);	// first input from user setting number and accumulator


	while (accumulator != 'R' && accumulator != 'r') // while accumulator is NOT E or e, keep looping

	if (accumulator == 'S' || accumulator == 's')
	{
		ans = number;		// resets the accumulated balance in the variable ans to whatever was typed in
		SetConsoleTextAttribute(hstdout, 12);
		printf("\n	Accumulator set to %.2f\n\n", number);	// Accumulator is reset
		SetConsoleTextAttribute(hstdout, 15);
		printf("ANS ");
		scanf("\t\t\t %c %f", &accumulator, &number);

	}

	else if (accumulator == '+')
	{
		SetConsoleTextAttribute(hstdout, 12);
		printf("\n	%.2f + %.2f = %.2f\n\n", ans, number, ans + number); // note the apostraphe ' following each % symbol, this is calling our locale to print commas.
		ans = ans + number;
		SetConsoleTextAttribute(hstdout, 15);
		printf("ANS ");
		scanf(" %c %f", &accumulator, &number);
	}

	else if (accumulator == '-')
	{
		SetConsoleTextAttribute(hstdout, 12);
		printf("\n	%.2f - %.2f = %.2f\n\n", ans, number, ans - number);
		ans = ans - number;
		SetConsoleTextAttribute(hstdout, 15);
		printf("ANS ");
		scanf(" %c %f", &accumulator, &number);
	}

	else if (accumulator == '*' || accumulator == 'x' || accumulator == 'X')
	{
		SetConsoleTextAttribute(hstdout, 12);
		printf("\n	%.2f x %.2f = %.2f\n\n", ans, number, ans * number);
		ans = ans * number;
		SetConsoleTextAttribute(hstdout, 15);
		printf("ANS ");
		scanf(" %c %f", &accumulator, &number);
	}

	else if (accumulator == '/')

	if (number == 0 || ans == 0)
	{
		SetConsoleTextAttribute(hstdout, 6);
		printf("\nError: Can not divide by zero\n\n");
		SetConsoleTextAttribute(hstdout, 15);
		printf("ANS ");
		scanf(" %c %f", &accumulator, &number);
	}
	else
	{
		SetConsoleTextAttribute(hstdout, 12);
		printf("\n%.2f / %.2f = %.2f\n\n", ans, number, ans / number);
		ans = ans / number;
		SetConsoleTextAttribute(hstdout, 15);
		printf("ANS ");
		scanf(" %c %f", &accumulator, &number);
	}

	else if (accumulator == 'c' || accumulator == 'C') // setting clear button to RESET
	{
		printf("\nCLEAR\n\n");
		main();
	}


	else
	{
		printf("\nNot a valid entry\n\n");
		SetConsoleTextAttribute(hstdout, 15);
		printf("ANS ");
		scanf("%c %f", &accumulator, &number);
	}

	printf("\nExiting Program\n");

	return 0;

}

/* This is my solution to chapter 6 end of chapter exercise 4. I added a clear function. Some bugs in this program which I'm sure are expected at this point
because I have not yet learned strings or any other input functions besides scan F
1. If the user enters anything beginning with s or S (ex: suck it) the program will detect the nonvalid entry and spam not a valid entry AND reset the accumulator
2. You HAVE to enter two figures for each scan, so if a user wants to use the Clear (C) function, they must also follow it with a number.

Things to learn: How to add a help menu which will clear from the terminal when the user continues on.

Otherwise this calculator is fully functional!

*/

//0.2.2 Switched back to floating point numbers because after 1,000,000 they were being converted to scientific notation. Added commas to printouts for easier reading.
