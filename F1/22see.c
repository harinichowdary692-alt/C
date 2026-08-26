#include<stdio.h>
#include<string.h>
int main () {
    int quantity;
    float price;
    char name[100] = "";
    char i[6] = "Item";
    char p[6] = "Price";
    char q[10] = "Quantity";
    char t[10] = "Total";

    printf("Enter item name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';
    printf("Enter price: ");
    scanf("%f",&price);
    printf("Enter quantity: ");
    scanf("%d",&quantity);
    printf("\n");
    printf("========== BILL ==========\n");
    printf("%-10s: %s\n",i,name);
    printf("%-10s: %.2f\n",p,price);
    printf("%-10s: %d\n",q,quantity);
    printf("--------------------------\n");
    printf("%-10s: %.2f\n",t,price*quantity);
    printf("==========================");
}

/*
This:
printf("%-10s: %s\n", "Item", name);

instead of this:
char i[6] = "Item";
printf("%-10s: %s\n",i,name);
*/