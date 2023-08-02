/*
 * Program Name: Reverse Digits
 * Date: 8/1/2023
 * Purpose: write a program that asks the
 * user to enter a two digit number
 * and then prints the digits in reverse
 * order.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 4 of the book.
 */

#include <stdio.h>

void main(void)
{

    int num, onesDigit, tensDigit;
    num = onesDigit = tensDigit = 0;
    
    // Get user input
    printf("Enter a two digit number: ");
    scanf("%d", &num);
 
    // Separate the digits.
    // Note n % 10 is the last number, if base 10
    // Note n / 10 is the first number with the
    // last digit removed, if base 10 because of
    // how integer division is performed in c.

    onesDigit = num % 10;
    tensDigit = num / 10;

    // Print the number in reverse

    printf("Your number reversed is %d%d\n", onesDigit, tensDigit);

}