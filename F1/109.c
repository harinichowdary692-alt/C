#include<stdio.h>
int main () {
    int n;
    printf("Enter: ");
    scanf("%d",&n);

    int r, count = 0;
    while (n != 0){
        r = n % 10;
        if (r%2 == 0) {
            count+=1;
        }
        n = n/10;
    }
    printf("Number of even numbers: %d",count);
}