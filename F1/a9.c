#include<stdio.h>
int num(int n);
int main (){
    num(5);
}
int num(int n){
    if(n==0){
        return 0;
    }
    num(n-1);
    printf("%d\n",n);
}