#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char s[100];
    printf("Enter the value of n: ");
    scanf("%d",&n);
    sprintf(s, "%d", n);
    for(int i=1; i<=strlen(s); i++){
        int a = n%10;
        n = n/10;
        printf("%d",a);
    }
}