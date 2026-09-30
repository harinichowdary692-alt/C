#include<stdio.h>
int sum(int n);
int main () {
    printf("%d",sum(-3));
    return 0;
}
int sum (int n){
    int a = 0,b = 0;
    if(n>=0){
        for (int i=0;i<=n;i++){
            a+=i;
        }
        return a;
    }
    else{
        for(int i = 0; n<=i; i--){
            b+=i;
        }
        return b;
    }
}