#include<stdio.h>
int main () {
    char name[100] = "";
    char section, fav;
    int age;
    float height;

    printf("========= STUDENT PROFILE ========= \n");
    printf("Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Age: ");
    scanf("%d",&age);
    printf("Height: ");
    scanf("%f",&height);
    printf("Section: ");
    scanf(" %c",&section);
    printf("Favorite: ");
    scanf(" %c",&fav);
    printf("====================================");
}