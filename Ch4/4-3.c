/*
 * Program Name: Reverse Digits
 * Date: 8/1/2023
 * Purpose: rewrite the program from project
 * 2 to reverse the numbers without using
 * arithmetic.  See the UPC example in 
 * section 4.1 for help.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 4 of the book.
 */

#include <stdio.h>

void main(void)
{
    
    int ones, tens, hundreds;
    ones = tens = hundreds = 0;

    // get the input, try using scanf to break
    // the stream into three digits without spaces
    // between.  Note per the upc example use format
    // specifiers in scanf to make sure it only picks
    // up one digit at a time, or else it will read 
    // the entire stream up to the press of enter as
    // one "digit".

    // Could we use shorts to make this program more
    // efficient or perhaps unsigned ints?  If the
    // user enters negative numbers then the program
    // won't work as intended.
    
    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &hundreds, &tens, &ones);

    // Reverse the number
    printf("Your number reversed is %1d%1d%1d\n", ones, tens, hundreds);


}