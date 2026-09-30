#include<stdio.h>
int main (){
    float price = 10.00;
    float *ptr = &price;
    float **pptr = &ptr;

    printf("%.2f \n",price);
    printf("%p \n",ptr);
    printf("%.2f \n",*ptr);
    printf("%p \n",pptr);
    printf("%.2f \n",**pptr);
}