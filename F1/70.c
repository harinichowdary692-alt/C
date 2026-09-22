#include<stdio.h>
#include<string.h>

int main () {
    char a[100];

    printf("Enter: ");
    scanf("%s",&a);

    for (int i=0; i<strlen(a); i++) {
        printf("%c \n",a[i]);
    }
    return 0;

}