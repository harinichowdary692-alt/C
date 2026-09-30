#include<stdio.h>
int main () {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i=1;
    int count = 0;
    while(i<=n){
        if(i%2 != 0){
            count += i;
        }
        i++;
    }
    printf("Sum of odd numbers from 1 to %d = %d",n,count);
}