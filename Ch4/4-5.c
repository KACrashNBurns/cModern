/*
 * Program Name: UPC
 * Date: 8/1/2023
 * Purpose: rewrite the UPC program so that the 
 * user enters 11 digits on at a time instead
 * of entering one digit, then five, then
 * another 5.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 4 of the book.
 */

#include <stdio.h>

void main(void)
{
    int d, i1, i2, i3, i4, i5,
        j1, j2, j3, j4, j5;
    int first_sum, second_sum, total;

    
    d = i1 = i2 = i3 = i4 = i5 =
    j1 = j2 = j3 = j4 = j5 = 0;
    first_sum = second_sum = total = 0;
    
    // Computes a upc check digit
    printf("Enter the 11 digit US UPC code to analyze: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &d, 
        &i1, &i2, &i3, &i4, &i5,
        &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = (3 * first_sum) + second_sum;

    // print output
    printf("Check digit is: %d\n", 9 - ((total -1) % 10));

    // could we use an array instead?

}