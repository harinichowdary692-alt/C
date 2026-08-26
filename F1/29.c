#include<stdio.h>
int main () {
    int score;
    printf("Enter your score: ");
    scanf("%d",&score);
    if (90 <= score && score <= 100) {
        printf("Grade: A");
    }
    else if (80<= score && score <= 89) {
        printf("Grade: B");
    }
    else if (70 <= score && score <= 79) {
        printf("Grade: C");
    }   
    else if (60 <= score && score <= 69) {
        printf("Grade: D");
    }
    else if (score < 60) {
        printf("Grade: F");
    } 
    else {
        printf("Invalid choice!");
    }
}