/*
 * Program Name: Largest Num
 * Date: 8/4/2023
 * Purpose: Write a program that displays the
 * largest in a series of numbers.  It will 
 * prompt the user to enter a series of numbers
 *  and after the user enters 0 or a negative
 * number it will display the largest number.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 6 of the book.
 */

# include <stdio.h>

void main(void) {
    // i chose to use a do while loop so that I
    // can initialize the num to zero.  This way 
    // the loop will always run at least one time.
    // even if the sentinel value is true.

    float num = 0.00f;
    float max = 0.00f;
    
    do {
        printf("Enter a number (0 or negative to quit): ");
        scanf("%f", & num);
        if (num > max) {
            max = num;
        }
    } while (num > 0);

    printf("The largerst number entered was %f.\n", max);

}