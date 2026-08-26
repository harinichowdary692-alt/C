// SHOPPING CART PROGRAM

#include <stdio.h>
#include<string.h>
int main () {
    char item [100] = "";
    float price;
    int quantity;

    printf("What item would you like to buy?: ");
    fgets(item,sizeof(item),stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each?: $");
    scanf("%f",&price);
    printf("How many would you like?: ");
    scanf("%d",&quantity);
    printf("\n");
    printf("You have bought %d %s/s \n",quantity,item);
    printf("$%.2f",price*quantity);
}