#include<stdio.h>

int square(int n) {
    return n*n;
}

int main () {
    // return = returns a value back to where you call a function
    
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("%d",square(num));
}