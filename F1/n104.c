#include<stdio.h>
#include<string.h>
int main (){
    char s[100];
    printf("Enter s: ");
    fgets(s, sizeof(s),stdin);
    s[strlen(s)-1] = '\0';
    char a[100];
    int n = 0;//see
    for(int i=(strlen(s)-1); i>=0;i--){
        a[n] = s[i]; //see
        n++; //see
    }
    a[n] = '\0';
    if(strcmp(a,s) == 0){ // string compare will see no end and read junk after it reads whatever you entered so its best practice to add a null terminater in the end
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
}