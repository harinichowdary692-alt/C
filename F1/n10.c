#include<stdio.h>
int main () {
    int b;
    float a;
    printf("1. Celsius to Fahrenheit \n2. Fahrenheit to Celsius\n");
    printf("Enter ( 1 or 2 ): ");
    scanf("%d",&b);
    if (b == 1){
        printf("Enter the value: ");
        scanf("%f",&a);
        float c = ((a * 9)/5) + 32;
        printf("%.2fc = %.2fF",a,c);
    }
    else if (b == 2){
        printf("Enter the value: ");
        scanf("%f",&a);
        float c = ((a-32)*5)/9;
        printf("%.2fF = %.2fc",a,c);
    }
    else{
        printf("INVALID");
    }
}