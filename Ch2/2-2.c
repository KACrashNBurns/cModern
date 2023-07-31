/*
 * Program Name: Volume of a Sphere
 * Date: 7/31/2023
 * Purpose: compute the volume of a sphere
 * as a project from the book C Programming, 
 * A Modern Approach, by K. N. King.  This 
 * project is found in chapter 2 of the book.
 * Domain Knowledge:
 * v = 4/3 * pi * r^3.
 * c doesn't have a built in exponention operator
 * make sure to use float division instead of integer
 * division because c truncates integer division.
 */

#include <stdio.h>

#define PI 3.14f

void main()
{
    // Finds the volume of a sphere with a
    // radius of 10 meters.  Should output
    // 4186.666... m^3 note that there may
    // be a small difference due to approximation
    // of the value of pi.
    
    float volume = ((4.0f / 3.0f) * PI * 10 * 10 * 10);
    printf("Volume of a sphere with a 10 meter radius is %f m^3.\n",
        volume);
}