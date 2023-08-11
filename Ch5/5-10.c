/*
 * Program Name: Grades
 * Date: 8/2/2023
 * Purpose: Use a switch statement to convert
 * a numerical grade to a letter grade.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

#include <stdio.h>

void main(void)
{
    int numGrade = 0;
    int tens = 0;
    
    printf("Enter the numerical grade: ");
    scanf("%d", &numGrade);
    tens = numGrade / 10;

    // printf("%d", tens);
    
    if (numGrade > 100 || numGrade < 0) {
        printf("Invalid input detected.\n");\
    } else if (numGrade == 100) {
        printf("Grade is an A.\n");
    } else {
        switch (tens) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                printf("Grade is an F.\n");
                break;
            case 6:
                printf("Grade is a D.\n");
                break;
            case 7:
                printf("Grade is a C.\n");
                break;
            case 8: 
                printf("Grade is a B.\n");
                break;
            case 9:
                printf("Grade is an A.\n");
            default: 
                printf("Invalid input detected.\n");
        }
    }
}