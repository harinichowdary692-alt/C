#include<stdio.h>
int main (){
    int n;
    printf("Enter your marks: ");
    scanf("%d",&n);
    if(n<=100 && n>=85){
        printf("A");
    }    
    else if(n<85 && n>=70){
        printf("B");
    }
    else if(n<70 && n>=60){
        printf("C");
    }
    else{
        printf("F");
    }
}