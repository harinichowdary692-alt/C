#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    printf("Enter = ");
    scanf("%s",&a);
    int c = 0;
    int sum = 0;
    for(int i = 0; i<strlen(a); i++){
        c = a[i]-'0';
        sum += c;
    }
    printf("%d",sum);
}