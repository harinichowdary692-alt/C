#include<stdio.h>

int maximum(int m, int n, int o) {
    if (m > n && m > o) {
        return m;
    }
    else if (n>m && n>o){
        return n;
    }
    else {
        return o;
    }
}

int main () {
    int m, n, o; 

    printf("Enter n1: ");
    scanf("%d",&m);
    printf("Enter n2: ");
    scanf("%d",&n);
    printf("Enter n3: ");
    scanf("%d",&o);
    printf("Max: %d",maximum(m,n,o));
    return 0;
}   