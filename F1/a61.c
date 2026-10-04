#include<stdio.h>
int main (){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int fac = 1;
    for(int i = 1; i<=n; i++){
        fac *= i;
    }
    printf("%d",fac);
}