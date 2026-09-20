/*
Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). 
Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.

- Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.

- Don’t forget the blank spaces.

Input
The input file contains a text (employee's first name), and two double precision values, that are the seller's salary and 
the total value sold by him/her.

JOAO
500.00
1230.30

Output
Print the seller's total salary, according to the given example.

TOTAL = R$ 684.54
*/

#include <stdio.h>
int main() {
    printf("Welcome to Salary Bonus Calculation Center.\n");

    char sellerName[5];
    double sellerFixedSalery;
    double sellerSales;
    double commission = 15.0/100.0;
    double totalSalary;

    printf("\nPlease enter your name: ");
    scanf("%s", sellerName);
    printf("Enter salary per month: ");
    scanf("%lf", &sellerFixedSalery);
    printf("Enter Sells: ");
    scanf("%lf", &sellerSales);

    totalSalary = sellerFixedSalery + (sellerSales * commission);
    printf("\nTOTAL = R$ %.2lf\n", totalSalary);

    return 0;
}