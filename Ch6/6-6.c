/*
 * Program Name: Even Sqaures;
 * Date: 8/6/2023
 * Purpose: write a program that prompts the user
 * to enter a number then prints all even squares
 * between 1 and the number.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

#include <stdio.h>

int main(void)
{
    int n = 0;

    // get user input
    printf("This program will output the even squares between 1 and the integer you enter.\n");
    printf("Please enter an integer: ");
    scanf("%d", &n);

    // squaring algorithm using a for loop.
    for (int i = 2; (i * i) <= n; i += 2) {
        printf("%d\n", (i * i));
    }

    return 0;

}