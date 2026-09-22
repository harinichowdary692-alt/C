#include<stdio.h>
int main () {
    int n,h;
    char a = ' ',b='*';

    printf("Enter: ");
    scanf("%d",&n);

    h =n;
    for(int i=1; i<n+1; i++) {
        for(int j=1; j<=(h-1); j++) {
            printf("%c",a);
        }
        h--;
        for(int k=1; k<=(2*i-1); k++) {
            printf("%c",b);
        }
        printf("\n");
    }
}