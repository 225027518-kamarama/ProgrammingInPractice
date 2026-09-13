#include <stdio.h>

int main()
{
    char supplierName[50];
    float price;
    float budget;
    int registered;
    int documentsComplete;

    printf("========================================\n");
    printf("       TENDER EVALUATION SYSTEM\n");
    printf("========================================\n\n");

    printf("Enter Supplier Name              : ");
    scanf("%49s", supplierName);

    printf("Enter Tender Price               : ");
    scanf("%f", &price);

    printf("Enter Available Budget           : ");
    scanf("%f", &budget);

    printf("Is supplier registered? (1=Yes, 0=No): ");
    scanf("%d", &registered);

    printf("Are all documents complete? (1=Yes, 0=No): ");
    scanf("%d", &documentsComplete);

    printf("\n");
    printf("========================================\n");
    printf("         TENDER EVALUATION RESULT\n");
    printf("========================================\n");
    printf("Supplier : %s\n", supplierName);
    printf("Price    : %.2f\n", price);
    printf("Budget   : %.2f\n", budget);

    if (registered == 0 || documentsComplete == 0)
    {
        printf("Status   : Disqualified\n");
    }
    else if (price > budget)
    {
        printf("Status   : Disqualified\n");
    }
    else
    {
        printf("Status   : Qualified\n");
    }

    printf("========================================\n");

    return 0;
}