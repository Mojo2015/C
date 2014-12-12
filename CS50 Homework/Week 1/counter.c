/********************************************************************
CS50: Week 1 Hacker Edition - Pennies

Determining the minimum amount of coins to pay back the user

12/12/2014

*********************************************************************/*

#include <stdio.h>

int main (void)

{

    float owed;
    double total;
    int pennies, qtrcounter = 0, dimecounter = 0, nickelcounter = 0, pennycounter = 0;
    

    printf("    COIN COUNTER    \n");
    printf("How much are you owed? ");
    scanf ("%f", &owed);
    
    if (owed <= 0)
    {
        printf ("Please enter a valid number");
        main();
    }
    
    
    if (owed > 0)
    { 
    
    pennies = owed * 100;           // to convert the user input into a total amount of pennies
    printf("\n%i total pennies\n", pennies);    // test print to verify my code is working to this point
         
    
       
           
         while (pennies >= 25)  // if the amount of pennies is greater than 25, run this loop until less than 25 pennies remain
         {
                qtrcounter++;   // quarter counter will increase each time the loop is run so we know how many 25 cent increments are owed
                pennies = pennies - 25;
         }    
                
         while (pennies >= 10)
         {
                dimecounter++;
                pennies = pennies - 10;
         }
         
         while (pennies >= 5)
         {
                nickelcounter++;
                pennies = pennies - 5;
         }
         
         while (pennies <= 5 && pennies > 0)
         {
                pennycounter++;
                pennies = pennies - 1;
         }       
        
   
       
        
        total = (qtrcounter * .25) + (dimecounter * .10) + (nickelcounter * .5) + (pennycounter * .01);  // test value so I can ensure the amount is the exact same as input
        
        printf ("You are owed %i Quarters, %i Dimes, %i Nickels, %i Pennies!\n", qtrcounter, dimecounter, nickelcounter, pennycounter);
        printf ("These coins are worth a total of $%.2lf\n", total);
        printf ("That is a total of %i coins.\n", qtrcounter + dimecounter + nickelcounter + pennycounter); 
       
   } 
        
        return 0;
        
  }
  
  /* This project could be recalculated more efficiently using the modulus % and division to calculate, it would take far less guesses
  and I suggest redoing this project at a later time with a guess output */ 
