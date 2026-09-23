#include<stdio.h>
int main () {
    float a,b;
    int c;
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter number (1 - 4): ");
    if (scanf("%d",&c) != 1){
        printf("INVALID");
    }
    else if (a>5 || a<0){
        printf("INVALID");
    }
    else {
        printf("Enter the value of a: ");
        if (scanf("%f",&a) != 1){
            printf("INVALID");
            return 1;
        }
        printf("Enter the value of b: ");
        if (scanf("%f",&b) != 1){
            printf("INVALID");
            return 1;
        }
        if (c == 1){
            printf("%.2f + %.2f = %.2f",a,b,a+b);
        }
        else if (c == 2){
            printf("%.2f - %.2f = %.2f",a,b,a-b);
        }
        else if (c == 3){
            printf("%.2f x %.2f = %.2f",a,b,a*b);
        } 
        else if (c == 4){
            printf("%.2f / %.2f = %.2f",a,b,a/b);
        }
    }
}