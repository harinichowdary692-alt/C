#include<stdio.h>
void hc(float n);
int main (){
    hc(30);
}
void hc(float n){
    if(n<25){
        printf("Cold");
    }
    else{
        printf("Hot");
    }
}