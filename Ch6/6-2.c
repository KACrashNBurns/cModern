/*
 * Program Name: GCD
 * Date: 8/4/2023
 * Purpose: Write a program that asks the user
 * to enter two integers then calculates and
 * displays the GCD.  Use Euclids Algorithm.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 6 of the book.
 */

/* Euclids alrogorithm:
 * for m and n which contain up to two numbers
 * if n is zero then stop, m contains the GCD.
 * Otherwise compute the remainder when m is
 * divided by n.  Copy n into m and copy
 * the remainder into n.  The repeat starting with
 * whether n is zero.
 */

#include <stdio.h>

void main(void) {
    int m = 0;
    int n = 0;
    int gcd = 0;
    int remainder = 0;


    printf("Enter the fist number containing up to two digits: ");
    scanf("%2d", &m);
    printf("Enter the second number containing up to two digits: ");
    scanf("%2d", &n);

    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    gcd = m;

    printf("Greatest common divisor is: %2d\n", gcd);

}