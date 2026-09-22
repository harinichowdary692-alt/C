#include<stdio.h>
int main () {
    int n;
    printf("Enter: ");
    scanf("%d",&n);

    int max = 1,r;
    while (n!=0) {
        r = n%10;
        if (r > max) {
            max = r;
        }
        n = n / 10;
    }
    printf("Max: %d",max);
}