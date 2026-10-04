#include<stdio.h>
void even(int n);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    even(n);
}
void even(int n){
    if(n==0){
        return;
    }
    even(n-1);
    if(n%2==0){
        printf("%d\n",n);
    }
}