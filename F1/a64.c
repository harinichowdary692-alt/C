#include<stdio.h>
int main (){
    int n,p;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the power of n: ");
    scanf("%d",&p);
    if (p == 0){
        printf("1");
    }
    else{
        int num = n;
        for(int i = 1; i<p; i++){
            num *= n;
        }
        printf("%d",num);
    }
}