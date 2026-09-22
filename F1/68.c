#include<stdio.h>
#include<string.h>
int main () {
    char n[100];
    int a;

    printf("Enter the value of n: ");
    scanf("%s",&n);
    a = strlen(n);

    int total = 0;
    for(int i=0; i<a; i++) {
        if ((n[i] - '0') % 2 == 0) {
            total += n[i] - '0';
        }
    }
    printf("Total: %d",total);
}