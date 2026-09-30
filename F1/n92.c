#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int mul = 1;
    for(int i = 1; i<=n ; i++){
        mul *= i;
    }
    printf("The factorial of %d = %d",n,mul);
}