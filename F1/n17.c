#include<stdio.h>
int main () {
    int a,b,c;
    printf("Enter the value of a: ");
    if (scanf("%d",&a) != 1){
        printf("INVALID");
        return 1;
    }
    printf("Enter the value of b: ");
    if (scanf("%d",&b) != 1){
        printf("INVALID");
        return 1;
    }
    printf("Enter the value of c: ");
    if (scanf("%d",&c) != 1){
        printf("INVALID");
        return 1;
    }
    if(a>b){
        if(a>c){
            printf("%d is the largest",a);
        }
        else{
            printf("%d is the largest",c);
        }
    }
    else{
        if (b>c){
            printf("%d is the largest", b);
        }
        else{
            printf("%d is the largest", c);
        }
    }
    return 0;
}