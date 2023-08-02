/*
 * Program Name: 24h to 12h
 * Date: 7/31/2023
 * Purpose: write a program that asks the user
 * to enter a time in 24 hour format and then
 * convert it to display the time in 12 hour
 * format.  Do not display 12:00 as 0:00.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

#include <stdio.h>

void main(void)
{
    unsigned int hours, minutes;
    hours = minutes = 0;

    printf("Enter a time in 24 hour format: ");
    scanf("%u:%u", &hours, &minutes);

    if (hours <= 12) {
        printf("Equivalent 12 hour time: %2d:%2d\n", hours, minutes);
    } else {
        printf("Equivalent 12 hour time is %2d:%2d\n", (hours - 12), minutes);
    }

}
