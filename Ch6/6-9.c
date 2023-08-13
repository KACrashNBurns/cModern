/*
 * Program Name: Loan Balances;
 * Date: 8/6/2023
 * Purpose: rewrite project 2-8.c so  that the user
 * can enter a number of payments.  The program will
 * display the balance remaining after each payment..
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

#include <stdio.h>

int main(void) {
    float amountOfLoan, rate, payment;
    int numPayments = 0;
    amountOfLoan = rate = payment = 0;

    // Get User Input
    printf("This program will calculate the balance due after\n");
    printf("each payment for n number of payments.\n");
    printf("Enter the loan amount: ");
    scanf("%f", &amountOfLoan);
    printf("Enter the annual rate: ");
    scanf("%f", &rate);
    printf("Enter the amount of the payment: ");
    scanf("%f", &payment);
    printf("Enter the number of payments: ");
    scanf("%d", &numPayments);
    
    // Convert to periodic rate
    rate /= 100;
    rate /= 12;


    // While loop to display payments
    // not I used a while loop which tests two conditions.
    // First its tests payment number vs. num payments entered
    // by the user.  Second it tests if the loan balance
    // is equal or greater than zero.  Entering a subtantially
    // high amount of payments should calculate out to the end
    // of the loan.
    int i = 0;
    while (i < numPayments && amountOfLoan >= 0) {
        amountOfLoan *= (1 + rate);
        amountOfLoan -= payment;

        printf("Balance of loan remaining after payment %d: $%.2f\n", i + 1, amountOfLoan);

        i++;
        
    }
}