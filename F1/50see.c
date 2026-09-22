#include<stdio.h>

float percentage(int n) {
    return n/5;
}

int main () {
    int n;

    printf("Enter your marks: ");
    scanf("%d",&n);
    printf("Total: 500 \n");
    printf("Percentage: %.2f%%",percentage(n));
}