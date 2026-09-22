#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main () {
    char a[100];

    printf("Enter: ");
    scanf("%s",a);

    int count = 0;
    for(int i=0; i<strlen(a); i++) {
        if (tolower(a[i]) == 'a') {
            count += 1;
        }
    }
    printf("Output: %d",count);
}