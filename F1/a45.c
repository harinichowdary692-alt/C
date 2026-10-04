#include<stdio.h>
int main (){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The unit digit of %d = %d",n,n%10);
}