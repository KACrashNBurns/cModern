/*
 * Program Name: MIN and MAX
 * Date: 8/1/2023
 * Purpose: write a program to check for the min
 * and max of four integers enterd by the user.
 * Use as few if statemetns as possible.
 * Hint four if statements should be enough.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

#include <stdio.h>

void main(void) {
    int i0, i1, i2, i3, min, max;
    i0 = i1 = i2 = i3 = min = max = 0;
    int swap = 0;
    
    // get user input
    printf("Enter four integers separated by spaces: ");
    scanf("%d %d %d %d", &i0, &i1, &i2, &i3);

    if (i0 > i1) {
        max = i0;
        min = i1;
    } else {
        max = i1;
        min = i0;
    }

    if (i2 > max) {
        max = i2;
    } else if (i2 < min) {
        min = i2;
    }

    if (i3 > max) {
        max = i3;
    } else if (i3 < min) {
        min = i3;
    }


    printf("max = %d, min = %d\n", max, min);

}