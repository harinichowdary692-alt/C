#include<stdio.h>
#include<string.h>

int main () {
    char a[100] = "1258";
    int b;

    b = strlen(a);

    int total = 0;
    for (int i = 0; i<=(b-1); i++) {
        total += a[i] - '0';
    }
    printf("%d",total);
}