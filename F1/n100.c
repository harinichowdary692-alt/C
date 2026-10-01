#include<stdio.h>
int main (){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int sum = 0,a;
    if (n==0){
        printf("0 \n");
    }
    else{
        for(int i=0; n!=0; i++){
            a = n%10;
            n = n/10;
            sum += a;
        }
        printf("sum = %d",sum);
    }
}