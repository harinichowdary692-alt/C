// call by refernce 

#include<stdio.h>
void _square(int *n);
int main (){
    int number = 4;
    _square(&number);
    printf("number = %d", number);
}
void _square(int *n /*pointer*/){
    *n = (*n) * (*n);
    printf("square: %d \n",*n);
}