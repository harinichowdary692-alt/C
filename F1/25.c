#include<stdio.h>
#include<string.h>

int main () {
    char name[50] = "", movie[50] = "";
    int age, tickets;
    float price;
    char n[10] = "Name", m[10] = "Movie", a[10] = "Age", t[10] = "Tickets",  p[10] = "Price", to[10] = "Total";

    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] ='\0';

    printf("Enter movie name: ");
    fgets(movie,sizeof(movie),stdin);
    movie[strlen(movie)-1] = '\0';

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter number of tickets: ");
    scanf("%d",&tickets);

    printf("Enter ticket price: ");
    scanf("%f",&price);
    printf("\n");
    printf("========== MOVIE TICKET ========== \n");
    printf("\n");
    printf("%-10s: %s \n",n,name);
    printf("%-10s: %s \n",m,movie);
    printf("%-10s: %d \n",a,age);
    printf("%-10s: %0d \n",t,tickets);
    printf("%-10s: ₹%.2f \n",p,price);
    printf("-----------------------------------\n");
    printf("%-10s: ₹%.2f \n",to,tickets*price);
    printf("===================================");
}