#include<stdio.h>
int main () {
    int n;
    printf("Enter: ");
    scanf("%d",&n);

    int r, min = 9;
    while (n != 0){
        r = n%10;
        if (r < min) {
            min = r;
        }
        n = n / 10;
    }
    printf("%d",min);
}