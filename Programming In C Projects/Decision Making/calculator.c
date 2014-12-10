/************************************************************************
* C Programming Practice Files
*
* MY CALCULATOR: FIND OUT WHY THIS SHIT IS BORKED OR ELSE MOHAMED DIES
*
* 12/9/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h>

int main (void)

{ // Begin main

	float value1, value2, output, ans, mydick = 1;
	char operator;
	
	printf ("Type in your expression.\n");
	scanf  ("%f %c %f", &value1, &operator, &value2);	// Scanf can be used for multiple inputs, %f = float, %c = char (the char will be used to determine + - * / )


	
	

	if ( operator == '+' )					// Remember the operator is input as a CHAR, that goes in single quotes '+' '-' '*' '/'
		{
		output = value1 + value2;
		ans = output;
		printf ("%.2f\n", output);
		}

		
	else if ( operator == '-' )
		{
		output = value1 - value2;
		ans = output;
		printf ("%.2f\n", output);		//Print the float rounded to two decimal places, function.
		}

		
	else if ( operator == '*' || operator == 'x' || operator == 'X' )	// I updated this one since some people may use 50 x 50 or 50 X 50 etc.
		{
		output = value1 * value2;
		ans = output;
		printf ("%.2f\n", output);
		}

			
	else if ( operator == '/' )
		{
		output = value1 / value2;
		ans = output;
		printf ("%.2f\n", output);
		}
	
	else if ( operator == 'Q' || operator == 'q' )
		reset ();
		

	else 
		printf ("You did not type in anything rational\n");
		reset ();
	
	return 0;

} // end main - main is a required function in C programs

	int reset ()
	{
		printf ("Try again, English this time please and thank you\n");
		scanf  ("%f %c %f", &value1, &operator, &value2);
		main ();
	}

/* This program makes a fully functional basic calculator very simply.
	The user inputs an expression such as 5+5 (5 + 5 will work too). and the if expressions will determine which operator was put in
	along with which calculation to carry out. Remember that math can be carried out internally within the print command, you do not have
	to set up variables to carry out theses equations first (though you could). 
*/
