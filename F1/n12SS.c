#include<stdio.h>
int main () {
    int a,b,c;
    printf("Enter the value of a: ");
    // scanf ("%d",&a) -- BUG
    if ((scanf("%d",&a) != 1)){ // u can use scanf inside if function only
        printf("INVALID");
        return 1; // return 0 means code ran successfully
    }             // return 1 means that something went wrong
    printf("Enter the value of b: ");
    if ((scanf("%d",&b) != 1)){
        printf("INVALID");
        return 1;
    }
    printf("Enter the value of c: ");
    if ((scanf("%d",&c) != 1)){
        printf("INVALID");
        return 1;
    }
    printf("\n");
    if(a>b && a>c){
        printf("%d is the largest",a);
    }
    else if(b>a && b>c){
        printf("%d is the largest",b);
    }
    else if(c>a && c>b){
        printf("%d is the largest",c);
    }
    return 0;
}