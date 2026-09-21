/*
Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) 
and calculate the distance between them, showing four decimal places, 
according to the formula:

Distance = √[(x2 − x1)² + (y2 − y1)²]

Input
The input file contains two lines of data. The first one contains two double values: x1 y1 and 
the second one also contains two double values with one digit after the decimal point: x2 y2.

1.0 7.0
5.0 9.0

Output
Calculate and print the distance value using the provided formula, with 4 decimal places.

4.4721
*/

#include <stdio.h>
#include <math.h>

int main() {
    printf("Welcome to the Distance Between Two Points Calculator.\n
        This program calculates the distance between two points in a plane.\n");

    double x_1;
    double y_1;
    double x_2;
    double y_2;

    double distanceBetweenPoints;

    printf("\nEnter the value of X1: ");
    scanf("%lf", &x_1);
    printf("Enter the value of Y1: ");
    scanf("%lf", &y_1);
    printf("Enter the value of X2: ");
    scanf("%lf", &x_2);
    printf("Enter the value of Y2: ");
    scanf("%lf", &y_2);

    distanceBetweenPoints = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));

    printf("\n%.4lf\n", distanceBetweenPoints);
    
    return 0;
}