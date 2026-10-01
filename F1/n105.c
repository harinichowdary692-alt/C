#include<stdio.h>
#include<string.h>
int main (){
    char s[100];
    printf("Enter the value of s: ");
    fgets(s, sizeof(s), stdin);
    s[strlen(s)-1] = '\0';
    int i = (strlen(s)-1);
    int j = 0;
    char b[100];
    while(i != -1){
        b[j] = s[i];
        i--;
        j++;
    }
    b[j] = '\0';
    if(strcmp(b,s) == 0){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
}