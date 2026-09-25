#include<stdio.h>
#include<ctype.h>
#include<string.h>

void indian();
void french();

int main () {
    int i = 0;
    char name[1000] = "";
    printf("Indian or french: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name,"\n")] = '\0';
    while(name[i]!='\0'){
        name[i] = tolower(name[i]);
        i++;
    }
    if(strcmp(name,"indian")==0){
        indian();
    }
    else if (strcmp(name,"french")==0){
        french();
    }
    else {
        printf("Hello");
    }
    return 0;
}

void indian(){
    printf("Namaste");
}

void french(){
    printf("Bonjour");
}