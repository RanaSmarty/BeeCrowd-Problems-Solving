/*
Little John wants to calculate and show the amount of spent fuel liters on a trip, using a car that does 12 Km/L. 
For this, he would like you to help him through a simple program. To perform the calculation, you have to read spent time (in hours) 
and the same average speed (km/h). In this way, you can get distance and then, calculate how many liters would be needed. 
Show the value with three decimal places after the point.

Input
The input file contains two integers. The first one is the spent time in the trip (in hours). 
The second one is the average speed during the trip (in Km/h).

10 hours
85 km/h

Output
Print how many liters would be needed to do this trip, with three digits after the decimal point.

70.833
*/

#include <stdio.h>

int main() {
    printf("Welcome to Fuel Spent Calculation Station.\n");

    int spentTime;
    int averageSpeed;
    int distance;
    double spentFuel;

    printf("Time spent in the trip (hour): ");
    scanf("%d", &spentTime);
    printf("\nEnter the average speed (km/h): ");
    scanf("%d", &averageSpeed);

    distance = spentTime * averageSpeed;
    spentFuel = distance / 12.0; 

    printf("\n%.3lf", spentFuel);

    return 0;
}