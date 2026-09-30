#include<stdio.h>
void square(int n);
int main (){
    int number = 4; // take this -- 1
    square(number);
    printf("Number = %d",number);
}

// call by value - we pass variables as arguments
void square(int n){ // bring here (a copy of that specific number is formed and whatever changes will happen will be with respect to the copy, the original will remain untouched) --2 
    n = n*n;
    printf("Square = %d \n",n);
}