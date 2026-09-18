/*
Read two integer values, in this case, the variables A and B. After this, calculate the sum between them and assign 
it to the variable SOMA. Write the value of this variable.

Input:
The input file contains 2 integer numbers.

Output:
Print the message "SOMA" with all the capital letters, with a blank space before and after the equal signal followed by 
the corresponding value to the sum of A and B.
Like all the problems, don't forget to print the end of line, otherwise you will receive "Presentation Error"

*/

#include <stdio.h>
int main() {
    printf("Welcome to Simple Sum Calculator.\n");

    int A;
    int B;
    int SOMA;

    printf("\nEnter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B);

    SOMA = A + B;

    printf("\nSOMA = %d", SOMA);
    return 0;
}