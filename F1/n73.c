#include<stdio.h>
#include<math.h>
int po(int n,float m);
int main (){
    printf("%d",po(9,0.5));
}
int po(int n,float m){
    if (m<0){
        printf("Positive numbers only");
    }
    else if (m == trunc(m)){
        int a = 1;
        for(int i = 0; i< m; i++){
            a *= n;
        }
        return a;
    }
    else{
        printf("Int values only");
        return 0;
    }
}