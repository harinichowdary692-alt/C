#include<stdio.h>
int main () {
    int a;
    printf("Enter (1-7): ");
    if (scanf("%d",&a) != 1){
        printf("INVALID");
    }
    else {
        if (a == 1){
            printf("MONDAY");
        }
        else if (a == 2){
            printf("TUESDAY");
        }
        else if (a == 3){
            printf("WEDNESDAY");
        }
        else if (a == 4){
            printf("THURSDAY");
        }
        else if (a == 5){
            printf("FRIDAY");
        }
        else if (a == 6){
            printf("SATURDAY");
        }
        else if (a == 7){
            printf("SUNDAY");
        }
        else{
            printf("INVALID");
        }
    }
}