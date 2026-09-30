#include<stdio.h>
int main (){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int sum = 0, a;
    while(n != 0){
        a = n%10;
        n = n/10;
        sum += a;
    } 
    printf("sum = %d",sum);
}