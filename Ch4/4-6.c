/*
 * Program Name: Reverse Digits
 * Date: 8/1/2023
 * Purpose: european countries use a 13
 * digit EAN number instead of an 11 digit
 * UPC number.  See below for the algorithm
 * used to calculate the check digit.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 4 of the book.
 */



#include <stdio.h>

void main()
{
    int d0, d1, d2, d3, d4, d5,
        d6, d7, d8, d9, d10, d11;
    int sum1, sum2, total, check;

    d0 = d1 = d2 = d3 = d4 = d5
    = d6 = d7 = d8 = d9 = d10 = d11 = 0;

    sum1 = sum2 = total = check = 0;

    printf("Enter the twelve digit EAN to analyze: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &d0, &d1, &d2, &d3, &d4, &d5,
        &d6, &d7, &d8, &d9, &d10, &d11);

       /*
        * 1. Add second, fourth, sixth, eighth, tenth,
        *  twelfth digits
        * 2. Add first, third, seventh, ninth, and
        *  eleventh digits
        * 3. Multiply the first sum by 3, add it to 
        *  the second sum.
        * 4. Subtract 1 from the total
        * 5. Compute the remainder when the adjusted total
        *  is divided by ten.
        * 6. Subtract the remainder from 9.
        */
    
    sum1 = d1 + d3 + d5 + d7 + d9 + d11;
    sum2 = d0 + d2 + d4 + d6 + d8 + d10;

    total = (3 * sum1) + sum2;
    total -= 1;
    total %= 10;
    check = 9 - total;
    
    printf("Your check digit is %1d\n", check);

}