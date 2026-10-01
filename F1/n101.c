#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a;
    printf("Reverse = "); 
    for(int i=0; n!=0; i++){
        a = (n%10) + '0';
        n = n/10;
        printf("%c",a);
    }
}   