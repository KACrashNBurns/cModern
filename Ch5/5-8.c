/*
 * Program Name: Flights
 * Date: 8/2/2023
 * Purpose: write a program that asks
 * the user to enter a time in minutes and hours
 * using 24 hour format.  THen display the
 * departure time and arrival times for the flight
 * whose departure time is closest to the entered
 * time.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

/* 
 * Hint: Convert input to a time expressed in minutes since
 * midnite and compare to the departure times expressed in
 * minutes since midnite.
 */

#include <stdio.h>

void main(void) {
    
    int enteredHours, enteredMins, minFromMidnite;
    enteredHours = enteredMins = minFromMidnite = 0;

    // establish departure times in minutes from midnite
    const int flight1DepartMin = (8 * 60); 
    const int flight2DepartMin = (9 * 60) + 43;
    const int flight3DepartMin = (11 * 60) + 19;
    const int flight4DepartMin = (12 * 60) + 47;
    const int flight5DepartMin = (14 * 60);
    const int flight6DepartMin = (15 * 60) + 45;
    const int flight7DepartMin = (19 * 60);
    const int flight8DepartMin = (21 * 60) + 45;


    // get user input 
    printf("Enter a time in 24 hour format: ");
    scanf("%2d:%2d", &enteredHours, &enteredMins);

    // calculate minutes from midnite
    minFromMidnite = enteredMins + (enteredHours * 60);

    // printf("You entered %2d:%2d\n", enteredHours, enteredMins);
    // printf("This is %d minutes from midnite.\n", minFromMidnite);

    // comparison algorithm.
    if (minFromMidnite < flight1DepartMin) {
        printf("Closest departure time is 8:00am, arriving at 10:16am.\n");
    } else if (minFromMidnite < flight1DepartMin + ((flight2DepartMin - flight1DepartMin) / 2)) {
        printf("Closest departure time is 8:00am, arriving at 10:16am.\n");
    } else if (minFromMidnite < flight2DepartMin + ((flight3DepartMin - flight2DepartMin) / 2)) {
        printf("Closest departure time is 9:43am, arriving at 11:52am.\n");
    } else if (minFromMidnite < flight3DepartMin + ((flight4DepartMin - flight3DepartMin) / 2)) {
        printf("Closest departure time is 11:19am, arriving at 1:31pm.\n");
    } else if (minFromMidnite < flight4DepartMin + ((flight5DepartMin - flight4DepartMin) / 2)) {
        printf("Closest departure time is 12:47pm, arriving at 3:00pm.\n");
    } else if (minFromMidnite < flight5DepartMin + ((flight6DepartMin - flight5DepartMin) / 2)) {
        printf("Closest departure time is 2:00pm, arriving at 4:08pm.\n");
    } else if (minFromMidnite < flight6DepartMin + ((flight7DepartMin - flight6DepartMin) / 2)) {
        printf("Closest departure time is 3:45pm, arriving at 5:55pm.\n");
    } else if (minFromMidnite < flight7DepartMin + ((flight8DepartMin - flight7DepartMin) / 2)) {
        printf("Closest departure time is 7:00pm, arriving at 9:20pm.\n");
    } else {
        printf("Closest departure time is 9:45pm, arriving at 11:58pm.\n");
    }
}