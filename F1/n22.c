#include<stdio.h>
int main () {
    int count = 0;
    for(int i=1; i<101; i++){
        count += i;
    }
    printf("%d",count);
}