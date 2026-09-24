#include<stdio.h>
int main () {
    int n;
    char a='*';
    char b = ' ';
    printf("Enter the value of n (odd numbers greater than 3): ");
    if (scanf("%d",&n) != 1){
        printf("INVALID");
    }
    for(int i=1; i<2; i++){
        for(int j=1; j<=n; j++){
            printf("%c",a);
        }
        printf("\n");
    }
    for(int g=1; g<=(n-2); g++){
        for(int k=(n-1); k<n; k++){
            printf("%c",a);
        }
        for(int l=(n-2); l>0; l--){
            printf("%c",b);
        }
        for(int m=(n-1); m<n; m++){
            printf("%c",a);
        }
        printf("\n");
    }
    for(int o=1; o<=n; o++){
        printf("%c",a);
    }
    
}