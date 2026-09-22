#include<stdio.h>
int main () {
    int n;
    printf("Enter: ");
    scanf("%d",&n);

    int i=0;
    while(i<=n){
        if (n == 0){
            printf("Blastoff!");
        }
        else {
            printf("%d \n",n);
        }
        n--;
    }
}