/*
 * Program Name: UPC Check Digit
 * Date: 8/1/2023
 * Purpose: Modify the project form 4.1 so that
 * it checks whether a upc is valid after entering
 * a UPC the program will display valid or invalid.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

#include <stdio.h>

#define VALID = 1
#define INVALID = 0

void main(void)
{
    int d, i1, i2, i3, i4, i5,
        j1, j2, j3, j4, j5, c;
    int first_sum, second_sum, total;

    
    d = i1 = i2 = i3 = i4 = i5 =
    j1 = j2 = j3 = j4 = j5 = c = 0;
    first_sum = second_sum = total = 0;
    
    // Computes a upc check digit
    printf("Enter the 11 digit US UPC code plus check digit to analyze: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &d, 
        &i1, &i2, &i3, &i4, &i5,
        &j1, &j2, &j3, &j4, &j5,
        &c);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = (3 * first_sum) + second_sum;

    // print output
    printf("Check digit as calculated is: %d\n", 9 - ((total - 1) % 10));
    if ((9 - ((total - 1) % 10) == c)) {
        printf("VALID\n");
    } else {
        printf("INVALID\n");
    }

    // could we use an array instead?

}