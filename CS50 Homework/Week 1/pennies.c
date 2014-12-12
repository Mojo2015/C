/********************************************************************
CS50: Week 1 Hacker Edition - Pennies

Determining how much money would be made if we started with 1 penny
and squared the amount (*2) every day for an entire month

12/12/2014

*********************************************************************/*

#include <stdio.h>



int main (void)

{

  
    
    int days, n = 1; // n will be used as our counter within the loop until it reaches the user specifid days
    double dollars, pennies;    // using double floats for accurate math
    pennies = 1;    // must set pennies to one on day 1, if left at zero it will constantly square zero and return 0

    printf ("How many days are there in the month? ");
    scanf  ("%i", &days);
    
    
    if (days < 28 || days >31)  // if < 28 days OR > 31 days
    {   printf ("Please enter a valid number\n");
        main();                 // restart our function main()
    }
       
    else 
    {
        for (; n < days; n++)
        {
            pennies = pennies * 2;          // each day that passes pennies are multiplied by 2
            printf ("%f\n", pennies);       // test purposes so I can see the balance each day print out to ensure no errors
        }
        
    dollars = pennies / 100;                // to convert the answer back to a dollar
    printf ("After %i days, You will earn $%.2f\n", days, dollars);
    }    
    
    
    return 0;
    
}
            
