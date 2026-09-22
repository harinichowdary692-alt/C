#include<stdio.h>
#include<string.h>

int main () {
    char a[100];

    printf("Enter: ");
    scanf("%s",a);

    for (int i=0; i<strlen(a); i++){
        char empty[100] = "";
        for(int j=0; j<strlen(a); j++) {
            if (i==j){
                continue;
            }
            else {
                if(a[i] < a[j]) {
                    strcat(empty,"T");
                }
                else{
                    strcat(empty,"F");
                }
            }
        }
        if (strchr(empty,'F') == NULL) {
            printf("%c",a[i]);
        }
    }
}