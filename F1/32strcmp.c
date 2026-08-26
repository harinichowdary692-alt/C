#include<stdio.h>
#include<string.h>
int main () {
    char username[10] = "Hello.123", user[10] = "", password[10] = "456123", pass[10] = "";

    printf("Enter username: ");
    scanf("%s",user);
    

    if (strcmp(user,username) == 0) {
        printf("Enter password: ");
        scanf("%s",&pass);
        if (strcmp(pass,password) == 0) {
            printf("Login successful!!");
        }
        else{
            printf("Invalid password");
        }
    }
    else {
        printf("Invalid username.");
    }
}