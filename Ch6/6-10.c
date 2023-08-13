/*
 * Program Name: Earliest Date
 * Date: 8/6/2023
 * Purpose: Rewrite project 5-9.c so that the
 * user may enter any amount of dates.  Entering
 * 0/0/0 wil indicate that not more dates will
 * be entered.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

#include <stdio.h>


int main(void)
{
    int month, day, year;
    float minDays, daysInDate;
    minDays = daysInDate = 0.00f;
    int minMonth, minDay, minYear;
    minDay = minMonth =  minYear = 0;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);
    minMonth = month;
    minDay = day;
    minYear = year;
    minDays = (365.25 * year + 365.25 / 12 * month + day);

    while (1) {
        printf("Enter another date (0/0/0 to stop): ");
        scanf("%2d/%2d/%4d", &month, &day, &year);
        if (month == 0 && day == 0 & year == 0) {
            break;
        } else {
            daysInDate = ((365.25 * year) + (365.25 / 12 * month) + day);
            if (daysInDate < minDays) {
                minMonth = month;
                minDay = day;
                minYear = year;
                minDays = daysInDate;
            }
        }
    }

        printf("Earliest date is %2d/%2d/%4d\n", minMonth, minDay, minYear);
    
    return 0;
}