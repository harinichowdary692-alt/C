#include<stdio.h>
int main () {
    float principal, rate, time, SI;

    printf("Enter principal: ");
    scanf("%f",&principal);
    printf("Enter rate: ");
    scanf("%f",&rate);
    printf("Enter time: ");
    scanf("%f",&time);

    printf("\n");
    printf("Principal: %.2f \n",principal);
    printf("Rate: %.2f%% \n",rate);
    printf("Time: %.2f years \n",time);
    SI = (principal*rate*time)/100;
    printf("Simple interset: %.2f \n",SI);
    printf("Total Amount: %.2f",principal + SI);

}