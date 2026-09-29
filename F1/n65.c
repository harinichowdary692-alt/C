#include<stdio.h>

void num(int n);

int main (){
    num(10);
}


void num (int n){
    if(n == 0){
        return ;
    }
    printf("%d \n",n);
    num(n-1);
}