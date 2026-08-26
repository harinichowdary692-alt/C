#include<stdio.h>
int main () {
    int choice;
    float kg, pounds;

    printf("Weight Conversion Calculator \n1. Kilograms to Pounds\n2. Pounds to Kilograms\n");
    printf("\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d",&choice);

    if (choice == 1) {
        printf("Enter the weight in kilograms: ");
        scanf("%f",&kg);
        printf("%.2f kilograms is equal to %.2f pounds",kg,kg*2.20462);
    }
    else if (choice == 2) {
        printf("Enter the weight in pounds: ");
        scanf("%f",&pounds);
        printf("%.2f pounds is equal to %.2f kilograms",pounds,pounds/2.20462);
    }
    else {
        printf("Invalid");
    }
    return 0;
}