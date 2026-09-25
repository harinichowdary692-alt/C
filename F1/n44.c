#include<stdio.h>

void printhello(); // function prototype

int main (){
    printhello(); // function call
    return 0;
}

void printhello(){ // function declaration
    printf("Hello");
}