#include<stdio.h>
int main (){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if (n == 1 || n==0){
        printf("Neither prime nor composite");
    }
    else if (n<0){
        printf("Invalid");
    }
    else{
        int count = 0;
        for(int i=1; i<=n; i++){
            if(n%i == 0){
                count += 1;
            }
        }
        if(count == 2){
            printf("Prime");
        }
        else{
            printf("Composite");
        }
    }
}