#include<stdio.h>
#include<string.h>

void say_hello(char name[]) {
    printf("Hello, %s!",name);
} 


int main () {
    char name[100] = "";
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    say_hello(name);
}