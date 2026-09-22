#include<stdio.h>

const char* is_even_odd (int n) {
    return n%2 == 0? "Even":"Odd";
}

int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%s",is_even_odd(n));
    return 0;
}