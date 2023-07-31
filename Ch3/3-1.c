/*
 * Program Name: date Conversion
 * Date: 7/31/2023
 * Purpose: have the user enter a date in
 * the format mm/dd/yyyy and convert it to 
 * display in the format yyyymmdd.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 3 of the book.
 */

#include <stdio.h>

void main()
{

    int month, day, year;
    month = day = year = 0;

    printf("Enter a date in standard US format (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered %4.d%2.2d%2.2d\n", year, month, day);


}