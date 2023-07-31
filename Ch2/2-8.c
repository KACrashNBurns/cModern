/*
 * Program Name: Loan Balance
 * Date: 7/31/2023
 * Purpose: calculate the remaining balance
 * on a loanafter the first, second, and 
 * third payments.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 2 of the book.
 */

#include <stdio.h>

void main()
{

    float amountOfLoan = 0.0f;
    float rate = 0.0f;
    float payment = 0.0f;

    // get inputs from user
    printf("Enter the initial amount of the loan: ");
    scanf("%f", &amountOfLoan);
    printf("Enter the interest rate: ");
    scanf("%f", &rate);
    printf("Enter the monthly payment: ");
    scanf("%f", &payment);

    // calculate results
    rate = rate / 100.0f / 12.0f;

    for (int i = 0; i < 3; i++){
        amountOfLoan *= (1 + rate);
        amountOfLoan -= payment;
        printf("Amount of loan after %d payment:\t$%.2f\n", i + 1, amountOfLoan);
    }
}