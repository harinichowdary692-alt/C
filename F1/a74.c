#include<stdio.h>
int main(){
    int marks1 = 97;
    int marks2 = 98;
    int marks3 = 99;
    
    int mark[] = {1,2,3};
    printf("%d \n",mark[0]);

    int marks[3];
    printf("Enter your physics marks: ");
    scanf("%d",&marks[0]);
    printf("Enter your chemistry marks: ");
    scanf("%d",&marks[1]);
    printf("Enter your maths marks: ");
    scanf("%d",&marks[2]);
    printf("\n");
    printf("Physics = %d\nChemistry = %d\nMaths = %d",marks[0],marks[1],marks[2]);
}