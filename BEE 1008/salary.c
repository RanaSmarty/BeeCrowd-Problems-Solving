/*
Write a program that reads an employee's number, his/her worked hours number in a month and the amount he received per hour. 
Print the employee's number and salary that he/she will receive at end of the month, with two decimal places.

Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.
Don’t forget the space before and after the equal signal and after the U$.

Input
The input file contains 2 integer numbers and 1 value of floating point, representing the number, 
worked hours amount and the amount the employee receives per worked hour.

25
100
5.50

Output
Print the number and the employee's salary, according to the given example, with a blank space before and after the equal signal.

NUMBER = 25
SALARY = U$ 550.00

*/

#include <stdio.h>
int main() {
    printf("Welcome to Salary Calculation Program.\n");

    int employeeNumber;
    int workedHourInMonth;
    double amountPerHour;
    double salary;

    printf("\nEmployee number: ");
    scanf("%d", &employeeNumber);
    printf("Worked hour: ");
    scanf("%d", &workedHourInMonth);
    printf("Amount per hour: ");
    scanf("%lf", &amountPerHour);

    salary = (workedHourInMonth * amountPerHour);

    printf("\nNUMBER = %d", employeeNumber);
    printf(
        "\nSALARY = U$ %.2lf\n", salary
    );
    return 0;
}