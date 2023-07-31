/*
 * Program Name: Amount After Tax.
 * Date: 7/31/2023
 * Purpose: write a program that asks the user
 * to enter a dollar amount and displays the
 * amount with 5% tax added.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 2 of the book.
 */

#include <stdio.h>
#define TAXRATE 5.00 / 100.00

void main()
{ 
    float dollarsIn = 0.0f;
    float dollarsOut = 0.0f;

    printf("Enter the amount to use to compute the total after tax: ");
    scanf("%f", &dollarsIn);

    // caluates dollars out based on the constant
    // tax rate defined above.
    dollarsOut = dollarsIn + (dollarsIn * TAXRATE);

    // outputs the total after tax
    printf("Total after tax is equal to $%.2f\n", dollarsOut);

}