/*
 * Program Name: Calendar;
 * Date: 8/6/2023
 * Purpose: write a program that prints a one-
 * month calendar.  The user specifies the number
 * of days in the month, and teh day of 
 * the week on which the month begins.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

#include <stdio.h>

int main(void) {
    int daysInMonth = 0;
    int startingDay = 0; // (1 = Sun, 7 = Sat);

    // get user input
    printf("Enter the number of days in the month: ");
    scanf("%d", &daysInMonth);
    printf("Enter the starting day of the week (1 = Sun, 7 = Sat): ");
    scanf("%d", &startingDay);

    // printf("S M T W R F S\n");

    // printing algorithm
    // First for statement prints out blanks for the
    // empty days at the beginning of the week.
    for (int i = 1; i < startingDay; i++) {
        printf("   ");
    }

    // Second for statement prints out the days and checks
    // for the end of the week.  Prints a new line at the
    // end of the week.
    for (int i = 1, j = startingDay; i <= daysInMonth; i++, j++) {
        if (j % 7 == 0) {
            printf("%2d \n", i);
        } else {
            printf("%2d ", i);
        }
    }

    // print a new line because I like it that way.
    printf("\n");

    return 0;

}