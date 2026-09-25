#include<stdio.h>

void calculateprice(float value);

int main () {
    int n;
    printf("Enter your price: ");
    if (scanf("%d",&n) != 1){
        printf("INVALID");
    }
    calculateprice(n);
    return 0;
}

void calculateprice(float value){
    value += (0.18*value);
    printf("Final price is: %.2f\n",value);
}