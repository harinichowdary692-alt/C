#include<stdio.h>
int main () {
    // while loop = Continue some code WHILE the condition remains true
    //              Condition must be true for us to enter while loop

    int num = 0;

    while (num <= 0) {
        printf("Enter a number greater than 0: ");
        scanf("%d", &num);
    }
}