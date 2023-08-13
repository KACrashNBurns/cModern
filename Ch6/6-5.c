/*
 * Program Name: reverse numbers
 * Date: 8/6/2023
 * Purpose: Rewrite project 1 in chapter four
 * to accept a number with any amount of digits.
 * Use a do loop that repeatedly divides the number
 * by 10 stopping when it reaches zero.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

#include <stdio.h>

int main(void) 
{
    int num = 0;
    
    // get user input
    printf("Enter any integer: ");
    scanf("%d", &num);

    // algorithm to reverse the numbers
    do {
        printf("%d", num % 10);
        num /= 10;
    } while (num != 0);

    // print a blank line after printing the
    // number in reverse, just to make it look
    // pleasing to the eye.
    printf("\n");

    return 0;
}