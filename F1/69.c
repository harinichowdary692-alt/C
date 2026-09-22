#include<stdio.h>
#include<string.h>
int main () {
    char n[100];
    int a;

    printf("Enter the value of n: ");
    scanf("%s",&n);
    a = strlen(n);

    int count = 0;
    for(int i=0; i<a; i++) {
        if ((n[i] - '0') % 2 == 0) {
            count += 1;
        }
    }
    printf("Total: %d",count);
}