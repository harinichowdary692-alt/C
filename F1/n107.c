#include<stdio.h>
int main (){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if (n == 0 || n==1){
        printf("Neither prime nor composite");
    }
    else if (n<0){
        printf("INVALID");
    }
    else{
        int i = 1;
        int count = 0;
        while(i<=n){
            if(n%i == 0){
                count += 1;
            }
            i++;
        }
        if(count == 2){
            printf("PRIME");
        }
        else{
            printf("COMPOSITE");
        }
    }
}