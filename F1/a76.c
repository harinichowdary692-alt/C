#include<stdio.h>
int main (){
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u\n",ptr);
    printf("\n");
    float price = 99.99;
    float *ptrr = &price;
    printf("ptr: %u\n",ptrr);
    ptrr++;
    printf("ptr: %u\n",ptrr);
    ptrr--;
    printf("ptr: %u\n",ptrr);
    printf("\n");
    char star = '*';
    char *pttr = &star;
    printf("ptr: %u\n",pttr);
    pttr++;
    printf("ptr: %u\n",pttr);
    pttr--;
    printf("ptr: %u\n",pttr);    
}