#include<stdio.h>
int main (){
    int choose;
    float a,b;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Choose (1-4): ");
    int ok = scanf("%d",&choose);
    while(getchar() != '\n');
    if (ok != 1){
        printf("Invalid");
    }
    else if(choose<1 || choose>4){
        printf("Out of range");
    }
    else{
        printf("Enter the value of a: ");
        scanf("%f",&a);
        printf("Enter the value of b: ");
        scanf("%f",&b);
        if(choose == 1){
            printf("%.2f + %.2f = %.2f",a,b,a+b);
        }
        else if(choose == 2){
            printf("%.2f - %.2f = %.2f",a,b,a-b);
        }
        else if(choose == 3){
            printf("%.2f x %.2f = %.2f",a,b,a*b);
        }
        else{
            if(b==0){
                printf("cannot be divided by 0");
            }
            else{
                printf("%.2f / %.2f = %.2f",a,b,a/b);
            }
        }
    }
}