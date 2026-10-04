#include<stdio.h>
int main (){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if (n%5==0 && n%11==0){
        printf("It is divisible by both 5 and 11");
    }
    else if(n%5 == 0){
        printf("It is divisible by 5 only");
    }
    else if(n%11 == 0){
        printf("It is divisible by 11 only");
    }
    else{
        printf("It is not divisible by both 5 and 11");
    }
}