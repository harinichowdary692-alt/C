#include<stdio.h>
#include<string.h>
int main () {
    char n[100];

    printf("Enter: ");
    scanf("%s",&n);

    int j = 0;

    for (int i=0; i<=strlen(n); i++) {
        if (n[j]-'0' > n[i]-'0'){
            printf("%d \n",n[j]-'0');
        } 
    }
    j++;
}