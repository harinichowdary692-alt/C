#include<stdio.h>

int sum (int a, int b);

int main () {
    int a, b;
    printf("Enter the value of a: ");
    if (scanf("%d",&a) != 1){
    printf("INVALID");
    }
    printf("Enter the value of b: ");
    if (scanf("%d",&b) != 1){
    printf("INVALID");
    }
    printf("%d + %d = %d",a,b,sum(a,b));
    return 0;
}

int sum(int a, int b){
    return a+b;
}