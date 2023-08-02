/*
 * Program Name: Broker
 * Date: 7/31/2023
 * Purpose:  modify the broker program
 * in section 5.2 to make the following
 * changes.
 * 1. Ask the user to enter a number of shares
 *  and the price per share, instead of the trade.
 * 2. Add statements that compute the commission
 *  charged by a rival broker.
 *  $33 plus 3cents per share for fewer than
 *  2000 shares, and $33 plus 2cents per share
 *  for more than 2000 shares.
 * 3. Display the rival's commission and
 *  the commission charged by the actual broker.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

#include <stdio.h>

// Define OUR Rates and Brackets
#define OURMINCHARGE 39.00f
#define OURFIRSTBRACKET 2500.00f
#define OURSECONDBRACKET 6250.00f
#define OURTHIRDBRACKET 20000.00f
#define OURFOURTHBRACKET 50000.00f
#define OURFIFTHBRACKET 500000.00f

// Define RIVAL Rates
#define RIVALFLATRATE 33.00f
#define RIVALLESSTHAN2000 0.03f
#define RIVALMORETHAN2000 0.02f


void main(void)
{
    // Calculates a broker's commission.
    float actualCommission, rivalCommission, numShares, pricePerShare, total;
    printf("Enter the number of shares traded followed by <enter>: ");
    scanf("%f", &numShares);
    printf("Enter the price per share followed by <enter>: ");
    scanf("%f", &pricePerShare);
    

    // Compute OUR Commission
    total = numShares * pricePerShare;
    if (total < OURFIRSTBRACKET){
        actualCommission = 30.00f + .017f * total;
    } else if (total < OURSECONDBRACKET) {
        actualCommission = 56.00f + .0066f * total;
    } else if (total < OURTHIRDBRACKET) {
        actualCommission = 76.00f + .0034f * total;
    } else if (total < OURFOURTHBRACKET) {
        actualCommission = 100.00f + .0022f * total;
    } else if (total < OURFIFTHBRACKET) {
        actualCommission = 155.00f + .0011f * total; 
    } else {
        actualCommission = 255.00f + .0009f * total;
    }

    if (actualCommission < 39.00f) {
        actualCommission = 39.00f;
    }

    // Calculate RIVALS price
    
    if (numShares < 2000.00f) {
        rivalCommission = RIVALFLATRATE + RIVALLESSTHAN2000 * numShares;
    } else {
        rivalCommission = RIVALFLATRATE + RIVALMORETHAN2000 * numShares;
    }

    // Print the output.

    printf("Our Commission equals: $%.2f\n", actualCommission);
    printf("Our Competitors Commission equals: $%.2f\n", rivalCommission);

}