#include<stdio.h>
int main() {
    int n;
    char a = ' ';
    char b = '*';
    printf("Enter the value of n: ");
    if (scanf("%d",&n) != 1){
        printf("INVALID");
    }
    int h = 0;
    for(int i=1; i<n; i++){
        for(int j=(n-i); j>0; j--){
            printf("%c",a);
        }
        for(int k=(2*h+1); k>0; k--){
            printf("%c",b);
        }
        h++;
        printf("\n");
    }
    int l = n;
    for(int p=1; p<=n; p++){
        for(int q=1; q<p; q++){
            printf("%c",a);
        }
        for(int r=(2*l-1); r>0; r--){
            printf("%c",b);
        }
        printf("\n");
        l--;
    }
}