#include<stdio.h>
float sroot( float n );
int main (){
    printf("%.2f",sroot(5));
    return 0;
}
float sroot(float n){
    #include<math.h>
    return sqrt(n);
}