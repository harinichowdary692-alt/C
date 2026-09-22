#include<stdio.h>
int main () {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    int total = 1;
    for (int i=1; i<=n; i+=1) {
        total *= i;
    }

    printf("Factorial: %d",total);
}