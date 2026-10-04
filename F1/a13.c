#include<stdio.h>
int rev(int a);
int main (){
    rev(5);
}
int rev(int a){
    if(a==0){
        return 0;
    }
    printf("%d\n",a);
    rev(a-1);
    printf("%d\n",a);
}
