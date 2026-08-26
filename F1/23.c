#include<stdio.h>
int main () {
    int number;
    char n[20] = "Number";
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("%-10s: %+07d",n,number);
}