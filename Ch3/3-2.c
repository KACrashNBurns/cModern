/*
 * Program Name: Product Info
 * Date: 7/31/2023
 * Purpose: have the user enter information
 * about a product and then display it
 * on screen in tabulated format.  Number
 * and date should be left justified, unit
 * price should be right justified to allow
 * up to dollar amounts of $9999.99.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 3 of the book.
 */

#include <stdio.h>

void main()
{
    int itemNumber, month, day, year;
    itemNumber = month = day = year = 0;
    float unitPrice = 0.00f;

    printf("Enter the item number: ");
    scanf("%d", &itemNumber);
    printf("Enter the unit price: " );
    scanf("%f", &unitPrice);
    printf("Enter the purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-d\t\t%6.2f\t\t%-2d/%-2d/%-4d", itemNumber, unitPrice, month, day, year);

}