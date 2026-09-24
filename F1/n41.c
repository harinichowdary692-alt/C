#include<stdio.h>
int main () {
    int i = 1234;
    int count = 0;
    while(i != 0){
        count += i;
    }
    printf("%d",count);
}