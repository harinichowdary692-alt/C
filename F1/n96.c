#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char n[100];
    printf("Enter the value of n: ");
    scanf("%s",n);
    int sum = 0;
    int a;
    int b = atoi(n);
    for(int i = 0; i<strlen(n); i++){
        a = b%10;
        b = b/10;
        sum += a;
    }
    printf("%d",sum);
}