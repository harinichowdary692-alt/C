#include<stdio.h>
int num(int n);
int main (){
    printf("%d",num(1001));
}
int num(int n){
    if(n == 0){
        return 1;
    }
    if ( n % 10 == 0){
        count += 1;
    }
    num(n/10);
    return count;
}