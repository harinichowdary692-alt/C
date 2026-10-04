#include<stdio.h>
int main (){
    char a;
    printf("Enter any alphabet: ");
    if(scanf("%c",&a) != 1){
        printf("Invalid");
    }
    while(getchar() != '\n');
    if(a == 'a' || a=='e'|| a == 'i' || a == 'o' || a == 'u' || a == 'A' || a=='E'|| a == 'I' || a == 'O' || a == 'U'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
}