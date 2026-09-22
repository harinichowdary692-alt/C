#include<stdio.h>
#include<string.h>

void happy_birthday (char name[], int age) {
    printf("Happy birthday to you!!\n");
    printf("Happy birthday to you!!\n");
    printf("Happy birthday to you, dear %s! \n",name);
    printf("You are %d years old!!",age);
}


int main () {

    // function = A reusable section of code that can be invoked "called"
    //            Arguments can be sent to a function so that it can use them


    char name[50] = "";
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d",&age);

    happy_birthday(name,age);
}