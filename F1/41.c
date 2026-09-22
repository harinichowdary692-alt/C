#include<stdio.h>

void print_table(int num) {
    for (int i=1; i<=10; i+=1) {
        printf("%d x %d = %d \n",num,i,num*i);
    }
}
int main () {
    int num;
    printf("Enter any number: ");
    if (scanf("%d",&num) != 1){
        printf("Invalid input");
    }
    else {
        print_table(num);
    }
}