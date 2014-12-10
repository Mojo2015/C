/************************************************************************
* C Programming Practice Files
*
* Programming in C - Chapter 6 - 6.2 Calculating the Average of Grades
*
* 12/9/2014
*
* Moj0
*
************************************************************************/

#include <stdio.h> 

int main ()

{

	int 	numberOfGrades, i, 
	int 	gradeTotal   = 0;
	int 	failureCount = 0;
	float 	average;		// We want the average to be a float so we can see a decimal place. Ints can be used to calculate a float.

	printf ("How many grades will you be entering? ");
	scanf  ("%i", &numberOfGrades);				//standard input fields

	for ( i = 1; i <= numberOfGrades; ++i )			//i is used to create the loop which runs as many times as the user input numberOfGrades

	{

		printf ("Enter grade #%i: ", i);
		scanf  ("%i", & grade);				//assigns user input to the variable grade, this will repeat each loop

		gradeTotal = gradeTotal + grade;		//gradeTotal starts at zero and will be increased by the value of each grade enter 					
								//since average grade is equal to the sum of all grades / total amount of grades
								//the new value will be saved for each loop. 3 100 grades will amount to gradeTotal of 300 and so on.

		if (grade < 65 )				//if conditional, any grades under 65 will be stored in failureCount to store the total amount of failing grades
			++failureCount;
	}

	average = (float) gradeTotal / numberOfGrades;		//to assign our variable average with a float by dividing the integers gradeTotal / numberOfGrades into a float for our answer

	printf ("\nGrade average = %.2f\n", average);		//.2f formats the float to two decimal places (so .01 does not print as .1)
	printf ("Number of failures = %i\n", failureCount);

	return 0;

}

/*
Very standard concept/algorithm for this program. To calculate your average grade, you add up all of your grades and divide the result by the total
amount of grades. ex: 3 test scores of 100:
	100 + 100 + 100 = 300 total, 3 scores 
	300 / 3 = 100 for an average test grade of 100.

	NOTE: Integers CAN be converted to floats, as we established in earlier projects using the (float) argument used in line 41
