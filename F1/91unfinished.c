#include<stdio.h>
int main () {
    int n,h;
    char a = ' ', b = '*';

    printf("Enter: ");
    scanf("%d",&n);
    
    h = n;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<(h-1); j++) {
            printf("%c",a);
        }
        h--;
        for(int k = 0; k<(2*i-1); k++) {
            printf("%c",b);
        }
        printf("\n");
    }

    /*
    int l = 1; 
    for(int p=n; p>0; p--) {
        for(int q=1; q<=l; q++) {
            printf("%c",a);
        }
        for(int r=1; r<=(2*p+1);r++){
            printf("%c",b);
        }
        l++;
        printf("\n");
    }
}*/