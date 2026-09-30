#include<stdio.h>
int main (){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i = 1;
    while(i<=10){
        printf("%d x %d = %d \n",n,i,n*i);
        i++;
    }
}