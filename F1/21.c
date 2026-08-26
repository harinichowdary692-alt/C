#include<stdio.h>
#include<string.h>
int main () {
    char name[100] = "", adj[100], place[100], noun[100], verb[100],adj1[100];
    

    printf("Enter a person's name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';
    printf("Enter an adjective: ");
    scanf("%s",&adj);
    printf("Enter a place: ");
    scanf("%s",&place);
    printf("Enter a noun: ");
    scanf("%s",&noun);
    printf("Enter a verb: ");
    scanf("%s",&verb);
    printf("Enter another adjective: ");
    scanf("%s",&adj1);
    printf("\n");
    printf("Yesterday, %s went to a %s %s.\nShe found a gaint %s and started %s.\nIt was absolutely %s!",name,adj,place,noun,verb,adj1);
}