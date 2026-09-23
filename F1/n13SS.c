#include<stdio.h>
#include<ctype.h>
int main () {
    char a = '\0'; // '' invalid in c if you want a placeholder then '\0'
    printf("Enter a character: ");
    char c = tolower(a);
    if (scanf("%c",&a) != 1){
        printf("INVALID");
    }
    else {
    char c = tolower(a);
    if (c == 'a' || c=='e' || c == 'i' || c=='o' || c=='u'){
        printf("VOWEL");
    }
    else{
        printf("CONSONANT");
    }
    }
}