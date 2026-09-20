/*
In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, 
the code of a product 2, the number of units of product 2 and the price for one unit of product 2. 
After this, calculate and show the amount to be paid.

Input
The input file contains two lines of data. 
In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.

12 1 5.30
16 2 5.10

Output
The output file must be a message like the following example where "Valor a pagar" means Value to Pay. 
Remember the space after ":" and after "R$" symbol. The value must be presented with 2 digits after the point.

VALOR A PAGAR: R$ 15.50

*/

#include <stdio.h>
int main() {
    printf("Welcome to the Simple Invoice Calculator.\n");

    int productCode_1;
    int productCode_2;
    int quantityProduct_1;
    int quantityProduct_2;
    double priceProduct_1;
    double priceProduct_2;
    double valueToPay;

    printf("\n");
    printf("Product Code 1: ");
    scanf("%d", &productCode_1);
    printf("Quantity for Product 1: ");
    scanf("%d", &quantityProduct_1);
    printf("Price per unit of Product 1: ");
    scanf("%lf", &priceProduct_1);

    printf("\nProduct Code 2: ");
    scanf("%d", &productCode_2);
    printf("Quantity for Product 2: ");
    scanf("%d", &quantityProduct_2);
    printf("Price per unit of Product 2: ");
    scanf("%lf", &priceProduct_2);

    double totalValueForProduct_1 = (quantityProduct_1 * priceProduct_1);
    double totalValueForProduct_2 = (quantityProduct_2 * priceProduct_2);
    valueToPay = (totalValueForProduct_1 + totalValueForProduct_2);

    printf("\nVALOR A PAGAR: R$ %.2lf", valueToPay);

    return 0;
}