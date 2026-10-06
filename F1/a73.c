#include<stdio.h>
void power(int n, int m);
int main (){
    int n,m;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter its power: ");
    scanf("%d",&m);
    power(n,m);
}
void power(int n, int m){
    int p=1;
    for(int i=1; i<=m; i++){
        p*=n;
    }
    printf("%d",p);
}