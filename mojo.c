/* Fun times make me happy and such */
//this is also a comment

#include <stdio.h> // this is the standard input/output header in C. You need to include it to use functions like scanf (input) and printf (output)

int main (void) // this is a function in C, all C programs start with main, it has to exist. (void) just means there are no arguments.

{ // functions have to be contained within curly braces
	long long int dicksucker, results;

	printf ("How many dicks do you suck annually?\n");
	scanf("%lli", &dicksucker);
	
	printf("Wow, I was not aware Mohamed was capable of sucking %lli dicks per year\n", dicksucker);

	results = dicksucker / 365;

	printf("Wow bro, that means you suck %lli dicks per day, faggot\n", results);
	return 0; // this is necessary if the program contains multiple functions, not needed here.

} // end the block of code for main


