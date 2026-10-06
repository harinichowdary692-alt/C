#include<stdio.h>
int main (){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int a = 0, b = 1, next = 0;
    for(int i = 1; i<=n; i++){
        next = a + b;
        a = b;
        b = next;
    }
    printf("%d",next);
}