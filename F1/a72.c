#include<stdio.h>
void eo(int n);
int main (){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    eo(n);
    return 0;
}
void eo(int n){
    if(n % 2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}