#include<stdio.h>
#include<string.h>

int main () {
    char a[100];

    printf("Enter: ");
    scanf("%s",&a);

    int total = 0;
    for (int i=0; i<strlen(a); i++) {
        total += a[i] - '0';
    }
    printf("Total: %d",total);
}