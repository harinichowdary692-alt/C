#include<stdio.h>
int main () {
    int a;
    printf("Enter the year of your choice: ");
    scanf("%d",&a);
    if (a%4 != 0){
        printf("NOT A LEAP YEAR");
    }
    else if (a%100 == 0 && a%400 !=0){
        printf("NOT A LEAP YEAR");
    }
    else{
        printf("LEAP YEAR");
    }
}

// CONDITION FOR LEAP 
// should be divisible by 4
// should be divisible by 100 and not by 400