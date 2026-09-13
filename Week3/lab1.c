#include <stdio.h>

int main()
{
    float basicSalary;
    float housing;
    float transport;
    float tax;
    float grossSalary;
    float netSalary;

    printf("========================================\n");
    printf("     EMPLOYEE SALARY CALCULATOR\n");
    printf("========================================\n\n");

    printf("Enter Basic Salary      : ");
    scanf("%f", &basicSalary);

    printf("Enter Housing Allowance : ");
    scanf("%f", &housing);

    printf("Enter Transport Allowance: ");
    scanf("%f", &transport);

    printf("Enter Tax               : ");
    scanf("%f", &tax);

    grossSalary = basicSalary + housing + transport;
    netSalary   = grossSalary - tax;

    printf("\n");
    printf("========================================\n");
    printf("          SALARY SUMMARY\n");
    printf("========================================\n");
    printf("Basic Salary   : %.2f\n", basicSalary);
    printf("Housing        : %.2f\n", housing);
    printf("Transport      : %.2f\n", transport);
    printf("Gross Salary   : %.2f\n", grossSalary);
    printf("Tax            : %.2f\n", tax);
    printf("Net Salary     : %.2f\n", netSalary);
    printf("========================================\n");

    return 0;
}