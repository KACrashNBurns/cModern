/*
 * Program Name: Bills
 * Date: 7/31/2023
 * Purpose: ask the user to enter a dollar
 * amount and then shows how to pay that
 * amount using the smallest number of $20,
 * $10, $5, and $1 bills
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 2 of the book.
 */

#include <stdio.h>
#define FIRSTDENOM 20
#define SECONDDENOM 10
#define THIRDDENOM 5
#define FOURTHDENOM 1

void main()
{
    int dollarsIn = 0;
    int remainder = 0;
    int first, second, third, fourth;
    first = second = third = fourth = 0;

    // Get input from user
    printf("\nEnter the a dollar amount: ");
    scanf("%d", &dollarsIn);

    // calculate denominations
    // take remainder and perform integer division
    // to get the amount of bills needed
    // Calculate remainder and divide by next
    // denom etc.

    remainder = dollarsIn;
    first = remainder / FIRSTDENOM;
    remainder -= first * FIRSTDENOM;
    second = remainder / SECONDDENOM;
    remainder -= second * SECONDDENOM;
    third = remainder / THIRDDENOM;
    remainder -= third * THIRDDENOM;
    fourth = remainder;

    // print the output
    printf("$%d bills:\t%d\n", FIRSTDENOM, first);
    printf("$%d bills:\t%d\n", SECONDDENOM, second);
    printf("$%d bills:\t%d\n", THIRDDENOM, third);
    printf("$%d bills:\t%d\n", FOURTHDENOM, fourth);
}