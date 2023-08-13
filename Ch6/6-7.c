/*
 * Program Name: squares
 * Date: 8/6/2023
 * Purpose: rearrange the square3.c program 
 * so that the for loop initializes i, tests i,
 * and increments i.  Don't rewrite the program,
 * in particular do not use any multiplication.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

#include <stdio.h>

// Prints a table of squares using an odd method.

int main(void)
{
    int i, n, odd, square;

    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in the table: ");
    scanf("%d", &n);

    for (int i = 1, odd = 3, square = 1;
        i <= n; odd += 2, ++i) {
            printf("%10d%10d\n", i, square);
            square += odd;
        }

    return 0;
}