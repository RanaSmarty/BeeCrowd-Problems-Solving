/*
The formula to calculate the area of a circumference is defined as A = π . R2. Considering to this problem that π = 3.14159:

Calculate the area using the formula given in the problem description.

Input
The input contains a value of floating point (double precision), that is the variable R.
*/

#include <stdio.h>
#define PI 3.14159
int main() {

    double R;
    
    printf("Welcome to Area Calculation Center.\n");
    printf("Enter the radius of the circumference: ");
    scanf("%lf", &R);
    
    double A = (PI * (R * R));

    printf("\nArea of the circumference: %.4lf", A);
    return 0;
}