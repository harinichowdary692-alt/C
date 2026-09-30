#include<stdio.h>
int main (){
    int a;
    printf("a = ");
    scanf("%d",&a);
    int i = 1,sum = 0;
    while(i<=a){
        sum += i;
        i++;
    }
    printf("sum = %d",sum);
}