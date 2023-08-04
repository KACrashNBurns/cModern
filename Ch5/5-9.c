/*
 * Program Name: Earlier Date
 * Date: 8/2/2023
 * Purpose: write a program that prompts the 
 * user to enter two daates, then displays
 * the dates in order of earlies to latest.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

#include <stdio.h>

#define DAYSINYEAR 365.25f
#define DAYSINMONTH 365.25f / 12.00f

void main(void) {
    int month0, day0, year0;
    int month1, day1, year1;
    int daysInDate0, daysInDate1;

    // get the input
    printf("Enter the first date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month0, &day0, &year0);
    printf("Enter the second date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month1, &day1, &year1);

    // compare the dates
    // note, this will not work for dates BCE...
    daysInDate0 = (float) day0 + (month0 * DAYSINMONTH) + (year0 * DAYSINYEAR);
    daysInDate1 = (float) day1 + (month1 * DAYSINMONTH) + (year1 * DAYSINYEAR);

    if (daysInDate0 > daysInDate1) {
        printf("%2d/%2d/%4d is earlier than %2d/%2d/%4d.\n", month1, day1, year1, month0, day0, year0);
    } else if (daysInDate1 > daysInDate0) {
        printf("%2d/%2d/%4d is earlier than %2d/%2d/%4d.\n", month0, day0, year0, month1, day1, year1);
    } else {
        printf("Dates are equal.\n");
    }
}