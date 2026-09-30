#include<stdio.h>
int main (){
    int age = 5;
    int *ptr = &age;
    int **pptr = &ptr;
    printf("%d",**pptr);
}