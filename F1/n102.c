#include<stdio.h>
#include<string.h>
int main (){
    char s[100];
    printf("Enter s: ");
    scanf("%s",s);
    for(int i=(strlen(s)-1); i!=-1; i--){
        printf("%c",s[i]);
    }
}