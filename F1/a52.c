#include<stdio.h>
int main (){
    float sp,cp;
    printf("Cost price: ");
    scanf("%f",&cp);
    printf("Selling price: ");
    scanf("%f",&sp);
    if(sp>cp){
        printf("Profit: %.2f%%",((sp-cp)/cp)*100);
    }
    else if(cp>sp){
        printf("Loss: %.2f%%",((cp-sp)/cp)*100);
    }
    else{
        printf("No profit, no loss");
    }
}