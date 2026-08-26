#include <stdio.h>
int main () {

    // width
    int num1 = 1, num2 = 10, num3 = -100;
    printf("%4d \n", num1);
    printf("%4d \n", num2);
    printf("%4d \n", num3);
    printf("\n");

    printf("%-4d \n", num1);
    printf("%-4d \n", num2);
    printf("%-4d \n", num3);
    printf("\n");

    printf("%04d \n", num1);
    printf("%04d \n", num2);
    printf("%04d \n", num3);
    printf("\n");

    printf("%+d \n", num1);
    printf("%+d \n", num2);
    printf("%+d \n", num3);
    printf("\n");

    //precision

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%.2f \n",price1);
    printf("%.2f \n",price2);
    printf("%.2f \n",price3);
}