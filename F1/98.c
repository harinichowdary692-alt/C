#include<stdio.h>
int main () {
    int n,i=1,count=1;

    printf("Enter: ");
    scanf("%d",&n);

    while(i<=n){
        count*=i;
        i++;
    }
    printf("%d",count);
}