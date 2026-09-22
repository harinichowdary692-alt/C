#include<stdio.h>
#include<string.h>

int count(char n[]) {
    return strlen(n);
}

int main () {
    char a[1000] = "";

    printf("Enter numbers: ");
    scanf("%s",&a);
    printf("Length: %d",count(a));
    return 0;
}