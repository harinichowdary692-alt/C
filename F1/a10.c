#include<stdio.h>
int printhello(int a);
int main (){
    printhello(5);
}
int printhello(int a){
    if(a==0){
        return 0;
    }
    printf("Hello\n");
    printhello(a-1);
}