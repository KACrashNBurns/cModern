/*
 * Program Name: How Many Digits?
 * Date: 7/31/2023
 * Purpose: write a program that calculates
 * how many digits a number contains.  Use
 * if statements to test the number.  Assume
 * it has no more than four digits.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 4 of the book.
 */

#include <stdio.h>

void main(void)
{
    unsigned int num = 0;

    printf("Enter a number: ");
    scanf("%u", &num);

    if (num >= 0 && num <= 9)
        printf("Number %u has 1 digit.\n", num);
    else if (num >= 10 && num <= 99)
        printf("Number %u has 2 digits.\n", num);
    else if (num >= 100 && num <= 999)
        printf("Number %u has 3 digits.\n", num);
    else 
        printf("Number %u has four or more digits.\n", num);

}