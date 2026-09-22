#include<stdio.h>
int main () {
    int n,h;
    char a = ' ', b='*';

    printf("Enter: ");
    scanf("%d",&n);

    h = n;
    for(int i=0; i<n; i++){
        for(int j=1; j<i+1; j++){
            printf("%c",a);
        }
        for(int k=0;  k<(2*h-1); k++){
            printf("%c",b);
        }
        h--;
        printf("\n");
    }
}