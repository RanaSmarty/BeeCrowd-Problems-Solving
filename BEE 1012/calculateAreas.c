/*
Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.

Input
The input file contains three double values with one digit after the decimal point.

12.7 10.4 15.2

Output
The output file must contain 5 lines of data. Each line corresponds to one of the areas described above, 
always with a corresponding message (in Portuguese) and one space between the two points and the value. 
The value calculated must be presented with 3 digits after the decimal point.

TRIANGULO: 96.520
CIRCULO: 725.833
TRAPEZIO: 175.560
QUADRADO: 108.160
RETANGULO: 132.080
*/

#include <stdio.h>
#define PI 3.14159

int main() {
    printf("Welcome to Area Calculation Station.\n");
    
    double A; // Base
    double B; // Second base according to the instruction c. (the trapezium which has A and B by base, and C by height.)
    double C; // Height

    double triangleArea;
    double circleArea;
    double trapeziumArea;
    double squareArea;
    double rectangleArea;

    printf("\nEnter the value of A: ");
    scanf("%lf", &A);
    printf("Enter the value of B: ");
    scanf("%lf", &B);
    printf("Enter the value of C: ");
    scanf("%lf", &C);

    // Calculating the area of a triangle...
    triangleArea = (A * C) / 2;

    // Calculating the area of a circle...
    circleArea = PI * (C * C);

    // Calculating the area of a trapezium...
    trapeziumArea = ((A + B) * C )/ 2;

    // Calculating the area of a square according to instruction d. (the area of ​​the square that has side B.)
    squareArea = (B * B);

    // Calculating the area of a rectangle...
    rectangleArea = (A * B);

    printf("\nTRIANGULO: %.03lf\n", triangleArea);
    printf("CIRCULO: %.03lf\n", circleArea);
    printf("TRAPEZIO: %.03lf\n", trapeziumArea);
    printf("QUADRADO: %.03lf\n", squareArea);
    printf("RETANGULO: %.03lf\n", rectangleArea);

    return 0;
}