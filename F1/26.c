#include<stdio.h>
int main () {

    // if statement = Do some code if a condition is true.
    //                If the condition is false, don't do it.

    int age= 0;
    if (age < 0) {
        printf("Invalid");
    }
    else if (age == 0) {
        printf("New born");
    }
    else if (age < 18) {
        printf("Minor");
    }
    else {
        printf("Adult");
    }
    return 0;
}