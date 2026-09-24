#include<stdio.h>
int main () {
    int n;
    char a=' ';
    char b='*';
    printf("Enter the value of n: ");
    if (scanf("%d",&n) != 1){
        printf("INVALID");
    }
    int c = n-1;
    for(int i=1; i<=n; i++){
        for(int j=c; j>0; j--){
            printf("%c",a);
        }
        c--;
        for(int k=i; k>0; k--){
            printf("%c",b);
        }
        printf("\n");
    }
}