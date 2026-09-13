#include <stdio.h>

int main(){

    char municipality[50];
    char mayor[50];
    int population;


    printf("===============================\n");
    printf("  MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("===============================\n\n");

    printf("Welcome to Windhoek Municipality\n\n");

    printf("Enter  Municipality name: ");
    scanf("%49s", municipality);

    printf("Enter Mayor name: ");
    scanf("%49s", mayor);

    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\n");
    printf("===============================\n");
    printf("  MUNICIPALITY REPORT\n");
    printf("===============================\n\n");
    printf("Municipality: %s\n", municipality);
    printf("Mayor       : %s\n", mayor);
    printf("Population  : %d\n", population);
    printf("===============================\n");

    return 0;

}