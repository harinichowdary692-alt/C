#include <stdio.h>
int main (){
    int age;
    float gpa;
    char grade;
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d",&age);
    printf("What's your gpa?: ");
    scanf("%f",&gpa);
    printf("Enter your grade: ");
    scanf(" %c",&grade);
    printf("Enter your name: ");
    getchar();
    fgets(name, sizeof(name), stdin);

    printf("%s",name);
    printf("%d \n",age);
    printf("%.2f \n",gpa);
    printf("%c \n",grade);
    
    return 0;
}