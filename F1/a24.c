#include<stdio.h>
int num(int n);
int main (){
    printf("%d",num(100001));
}
int num(int n){
    int count = 0;
    if (n==0){
        return 0;
    }
    if(n%10 == 0){
        count += 1;
    }
    n = n/10;
    return count + num(n);
}