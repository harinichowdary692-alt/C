#include<stdio.h>
int main () {
    float num1, num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the operator (+ - * /): ");
    scanf(" %c",&operator);
    printf("Enter the first number: ");
    scanf("%f",&num2);

    if (num2 == 0) {
        printf("You can't divide by zero!");
    }
    else if (operator == '+'){
        printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
    }
    else if (operator == '-'){
        printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
    }
    else if (operator == '*'){
        printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
    }
    else if (operator == '/'){
        printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
    }
    else {
        printf("Invalid operator");
    }
}