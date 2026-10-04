#include<stdio.h>
int main (){
    float a,b;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Percentage of a: %.2f%%\n",(a/(a+b))*100);
    printf("Percentage of b: %.2f%%",(b/(a+b))*100);
}