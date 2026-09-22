#include<stdio.h>
int main () {
    int n,h;
    char a='*';

    printf("Enter: ");
    scanf("%d",&n);

    h=n;
    for(int i=0; i<n; i++) {
        for (int j=0; j<h; j++) {
            printf("%c",a);
        }
        h--;
        printf("\n");
    }
}