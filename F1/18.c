#include<stdio.h>
int main () {
    float radius, pi = 3.14159;

    printf("Enter the radius: ");
    scanf("%f",&radius);
    printf("\n");
    printf("Radius: %.2f \n",radius);
    printf("Diameter: %.2f \n", radius * 2);
    printf("Circumference: %.2f \n", 2*pi*radius);
    printf("Area: %.2f \n",pi*radius*radius);
    return 0;
}