#include<stdio.h>
int main (){
    int n;
    printf("n = ");
    scanf("%d",&n);
    int count = 1;
    n=n/10;
    while (n != 0){
        n = n/10;
        count += 1;
    }
    printf("%d",count);
}