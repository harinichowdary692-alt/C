#include<stdio.h>

int o_t(int n);

int main () {
    o_t(5);
}

int o_t(int n){
    int total;
    if(total > n){
        return 1;
    }
    printf("%d",1);
    total = o_t(n+1);
}