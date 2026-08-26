#include<stdio.h>
#include<string.h>
int main () {
    char name[100] = "";
    int age, score;
    float height;
    char n[10] = "Name", a[10] = "Age", h[10] = "Height", s[10] = "Score";

    printf("Name: ");
    fgets(name, sizeof(name),stdin);
    name[strlen(name)-1] = '\0';
    printf("Age: ");
    scanf("%d",&age);
    printf("Height: ");
    scanf("%f",&height);
    printf("Score: ");
    scanf("%d",&score);
    printf("\n");
    printf("========== PROFILE ==========\n");
    printf("\n");
    printf("%-10s: %s \n",n,name);
    printf("%-10s: %d \n",a,age);
    printf("%-10s: %.2f \n",h,height);
    printf("%-10s: %d \n",s,score);
    printf("\n");
    printf("=============================");
}