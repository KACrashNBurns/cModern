/*
 * Program Name: Reverse Digits
 * Date: 8/1/2023
 * Purpose: extend the program from 4-1
 * to work with three numbers.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 4 of the book.
 */

#include <stdio.h>

void main(void)
{

    int num, onesDigit, tensDigit, hundredsDigit;
    num = onesDigit = tensDigit = hundredsDigit = 0;
    
    // Get user input
    printf("Enter a three digit number: ");
    scanf("%d", &num);
 
    // Separate the digits.
    // Note n % 10 is the last number, if base 10
    // Note n / 10 is the first number with the
    // last digit removed, if base 10 because of
    // how integer division is performed in c.

    onesDigit = num % 10;
    num /= 10;
    // printf("%d\n", onesDigit);
    tensDigit = num % 10;
    // printf("%d\n", tensDigit);
    hundredsDigit = num / 10;
    // printf("%d\n", hundredsDigit);

    // Print the number in reverse
    printf("Your number reversed is %d%d%d\n", onesDigit, tensDigit, hundredsDigit);

    // Note might be able to use a for loop or 
    // a while loop to do this more efficiently.

}