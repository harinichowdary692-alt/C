#include<stdio.h>
#include<string.h>
int main () {
    char adj[100] = "";
    char noun[100] = "";
    char adjective[200] = "";
    char verb[100] = "";
    char adjective1[200] = "";

    printf("Enter an adjective (description): ");
    scanf("%s",adj);

    getchar();
    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun)-1] = '\0';

    printf("Enter an adjective (description): ");
    scanf("%s",adjective);

    printf("Enter a verb (ending w/ -ing): ");
    scanf("%s",&verb);

    printf("Enter an adjective (description): ");
    scanf("%s",adjective1);

    printf("\n");

    printf("Today I went to %s zoo. \nIn an exhibit, I saw a %s. \n%s was %s and %s! \nI was %s!",adj,noun,noun,adjective,verb,adjective1);
    return 0;
}