#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i = 1;
    int mul = 1;
    while(i<=n){
        mul *= i;
        i++; 
    }
    printf("The factorial of %d = %d",n,mul);
}