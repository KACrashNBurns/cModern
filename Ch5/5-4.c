/*
 * Program Name: Wind Speed
 * Date: 8/1/2023
 * Purpose: Apply income wind speed brackets
 * to the wind speed in knots then apply the
 * Beaufort scale used to estimate wind speed.
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 5 of the book.
 */

#include <stdio.h> 

// Define the scale
#define CALM 1
#define LIGHT 3
#define BREEZE 27
#define GALE 47
#define STORM 63


void main(void)
{
    float windSpeed = 0;

    // Get user input
    printf("Enter the wind speed in knots: ");
    scanf("%f", &windSpeed);

    // Calculate the scale
    if (windSpeed <= CALM) {
        printf("Weather is Calm.\n");
    } else if (windSpeed > CALM && windSpeed <= LIGHT) {
        printf("Weather is Light Air.\n");
    } else if (windSpeed > LIGHT && windSpeed <= BREEZE) {
        printf("Weather is Breezey.\n");
    } else if (windSpeed > BREEZE && windSpeed <= GALE) {
        printf("Weather is Galeforce.\n");
    } else if (windSpeed > GALE && windSpeed <= STORM) {
        printf("Weather is Stormy.\n");
    } else {
        printf("Weather is a Hurricane.\n");
    }
}
