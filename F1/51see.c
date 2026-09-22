#include<stdio.h>

int factorial(int n) {
    int total = 1;
    for (int i=n; i>=1; i-=1) {
        total *= i;
    }
    return total;
}

int main () {
    int m;

    printf("Enter n: ");
    scanf("%d",&m);
    printf("%d",factorial(m));
}