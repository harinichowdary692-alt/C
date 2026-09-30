#include<stdio.h>
#include<string.h>
int main(){
    char n[1000];
    printf("Enter the value of n: ");
    scanf("%s",n);
    int i = 0;
    int sum = 0;
    while(i<(strlen(n))){
        sum += (n[i] - '0');
        i++;
    }   
    printf("sum = %d",sum);
}