#include <stdio.h>
int main() {
    int A;
    int B;
    int X;

    printf("Welcome to Basic Addition Calculator!\n");
    printf("Enter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B);

    X = A + B;
    printf("Result of two number is %d\n", X);
    return 0;
}