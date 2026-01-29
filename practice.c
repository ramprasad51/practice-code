// C program to calculate the straight line distance between two points 
#include<stdio.h>
#include<math.h>
void main() 
{
    float x1, y1, x2, y2;
    float distance;


    // Input coordinates of the first point
    printf("Enter the first coordinates: ");
    scanf("%f %f", &x1, &y1);
    // Input coordinates of the second point
    printf("Enter the second coordinates: ");
    scanf("%f %f", &x2, &y2);

    // Calculate the distance
    distance=sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("The straight line distance between the two points is: %.2f\n", distance);

}    