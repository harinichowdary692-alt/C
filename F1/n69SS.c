#include<stdio.h>

int fib(int n);

int main (){
    printf("%d",fib(6));
}

int fib(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    int fibb, n1, n2;
    n1 = fib(n-1);
    n2 = fib(n-2);
    fibb = n1 + n2;
}