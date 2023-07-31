/*
 * Program Name: Polynomial v.Horners
 * Date: 7/31/2023
 * Purpose: write a program that asks the user
 * to enter a value for x and solves a hard 
 * coded polynomial using Horners Rule which
 * was provided by the author.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 2 of the book.
 */

#include <stdio.h>

void main()
{
    int x = 0;
    float polynomial = 0.0f;
 
    // Get input from user
    printf("This program will solve for the value x\n");
    printf("in the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6.\n");
    printf("Enter the integer value to substitute for x: ");
    scanf("%d", &x);

    // calculate the result
    polynomial = ((((3 * x + 2) * x - 5) * x + 7)* x - 6 );

    // print output
    // output the result;
    printf("\n the value of the polynomial with %d subsituted for x is: %f\n", 
        x, polynomial);

}