#include<stdio.h>
void bye(int n, int m);
int main (){
    bye(3,5);
}
void bye(int n, int m){
    if(m>n){
        printf("%d\n",n);
        bye(n+1,m);
    }
    else if(n>m){
        printf("%d\n",n);
        bye(n-1,m);
    }
    else{
        printf("%d\n",n);
    }
}