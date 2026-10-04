#include<stdio.h>
#include<string.h>
int main(){
    int age;
    char name[100], city[100];
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    printf("Enter your age: ");
    scanf("%d",&age);
    getchar();
    printf("Enter your city: ");
    fgets(city, sizeof(city), stdin);
    city[strlen(city)-1]= '\0';
    printf("%s \n",name);
    printf("%d \n",age);
    printf("%s \n",city);
}