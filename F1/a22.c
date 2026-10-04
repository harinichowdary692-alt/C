#include<stdio.h>
int lar(int n);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("%d",lar(n));
}
int lar(int n){
    if(n == 0) return 0;
    int last = n % 10;
    int rest = lar(n/10);
    if(last > rest) return last;
    else return rest;
}