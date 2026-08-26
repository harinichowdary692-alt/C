#include<stdio.h>
#include<string.h>
int main () {
    char name[100] = "";
    int age;
    float height;
    char grade;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&height);
    printf("Enter your grade: ");
    scanf(" %c",&grade);
    printf("\n \n");
    printf("========= STUDENT ========= \n");
    printf("Name: %s \n",name);
    printf("Age: %d \n", age);
    printf("Height: %.2f \n",height);
    printf("Grade: %c \n",grade);
    printf("===========================");
}