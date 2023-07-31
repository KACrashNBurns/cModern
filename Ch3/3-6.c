/*
 * Program Name: add two fracs.
 * Date: 7/31/2023
 * Purpose: modify a program which adds two 
 * fractions to have the user enter two 
 * fractions separated by a + sign.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 3 of the book.
 */

#include <stdio.h>

void main()
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter the fractions separated by a + (no spaces): ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
    

}