#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n;
    char s[200];
    printf("Enter the value of n: ");
    scanf("%d",&n);
    sprintf(s, "%d", n);
    int sum = 0;
    int c=n;
    for(int i = 1; i<=strlen(s); i++){
        int a = n%10;
        n = n/10;
        sum += round(pow(a,strlen(s)));
    }
    if (sum == c){
        printf("Armstrong number");
    }
    else{
        printf("Not Armstrong number");
    }
}