#include<stdio.h>
int main () {
    int num, n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    num = 1;
    while(num<=n) {
        printf("%d \n",num);
        num +=1;
    }
}