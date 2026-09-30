#include<stdio.h>
int main () {
    int a;
    printf("Enter 0: ");
    scanf("%d",&a);
    int i = 1;
    while(a != 0){
        printf("Enter 0: ");
        scanf("%d",&a);
        i++;
    }
    printf("Attempts: %d",i);
}