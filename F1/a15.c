#include<stdio.h>
int fac(int n);
int main (){
    printf("Factorial: %d",fac(3));
}
int fac(int n){
    if(n == 0){
        return 1;
    }
    return n * fac(n-1);
}