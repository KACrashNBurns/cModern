/*
 * Program Name: grid
 * Date: 7/31/2023
 * Purpose: Have the user enter numbers from
 * 1 to 16 in any order, then display numbers
 * in a 4 x 4 arrangement, sum the rows, columns,
 * and diagonals.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 3 of the book.
 */

#include <stdio.h>

void main()
{
    int number1, number2, number3, number4;
    int number5, number6, number7, number8;
    int number9, number10, number11, number12;
    int number13, number14, number15, number16;

    number1 = number2 = number3 = number4 = number5 =
    number6 = number7 = number8 = number9 = number10 =
    number11 = number12 = number13 = number14 = number15 =
    number16 = 0;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
        &number1, &number2, &number3, &number4,
        &number5, &number6, &number7, &number8,
        &number9, &number10, &number11, &number12,
        &number13, &number14, &number15, &number16);

    printf("%2d %2d %2d %2d\n", number1, number2, number3, number4);
    printf("%2d %2d %2d %2d\n", number5, number6, number7, number8);
    printf("%2d %2d %2d %2d\n", number9, number10, number11, number12);
    printf("%2d %2d %2d %2d\n", number13, number14, number15, number16);

    int row1, row2, row3, row4;
    row1 = row2 = row3 = row4 = 0;
    int col1, col2, col3, col4;
    col1 = col2 = col3 = col4 = 0;
    int diag1, diag2;
    diag1 = diag2 = 0;

    row1 = number1 + number2 + number3 + number4;
    row2 = number5 + number6 + number7 + number8;
    row3 = number9 + number10 + number11 + number12;
    row4 = number13 + number14 + number15 + number16;

    col1 = number1 + number5 + number9 + number13;
    col2 = number2 + number6 + number10 + number14;
    col3 = number3 + number7 + number11 + number15;
    col4 = number4 + number8 + number12 + number16;

    diag1 = number1 + number6 + number11 + number16;
    diag2 = number4 + number7 + number10 + number13;

    printf("Rows sums: %d %d %d %d\n", row1, row2, row3, row4);
    printf("Cols sums: %d %d %d %d\n", col1, col2, col3, col4);
    printf("Diag sums: %d %d\n", diag1, diag2);


}