#include<stdio.h>
int mul(int n, int m);
int main (){
    printf("%d\n",mul(2,-3));
}
int mul(int n,int m){
    if(m>=0){
        if(m == 0){
            return 0;
        }
        return n + mul(n,m-1);
    }
    else{
        if(m == 0){
            return 0;
        }
        return -n + mul(n,m+1);
    }
}