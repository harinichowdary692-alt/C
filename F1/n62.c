#include<stdio.h>

void printnum(int n);

int main (){
    printnum(3);
}

void printnum(int n){
    if(n==1){
        printf("1\n"); // base case - the ending fairy
        return;
    }
    printf("%d \n",n); // starting
    printnum(n-1); // call itself to do the work but what work? work = n-1
}