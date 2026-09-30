#include<stdio.h>
int main (){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int count = 0;
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            count += i;
        }
    }
    printf("Sum of odd number from 1 to %d = %d",n,count);
}