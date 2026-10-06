#include<stdio.h>
int main (){
    int n;
    char a = ' ';
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        for(int j = (n-i-1); j>0; j--){
            printf("%c",a);
        }
        for(int k = 1; k<=(2*i+1); k++){
            printf("*");
        }
        printf("\n");
    }
}