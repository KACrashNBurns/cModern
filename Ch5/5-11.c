/*
 * Program Name: Write Num
 * Date: 8/2/2023
 * Purpose: write a program that asks the
 * user for a two digit number and then
 * prints the english word for that number.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

#include <stdio.h>

/* 
 * Hint: Use one switch to print the word for
 * the first digit.  Use a second switch to print
 * the word for the second digit.  Don't forget
 * ceratain numbers like 11, 12 etc receive
 * special treatment.
 */

void main(void)
{
    int num, tens, ones;
    num = tens = ones = 0;

    // get input from user
    printf("Enter a two digit number: ");
    scanf("%2d", &num);

    ones = num % 10;
    tens = num / 10;

    printf("You entered the number ");

    switch (tens) {
        case 0 :
            switch (ones) {
                case 1:
                    printf("One\n");
                break;

                case 2:
                    printf("Two\n");
                break;

                case 3:
                    printf("Three\n");
                break;

                case 4:
                    printf("Four\n");
                break;

                case 5:
                    printf("Five\n");
                break;

                case 6:
                    printf("Six\n");
                break;

                case 7:
                    printf("Seven\n");
                break;

                case 8:
                    printf("Eight\n");
                break;

                case 9:
                    printf("Nine\n");
                break;
            }

        case 1 :
            switch (ones) {
                case 0:
                    printf("Ten\n");
                break;
                
                case 1:
                    printf("Eleven\n");
                break;

                case 2: 
                    printf("Twelve\n");
                break;
                
                case 3:
                    printf("Thirteen\n");
                break;

                case 4:
                    printf("Fourteen\n");
                break;

                case 5:
                    printf("Fifteen\n");
                break;

                case 6:
                    printf("Sixteen\n");
                break;

                case 7:
                    printf("Seventeen\n");
                break;

                case 8:
                    printf("Eighteen\n");
                break;

                case 9:
                    printf("Nineteen\n");
                break;
            }
        break;

        case 2:
            printf("Twenty");
            break;
        case 3:
            printf("Thirty");
            break;
        case 4:
            printf("Fourty");
            break;
        case 5:
            printf("Fifth");
            break;
        case 6:
            printf("Sixty");
            break;
        case 7:
            printf("Seventy");
            break;
        case 8:
            printf("Eighty");
            break;
        case 9:
            printf("Ninety");
            break;
    }

    if (num > 20){
    switch (ones) {
            case 0:
                printf("\n");
            break;

            case 1:
                printf("-One\n");
            break;

            case 2:
                printf("-Two\n");
            break;

            case 3:
                printf("-Three\n");
            break;

            case 4:
                printf("-Four\n");
            break;

            case 5:
                printf("-Five\n");
            break;

            case 6:
                printf("-Six\n");
            break;

            case 7:
                printf("-Seven\n");
            break;

            case 8:
                printf("-Eight\n");
            break;

            case 9:
                printf("-Nine\n");
            break;
            }   
        } else {
        printf("\n");
    }
}
