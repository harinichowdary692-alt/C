// to check whether the user has entered their name or not

#include<stdio.h>
#include<string.h>
int main () {
    char name[100] = "";
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

    if (strlen(name) == 0) {
        printf("You did not enter your name");
    } 
    else {
        printf("Hello %s",name);
    }
}