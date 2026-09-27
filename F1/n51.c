#include<stdio.h>

float areasquare(float r);
float arearectangle(float l, float b);
float areacircle(float r);

int main (){
    printf("%.2f \n",areasquare(3.3));
    printf("%.2f \n",arearectangle(4,3));
    printf("%.2f \n",areacircle(2));
    return 0;
}

float areasquare(float r){
    return r * r;
}

float arearectangle(float l,float b){
    return l*b;
}

float areacircle(float r){
    return 3.14 * r * r;
}