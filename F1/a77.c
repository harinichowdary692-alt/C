#include<stdio.h>
int main (){
    float price = 99.99;
    float *ptr = &price;
    printf("ptr: %u\n",ptr);
    ptr++;
    printf("ptr: %u\n",ptr);
    ptr--;
    printf("ptr: %u\n",ptr);
}