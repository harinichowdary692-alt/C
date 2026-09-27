#include<stdio.h>

int sum(int n);

int main () {
    printf("%d",sum(5));
}

int sum(int n){
    if (n==1){
        return 1;
    }
    int num1 = sum(n-1);
    int sum1 = num1 +n;
    return sum1;
}