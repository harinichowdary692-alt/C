#include<stdio.h>
int main (){
    float p,t,r;
    printf("Enter the value of p: ");
    scanf("%f",&p);
    printf("Enter the value of t: ");
    scanf("%f",&t);
    printf("Enter the value of r: ");
    scanf("%f",&r);
    printf("SI: %.2f",(p*t*r)/100);
}