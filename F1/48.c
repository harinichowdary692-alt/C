#include<stdio.h>

int is_positive(int n) {
    return n>0;
}

int main () {
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("%d",is_positive(n));
}