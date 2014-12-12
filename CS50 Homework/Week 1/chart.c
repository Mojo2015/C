/********************************************************************
CS50: Sightings Chart Homework Week 1

12/12/2014

*********************************************************************/

#include <stdio.h>
#include <math.h>

int main (void)

{

int count1 = 0, count2 = 0, count3 = 0, count4 = 0; // declaring ints to be used in while loop
float mf, mm, fm, ff;                               // establishing percentages to use to determine amount of # symbols
float maleF, femaleM, femaleF, maleM, total;        // Input from user
float pmaleF, pfemaleM, pfemaleF, pmaleM;           // Establishing how many # symbols to use based off of percentages

printf ("Enter total amount of M spotting F: \n");
scanf  ("%f", &maleF);

printf ("Enter total amount of F spotting M: \n");
scanf  ("%f", &femaleM);

printf ("Enter total amount of F spotting F: \n");
scanf ("%f", &femaleF);

printf ("Enter total amount of M spotting M: \n");
scanf ("%f", &maleM);

printf ("\n\n*****************************************************\n");
printf ("                     GRAPH                          \n");
printf ("*****************************************************\n");

total = maleF + femaleM + femaleF + maleM; // Total amount of sightings combined

pmaleF = maleF / total;     // % of male on female sightings
pfemaleM = femaleM / total; // % of female on male sightings
pfemaleF = femaleF / total; // % of female on female sightings
pmaleM = maleM / total;     // % of male on male sightings

mm = 80 * pmaleM;           // Total amount of # for male on male  **THESE NUMBERS ARE NOT ROUNDED**
mf = 80 * pmaleF;           // Total amount of # for male on female
ff = 80 * pfemaleF;         // Total amount of # for female on female
fm = 80 * pfemaleM;         // Total amount of # for female on male

//printf ("Male sighting female: %.2f\n", pmaleF);
//printf ("Female sighting male: %.2f\n", pfemaleM);
//printf ("Female sighting female: %.2f\n", pfemaleF);
//printf ("Male sighting male: %.2f\n", pmaleM);
//printf ("Verify 100.00 = %.2f\n", pmaleF + pfemaleM + pfemaleF + pmaleM);

printf ("M spotting F\n");
    
    while (count1 < round(mf))  // Using the math.h header, round(variable) is rounding the float to the nearest whole integer
    {   printf("#");            // each time it loops, it will print a hash with no spaces or returns, creating the effect of a "bar"
        count1++;               // count will increment by one each time the loop runs until it reaches the amount of bars specified by our variable
    }   
   
printf ("\nF spotting M\n");
   
    while (count2 < round(fm))  // Please note I did not use <= because count is set to ZERO, it will have completed 20 loops at 19 and when it reaches 20 it will stop.
    {   printf("#");
        count2++;
    }   
    
printf ("\nF spotting F\n");
    
    while (count3 < round(ff))
    {   printf("#");
        count3++;
    }   
    
printf ("\nM spotting M\n");
    
    while (count4 < round(mm))
    {   printf("#");
        count4++;
    }    
    
printf ("\n");
    
return 0;

}

