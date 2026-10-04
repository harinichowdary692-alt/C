#include<stdio.h>
void num(int n);
int main (){
    int a;
    printf("Enter the value of n: ");
    scanf("%d",&a);
    num(a);
}
void num(int n){
    if (n == 0){
        return;
    }
    printf("%d\n",n);
    num(n - 1);
}