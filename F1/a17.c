#include<stdio.h>
int power(int a, int b);
int main (){
    printf("%d",power(5,0));
}
int power(int a, int b){
    if(b == 0){
        return 1;
    }
    return a * power(a, b-1);
}