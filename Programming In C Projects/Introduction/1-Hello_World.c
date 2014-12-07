#include <stdio.h> 

int main (void)
{
    printf ("Programming is fun! \n");
	printf ("And programming in C is even more fun.\n");
	printf ("Testing...\n..1\n...2\n....3\n");
	
    return 0;

}

/* This is how you add comments in C */
/* C does not care where you begin typing on a line unlike python, though it is best practice
to organize your indentations logically.

/* UNDERSTANDING THIS PROGRAM /* 

/* #include <stdio.h> is typically included at the beginning of every program you write.
		It tells the compiler information about the printf output routine used later in the program.*/
		
/* int main (void) informs the system that the name of the program is "main", and that it 
		RETURNS an integer value, which is abbreviated "int.". "main" is a special name that indicates
		precisely WHERE the program is to begin execution. The () following main specify that the name
		main is a FUNCTION. The keyword (void) enclosed in the parenthesis specifies that the function maint
		takes NO ARGUMENTS. (void of arguments). Now that you have identified main to the system, you are ready
		to specify precisely what this routine is performed. This is done by enclosing all program statements
		of the routine within curly braces {...}. 
			*All program statements included in braces {} are taken as part of the "main" routine by the system.
			In this program there are only two such functions (printf and return)*/
			
/* printf invokes or "calls" the function print, the parameter or "argument" to be passed to the printf routine is the string of 
		characters following it: "Programming is fun! \n"
			**printf is a function in the C library that simply prints / displays its argument (or arguments) on your screen.
			**\n is known as the NEWLINE character - this tells your system to go to a new line. Any characters to be printed 
			after \n are to be printed on the next line below. (basically the same as pushing enter on a keyboard) /*
			
					/* The final printf call in this program shows that you can display multiple lines of output while only calling
					printf one time, this will print multiple lines of code.
/* ALL PROGRAM STATEMENTS IN C MUST BE TERMINATED BY A SEMICOLON ;. This is the reason the semicolon appears immediately after the
		closing parenthesis of the printf call. /*
		
/* return 0; - This says to finish the execution of "main" and return to the system a status value of 0. You can use any integer	
			   here. Zero is used by convention to indicate that the program completed successfuly - that is without running into any
			   errors. Different numbers can be used to indicate different types of error conditions that occurred (such as filelength
			   not being found). This exit status can be tested by other programs (such as unix shell) to see whether the program rand
			   successfully. 
			   