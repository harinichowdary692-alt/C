#include<stdio.h>
#include<math.h>

void square(float num) {
    printf("Square = %.2f",pow(num,2));
}


int main () {
    float num;
    printf("Enter a number: ");
    scanf("%f",&num);
    square(num);
    return 0;
}