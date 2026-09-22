#include<stdio.h>
int main () {
    int n1,n2;
    printf("Enter n1: ");
    scanf("%d",&n1);

    printf("Enter n2: ");
    scanf("%d",&n2);

    if(n1>n2){
        while(n2 != 0){
            n1++;
            n2--;
        }
        printf("%d",n1);
    }
    else {
        while(n1 != 0){
            n2++;
            n1--;
        }
        printf("%d",n2);
    }
}