#include<stdio.h>
#include<string.h>
int main () {
    char a[100];

    printf("Enter: ");
    scanf("%s",a);

    char empty[sizeof(a)] = "";
    int j = 0;
    for(int i=strlen(a)-1; i>=0; i--) {
        empty[j] = a[i];
        j++;
    }
    empty[j] = '\0';
    if (strcmp(empty,a)==0) {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}