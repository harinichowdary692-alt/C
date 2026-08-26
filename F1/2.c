// Variable = A reusable container for a value.
// Behaves as if it were the value it contains.

#include <stdio.h>
#include <stdbool.h>
int main (){
    int age = 17;
    int year = 2026;
    float gpa = 2.5;
    float price = 19.99;
    double pi = 3.14159265358979;
    double e = 2.7182818284590;
    char grade = 'A';
    char symbol = '@';
    char name[] = "Harini Chowdary";
    char day[] = "saturday";
    bool is_online = 1;

    printf("I am %d years old\n",age);
    printf("The year is %d \n",year);
    printf("Your gpa is %.2f \n",gpa);
    printf("The price is $%.2f \n",price);
    printf("The value of pi is %.15lf \n",pi);
    printf("The value of e is %.15lf \n",e);
    printf("Your grade is %c \n",grade);
    printf("Your favorite symbol is %c \n",symbol);
    printf("I am %s \n",name);
    printf("Today is %s \n",day);
    printf("%d",is_online);

    return 0;
}
