#include<stdio.h>

void printtable(int n);

int main () {
    int n;
    printf("Enter the value of n: ");
    if (scanf("%d",&n) != 1){
        printf("INVALID");
    }
    printtable(n); // argument / actual parameter
}

void printtable(int n){ // parameter/ formal parameter
    for(int i=1; i<11; i++){
        printf("%d x %d = %d \n",n,i,n*i);
    }
}