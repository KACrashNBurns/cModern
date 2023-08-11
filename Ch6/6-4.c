/*
 * Program Name: Broker Loop
 * Date: 8/4/2023
 * Purpose: Modify the broker program in 5.2
 * so that the user can enter multiple trades.
 * Should exit when the user enters 0.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 6 of the book.
 */

#include <stdio.h>

int main(void) {
    float commission, value;
    commission = value = 0.00f;

    do {
        printf("Enter the value of the trade: ");
        scanf("%f", &value);
    
        if (value < 2500.00f) {
            commission = 30.00f + .17f * value;
        } else if (value < 6250.00f) {
            commission = 56.00f + .066f * value;
        } else if (value < 20000.00f) {
            commission = 76.00f + .0034f * value;
        } else if (value < 50000.00f) {
            commission = 100.00f + .0022f * value;
        } else if (value < 500000) {
            commission = 155.00f + .0011f * value;
        } else {
            commission = 255.00f + .0009f * value;
        }

        if (commission < 39.00f) {
            commission = 39.00f;
        }

        printf("Commission: $%.2f\n", commission);

    } while (value != 0);

    return 0;
}