#include<stdio.h>
int main (){
    int arr[5];

    // input
    for(int i=0; i<5; i++){
        printf("%d index: ",i+1);
        scanf("%d",&arr[i]);
    }

    // output
    for(int i = 4; i>=0; i--){
        printf("%d\n",arr[i]);
    }
}