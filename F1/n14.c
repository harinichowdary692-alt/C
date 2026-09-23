#include<stdio.h>
int main () {
    int a;
    printf("Enter your marks: ");
    if (scanf("%d",&a) != 1) {
        printf("INVALID");
    }
    else{
        if (a>=85 && a<=100){
            printf("A");
        }
        else if (a>=60 && a<85){
            printf("B");
        }
        else if (a>=45 && a<60){
            printf("C");
        }
        else if (a>=0 && a<45){
            printf("F");
        }
        else{
            printf("INVALID");
        }
    }
}