#include<stdio.h>
int main () {
    int i = 1,n,total = 0;

    printf("Enter: ");
    scanf("%d",&n);

    while(i<=n){
        total += i;
        i++;
    }
    printf("Total: %d",total);
}