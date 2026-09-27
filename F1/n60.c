#include<stdio.h>

void helloworld(int count);

int main () {
    helloworld(5);
}


// recursive function 
void helloworld(int count){
    if(count == 0){
        return;
    }
    printf("Hello, World! \n");
    helloworld(count-1);
}