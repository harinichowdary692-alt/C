#include<stdio.h>
int main (){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int c = n / 365;
    int a = n % 365;
    int b = a/30;
    int d = a%30;
    printf("%d year/s %d month/s %d day/s",c,b,d);
}