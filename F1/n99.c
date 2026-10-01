#include<stdio.h>
int main (){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a;
    if (n == 0){
        printf("0 \n");
    }
    else{
        while(n != 0){
            a = n%10;
            n = n/10;
            printf("%d \n",a);
        }
    }
}