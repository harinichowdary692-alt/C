#include<stdio.h>
int sum(int n);
int main (){
    printf("Sum: %d",sum(3));
}
int sum(int n){
    if(n==0){
        return 0;
    }
    return n + sum(n-1);
}