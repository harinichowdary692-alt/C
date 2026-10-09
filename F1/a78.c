#include<stdio.h>
int main (){
    int age = 22;
    int *ptr = &age;
    int age1 = 23;
    int *ptr1 = &age1;
    printf("%u\n",&age);
    printf("%u\n",&age1);
    printf("ptr: %u\n",ptr);
    printf("ptr1: %u\n", ptr1);
    printf("Difference: %d\n",ptr-ptr1);
    printf("Comparison: %u",ptr1==ptr);
}