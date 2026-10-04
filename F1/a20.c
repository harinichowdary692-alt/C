#include<stdio.h>
int sqsum(int n);
int main (){
    printf("%d",sqsum(3));
}
int sqsum(int n){
    if(n == 0){
        return 0;
    }
    return (n*n) + sqsum(n-1);
}