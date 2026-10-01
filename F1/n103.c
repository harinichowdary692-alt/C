#include<stdio.h>
#include<string.h>
int main (){
    char s[100];
    printf("Enter s: ");
    scanf("%s",&s);
    int i = (strlen(s)-1);
    while(i != -1){
        printf("%c",s[i]);
        i--;
    }
}