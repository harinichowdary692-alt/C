#include<stdio.h>
int main () {
    int age;
    char name[30];
    char grade;
    float temp;

    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your grade: ");
    scanf(" %c",&grade);
    printf("Enter temp: ");
    scanf("%f",&temp);

    printf("%d \n",age);
    printf("%s \n",name);
    printf("%c \n",grade);
    printf("%.2f",temp);

    return 0;
}