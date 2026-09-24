#include<stdio.h>
int main () {
    int n;
    char a='*';
    printf("Enter the value of n: ");
    if (scanf("%d",&n) != 1){
        printf("INVALID");
    }
    for(int i=1; i<(n+1); i++){
        for(int j=n-i+1; j>0; j--){
            printf("%c",a);
        }
        printf("\n");
    }
}