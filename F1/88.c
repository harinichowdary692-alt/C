#include<stdio.h>
int main () {
    int n,h;
    char a=' ', b='*';

    printf("Enter: ");
    scanf("%d",&n);

    h = n;
    for(int i=-1; i<n-1; i++) {
        for(int j=0; j<=i; j++){
            printf("%c",a);
        }
        for(int k=0; k<h; k++){
            printf("%c",b);
        }
        h--;
        printf("\n");
    }
}