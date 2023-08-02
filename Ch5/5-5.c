/*
 * Program Name: Income Tax
 * Date: 8/1/2023
 * Purpose: Apply income tax brackts
 * to the taxable income.  Have the user input
 * taxable income and then display the tax due.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

#include <stdio.h>

// Define the brackets
#define FIRSTBRACKET 750.00f
#define SECONDBRACKET 2250.00f
#define THIRDBRACKET 3750.00f
#define FOURTHBRACKET 5250.00f
#define FIFTHBRACKET 7000.00f

// define the rates
#define FIRSTRATE 0.01f
#define SECONDRATE 0.02f
#define THIRDRATE 0.03f
#define FOURTHRATE 0.04f
#define FIFTHRATE 0.05f
#define MAXRATE 0.06f

void main(void)
{

    float taxableIncome = 0;
    float tax = 0;

    // Get input from user
    printf("Enter the amount of taxable income: ");
    scanf("%f", &taxableIncome);

    //Calculate tax based on brackets
    if (taxableIncome < FIRSTBRACKET) {
        tax = taxableIncome * FIRSTRATE;
    } else if (taxableIncome >= FIRSTBRACKET && 
        taxableIncome < SECONDBRACKET) {
        tax = 7.50f + (taxableIncome - FIRSTBRACKET) * SECONDRATE;
    } else if (taxableIncome >= SECONDBRACKET &&
        taxableIncome < THIRDBRACKET) {
        tax = 37.50f + (taxableIncome - SECONDBRACKET) * THIRDRATE;
    } else if (taxableIncome >= THIRDBRACKET &&
        taxableIncome < FOURTHBRACKET) {
        tax = 82.50f + (taxableIncome - THIRDBRACKET) * FOURTHRATE;
    } else if (taxableIncome >= FOURTHBRACKET &&
        taxableIncome < FIFTHBRACKET) {
        tax = 142.50f + (taxableIncome - FOURTHBRACKET) * FIFTHRATE;
    } else {
        tax = 230.00 + (taxableIncome - FIFTHBRACKET) * MAXRATE;
    }

    // print output
    printf("The tax on $%.2f is $%.2f\n", taxableIncome, tax);
}

