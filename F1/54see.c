#include<stdio.h>

void hello(char name[], int age);  // function prototype
int add(int m,int n); // function prototype

int main () {

    // function prototype = Provide the compiler w/ information about a function's:
    //                      name, return type, and parameters before its actual definition.
    //                      Enables type checking and allows functions to be used before 
    //                      they're defined.
    //                      Improves readability, organization, and helps prevent errors.

    hello("Spongebob", 30 );
    add(3,2);
}

void hello(char name[], int age){
    printf("Hello %s \n",name);
    printf("You are %d years old \n",age);
}

int add(int m,int n){
    printf("%d",m+n);
}