/*
Make a program that reads 3 integer values and present the greatest one 
followed by the message "eh o maior". 
Use the following formula:

MaiorAB = (a + b) + absolute (a - b) / 2

Input
The input file contains 3 integer values.

7 14 106

Output
Print the greatest of these three values followed by a space and the message “eh o maior”.

106 eh o maior
*/

#include <stdio.h>
int main() {
    printf("Welcome to the Greatest One Finder.\n");

    int A;
    int B;
    int C;

    printf("\nEnter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B);
    printf("Enter the value of c: ");
    scanf("%d", &C);

    // Maior means in English Greater/Greatest
    int maiorAB = ((A + B) + abs(A - B)) / 2;
    int maiorABC = ((maiorAB + C) + abs(maiorAB - C)) / 2;

    printf("%d", maiorABC);
    printf(" eh o maior\n");

    return 0;
}