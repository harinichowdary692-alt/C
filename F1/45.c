#include<stdio.h>

int cube(int n) {
    return n*n*n;
}

int main () {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Cube: %d",cube(n));
}