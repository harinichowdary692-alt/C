#include<stdio.h>
void num(int n);
int main (){
    num(3);
}
void num(int n){
    if(n == 0){
        return;
    }
    num(n-1);
    printf("%d\n",n);
}