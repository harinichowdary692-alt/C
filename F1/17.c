#include<stdio.h>
#include<math.h> 

int main () {
    float radius, pi = 3.14159, volume;

    printf("Enter the radius: ");
    scanf("%f",&radius);
    printf("Radius: %.2f \n",pi*radius*radius);
    printf("Surface area: %.2f \n", 4 * pi * pow(radius,2));
    printf("Volume: %.2f",(4.0/3.0)*pi*pow(radius,3));
}