#include<stdio.h>
int main () {
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if (number > 0) {
        printf("Positive \n");
        if(number % 2 == 0) {
            printf("Even");
        }
        else {
            printf("Odd");
        }
    }
    else if (number == 0) {
        printf("0 is neither positve nor negative \n");
        printf("0 is neither even nor odd");
    }
    else {
        printf("Negative \n");
        if (number % 2 == 0) {
            printf("Even");
        }
        else {
            printf("Odd");
        }
    }
}