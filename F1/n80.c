#include<stdio.h>
int main (){
    int a = 3, b = 5,c;
    c = a;
    int *n = &a;
    a = b;
    int *p = &b;
    b = c;
    printf("a = %d \n",*n);
    printf("b = %d",*p);
}