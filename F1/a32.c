#include<stdio.h>
int main (){
    float a;
    printf("Enter the temperature(in celsius): ");
    scanf("%f",&a);
    printf("%.2f°c = %.2fF",a,(a*9)/5+32);
}