// for both:  #include<ctype.h>
// for int:   if (scanf("%d",&a) != 1)
// for char:  if (!isalpha(a))

#include<stdio.h>
#include<ctype.h>
int main () {
    char a='\0';
    printf("Enter any alphabet: ");
    scanf("%c",&a);
    if (!isalpha(a)){ // check this out
        printf("Not a letter");
        return 1;
    }
    if (a == 'a' || a=='e' || a=='i' || a=='o' || a=='u'){
        printf("VOWEL");
    }
    else if (a == 'A' || a=='E' || a=='I' || a=='O' || a=='U'){
        printf("VOWEL");
    }
    else{
        printf("CONSONANT");
    }
    return 0;
}