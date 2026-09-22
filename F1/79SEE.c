#include<stdio.h>
#include<string.h>

int main () {
    char a[100];

    printf("Enter: ");
    scanf("%s",a);


    for (int i=0; i<strlen(a); i++) {
        char empty[100] = "";
        for (int j=0; j<strlen(a); j++) {
            if (i == j) {
                continue;
            }
            else {
                if ((a[i] - '0') > (a[j]-'0')) {
                    strcat(empty,"T"); // string concatination ( works like append in python )
                }
                else {
                    strcat(empty,"F");
                }
            }
        }
            if (strchr(empty,'F') == NULL){ // string character works like in operator in python
                printf("%c",a[i]);
            }
        
    }
}