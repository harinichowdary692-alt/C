#include<stdio.h>
#include<math.h>
#include<string.h>
int main (){
    int n;
    char s[200];
    printf("Enter the value of n: ");
    scanf("%d",&n);
    sprintf(s, "%d", n);
    int i=1;
    int c =n;
    int sum = 0;
    while(i<=strlen(s)){
        int a = n%10;
        n = n/10;
        sum += round(pow(a,strlen(s)));
        i++;
    }
    if(sum == c){
        printf("Armstrong number");
    }
    else{
        printf("Not armstrong number");
    }
}