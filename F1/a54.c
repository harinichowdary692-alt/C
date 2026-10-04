#include<stdio.h>
int main(){
    float n;
    printf("Enter units: ");
    scanf("%f",&n);
    int total = 0;
    if(n>0 && n<=100){
        total += n*5;
    }
    else if(n>100 && n<=200){
        total += 500 + (n-100)*7; 
    }
    else{
        total += 500 + 700 +(n-200)*10;
    }
    printf("Bill = %d",total);
}