#include<stdio.h>
int main () {
    int a;
    char c='*';
    printf("Enter the value of a: ");
    if (scanf("%d",&a) != 1){
        printf("INVALID");
    }
    for(int i=1; i<(a+1); i++){
        for(int j=1; j<(a+1); j++){
            printf("%c",c);
        }
        printf("\n");
    }
}