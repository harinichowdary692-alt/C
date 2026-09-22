#include<stdio.h>

void check_even (int num) {
    if (num % 2 == 0) {
        printf("Even");
    }
    else if (num % 2 != 0) {
        printf("Odd");
    }
    
}

int main () {
    int num;
    printf("Enter a number: ");

    if (scanf("%d",&num) != 1){
        printf("Invalid Input");
    }
    else{
        check_even(num);
    }
}