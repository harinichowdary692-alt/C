#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        printf("%d index: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<5; i++){
        for(int j=i; j<=4; j++){
            if(arr[i]<=arr[j]){
                continue;
            }
            else if(arr[i]>arr[j]){
                int c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }
    printf("%d",arr[0]);
}