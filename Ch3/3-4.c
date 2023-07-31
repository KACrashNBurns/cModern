/*
 * Program Name: Telephone Number
 * Date: 7/31/2023
 * Purpose: have the user enter information
 * in the form of an telephone number 
 * (xxx) xxx-xxxx and display in the format
 * xxx.xxx.xxxx.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 3 of the book.
 */

#include <stdio.h>

void main()
{
    int areaCode, prefix, line;
    areaCode = prefix = line = 0;

    printf("Enter a telephone number in the format (xxx) xxx-xxxx: ");
    scanf("(%d) %d-%d", &areaCode, &prefix, &line);

    printf("You entered the number %3d.%3d.%4d\n", areaCode, prefix, line);
}