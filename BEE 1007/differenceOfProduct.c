/*
Read four integer values named A, B, C and D. 
Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).

Input
The input file contains 4 integer values.
5
6
7
8

Output
Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters, according to the following example, 
with a blank space before and after the equal signal.

DIFERENCA = -26
*/


#include <stdio.h>
int main() {
    printf("Welcome to Product Difference Calculation Station.\n");

    int A;
    int B;
    int C;
    int D;
    
    printf("\nEnter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B);
    printf("Enter the value of C: ");
    scanf("%d", &C);
    printf("Enter the value of D: ");
    scanf("%d", &D);

    int differenceOfProduct = (A * B) - (C * D);

    printf("\nDIFERENCA = %d\n", differenceOfProduct);
    return 0;
}