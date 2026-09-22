#include<stdio.h>

int add(int n1, int n2) {
    return n1 + n2;
}

int main () {
    int n1, n2;

    printf("Enter n1: ");
    scanf("%d",&n1);
    printf("Enter n2: ");
    scanf("%d",&n2);
    printf("%d + %d = %d",n1,n2,add(n1,n2));
    return 0;
}