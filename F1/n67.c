#include <stdio.h>

int sum(int n);

int main () {
    printf("%d",sum(5));
}
int sum(int n){
    if(n > 0){
        return n + sum(n-1);
    }
}