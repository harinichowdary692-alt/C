#include<stdio.h>
int main () {
    char a='*';
    for(int i=1; i<6; i++){
        for(int j=1; j<=i; j++){
            printf("%c",a);
        }
        printf("\n");
    }
}