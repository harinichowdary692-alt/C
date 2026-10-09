#include<stdio.h>
int main (){
    float cost[3];
    printf("Enter price 1: ");
    scanf("%f",&cost[0]);
    printf("Enter price 2: ");
    scanf("%f",&cost[1]);
    printf("Enter price 3: ");
    scanf("%f",&cost[2]);
    printf("\n");
    printf("Cost 1 with gst: %.2f\n",cost[0] + (cost[0] * 0.18));
    printf("Cost 2 with gst: %.2f\n",cost[1] + (cost[1] * 0.18));
    printf("Cost 3 with gst: %.2f\n",cost[2] + (cost[2] * 0.18));
}