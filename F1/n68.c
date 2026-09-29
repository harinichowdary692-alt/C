#include<stdio.h>
void num(int a);
int main(){
    num(5);
}
void num(int a){
    if(a==0){
        return;
    }
    num(a-1);
    printf("%d \n",a);
}