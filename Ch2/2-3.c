/*
 * Program Name: Volume of a Sphere v2.0
 * Date: 7/31/2023
 * Purpose: compute the volume of a sphere
 * using input from the user for the radius
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
    // radius of radius meters.
    float radius = 0.0f;

    printf("Enter the radius of the sphere in meters: ");
    scanf("%f", &radius);

    float volume = ((4.0f / 3.0f) * PI * radius * radius * radius);
    printf("Volume of a sphere with a %f meter radius is %f m^3.\n",
        radius, volume);
}