#include<stdio.h>
int main () {
    int n;
    printf("Enter: ");
    scanf("%d",&n);

    int r,rev=0,a = n;
    while (a!=0){
        r = a % 10;
        rev = rev*10 + r;
        a=a/10;
    }
    if (n == rev) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }
    return 0;
}