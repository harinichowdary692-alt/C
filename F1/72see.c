#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main () {
    char n[100];

    printf("Enter: ");
    scanf("%s",n);

    int count = 0;
    for(int i=0; i<strlen(n); i++) {
        if (isalpha(n[i]) &&tolower(n[i]) != 'a' && tolower(n[i]) != 'e' && tolower(n[i]) != 'i' &&tolower(n[i]) != 'o' &&tolower(n[i]) != 'u') {
            count +=1;
        }
    }
    printf("output: %d",count);
}