#include<stdio.h>
int main (){
    float a,b,c,d,e;
    printf("Enter the value of a,b,c,d,e: ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    printf("Average: %.2f",(a+b+c+d+e)/5);
}