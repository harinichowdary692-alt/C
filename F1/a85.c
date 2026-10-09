#include<stdio.h>
int main (){
    int arr[5];
    for(int i=0; i<5; i++){
        printf("%d index: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<5; i++){
        int count = 0;
        for(int j=0; j<5; j++){
            if (arr[i] >= arr[j]){
                count += 1;
            }
        }
        if (count == 5){
                printf("%d",arr[i]);
                break;
        }
    }
}