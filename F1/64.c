#include<stdio.h>
int main () {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int total = 0;
    for(int i=0;i<=n;i++) {
        if (i%2==0) {
            total += i;
        }
    }

    printf("Total: %d",total);
}