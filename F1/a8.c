#include<stdio.h>
int num(int a);
int main(){
    num(5);
}
int num(int a){
    if( a == 0){
        return 0;
    }
    printf("%d \n",a);
    num(a-1);
}