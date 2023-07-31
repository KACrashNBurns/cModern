/*
 * Program Name: ISBN
 * Date: 7/31/2023
 * Purpose: have the user enter information
 * in the form of an ISBN and break down the 
 * number into its component parts.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 3 of the book.
 */

#include <stdio.h>

void main()
{

    int prefix, group, publisher, itemNumber, checkDigit;
    prefix = group = publisher = itemNumber = checkDigit = 0;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &itemNumber, &checkDigit);

    printf("GS1 prefix: %d\n", prefix);
    printf("Group Identifier: %d\n", group);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", itemNumber);
    printf("Check digit: %d\n", checkDigit);

}