// Full name -- fgets

#include <stdio.h>
int main () {

    char grade;
    char name[30] = "";

    printf("Enter your grade: ");
    scanf("%c",&grade);
    
    getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name) , stdin);

    // fgets - file get string 
    // stdin - standard input

    printf("%c \n",grade);
    printf("%s",name);
    return 0;
}