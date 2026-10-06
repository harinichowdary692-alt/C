#include<stdio.h>
#include<string.h>
int main (){
    int n, count =0;
    char s[100];
    printf("Enter the value of n: ");
    scanf("%d",&n);
    sprintf(s, "%d", n);
    if(s[0]=='0'){
        count += 1;
    }
    for(int i = 1; n != 0; i++){
        int a=n%10;
        n = n/10;
        count +=1;
    }
    printf("%d",count);
}