/*
 * Program Name: Octal
 * Date: 8/1/2023
 * Purpose: write a program that reads an integer
 * entered by the user and diplays it in octal
 * (base 8)
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 4 of the book.
 */

#include <stdio.h>

void main(void)
{
    // The output should be displayed using 5 digits
    // even if there are less than 5 total digits.
    // To convert to octal first divide by 8, the remainder
    // is the last digit of the process. Then divide the
    // original number by 8 and repeat the process.
    // to arrive at the next to last digit.

    int num, d00008, d00080, d00800, d08000, d80000;
    num = 0;

    // get input
    printf("Enter a number in base 10: ");
    scanf("%d", &num);

    // convert the number
    d00008 = num % 8;
    num /= 8;
    d00080 = num % 8;
    num /= 8;
    d00800 = num % 8;
    num /= 8;
    d08000 = num % 8;
    num /= 8;
    d80000 = num;

    // print the output
    printf("Your number in octal is %1d%1d%1d%1d%1d\n", 
        d80000, d08000, d00800, d00080, d00008);

}