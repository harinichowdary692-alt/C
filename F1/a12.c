#include<stdio.h>
void end(int n);
int main (){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    end(n);
    printf("Liftoff!");
}
void end(int n){
    if(n==0){
        return;
    }
    printf("%d\n",n);
    end(n-1);
}