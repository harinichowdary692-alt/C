#include<stdio.h>
int main () {
    int n;
    printf("Enter: ");
    scanf("%d",&n);

    int i = 1;
    while(i<=n) {
        if (i%3 != 0){
            printf("%d \n",i);
        }
        i++;
    }
}
