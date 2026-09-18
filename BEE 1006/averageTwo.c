/*
Read three values (variables A, B and C), which are the three student's grades. 
Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. 
Consider that each grade can go from 0 to 10.0, always with one decimal place.

Input
The input file contains 3 values of floating points (double) with one digit after the decimal point.

A = 5.0
B = 6.0
C = 7.0

Output
Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, 
with a blank space before and after the equal signal.

MEDIA = 6.3
*/

#include <stdio.h>
int main() {
    printf("Welcome to Average Calculating Station.\n");

    double A;
    double B;
    double C;
    double sumOfWeight = (2 + 3 + 5);

    printf("\nEnter the value of A: ");
    scanf("%lf", &A);
    printf("Enter the value of B: ");
    scanf("%lf", &B);
    printf("Enter the value of C: ");
    scanf("%lf", &C);

    double MEDIA = (A * 2 + B * 3 + C * 5) / sumOfWeight;
    
    printf("\nMEDIA = %.1lf\n", MEDIA);

    return 0;
}