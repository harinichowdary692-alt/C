#include<stdio.h>

void sum(float n1,float n2) {
    printf("%.2f + %.2f = %.2f",n1,n2,n1+n2);
}

int main () {
    float num1, num2;

    printf("Enter num 1: ");
    scanf("%f",&num1);
    printf("Enter num 2: ");
    scanf("%f",&num2);
    sum(num1,num2);
}