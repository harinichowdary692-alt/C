#include<stdio.h>
#include<string.h>

int main () {
    char a[100];

    printf("Enter: ");
    scanf("%s",a);

    for(int i=0; i<strlen(a); i++) {
        char empty[100] = "";
        int count = 0;
        for (int j=0; j<strlen(a); j++){
            strcat(empty,("%c",a[i]));

            if (strchr(empty,("%c",a[i])) != NULL) {
                continue;
            } 
            else{
            if (a[i] == a[j]) {
                count += 1;
            }
        }
    }
        if (count>0) {
            printf("%d -> %d \n",a[i]-'0',count);
        }
    }
}