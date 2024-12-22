#include <stdio.h>

int main()
{
    /*
    ! problem 12
    Todo: Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
    Test Data :
    Input the Employees ID(Max. 10 chars): 0342
    Input the working hrs: 8
    Salary amount/hr: 15000
    Expected Output:
    Employees ID = 0342
    Salary = U$ 120000.00
    */
    char emplayId[10];
    double totalWorkedHour, amountPerHour;

    printf("enter employ ID: \n");
    scanf("%s", emplayId);
    printf("enter employ total worked(in hours): \n");
    scanf("%lf", &totalWorkedHour);
    printf("enter employ amount(per hour): \n");
    scanf("%lf", &amountPerHour);

    float salary = totalWorkedHour * amountPerHour;

    printf("Employ ID = %s\nSalary = U$ %.2lf", emplayId, salary);
}