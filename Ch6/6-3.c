/*
 * Program Name: Lowest Terms
 * Date: 8/4/2023
 * Purpose: Write a program that asks the user
 * to enter a fraction then display the fraction
 * in its lowest terms.  Find the gcd of the
 * numerator and denominator and divide
 * both numerator and denominator by that gcd.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 6 of the book.
 */

#include <stdio.h>

void main(void)
{
    int num, den, remainder;
    num = den = remainder = 0;
    int a, b;
    a = b = 0;
    int gcd = 0;

    printf("Enter a fraction in the form a/b: ");
    scanf("%2d/%2d", &num, &den);

    a = num;
    b = den;

    // Find GCD
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    gcd = a;
    // printf("GCD = %d", gcd);

    // calculate lowest terms
    num /= gcd;
    den /= gcd;

    printf("In lowest terms: %d/%d\n", num, den);

}

