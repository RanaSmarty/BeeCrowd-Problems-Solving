/*
Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).

Input
The input file contains two values: one integer value X representing the total distance (in Km) 
and the second one is a floating point number Y  representing the spent fuel total, with a digit after the decimal point.

500
35.0

Output
Present a value that represents the average consumption of a car with 3 digits after the decimal point, 
followed by the message "km/l".

14.286 km/l
*/

#include <stdio.h>

int main() {

    printf("Welcome to the Car Average Consumption Calculator.\n");

    int X; // Representing the total distance (in Km)
    double Y; // Representing the spent total fuel, with a digit after the decimal point. (in liters) 

    printf("\nEnter total distance you traveled: ");
    scanf("%d", &X);
    printf("Now, enter total fuel spent in liters: ");
    scanf("%lf", &Y);

    double averageConsumption = X / Y;

    printf("\n%.3lf", averageConsumption);
    printf(" km/l");

    return 0;
}