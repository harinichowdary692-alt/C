#include<stdio.h>
int main (){
    int arr[5];
    for(int i=0; i<5; i++){
        printf("%d index: ",i+1);
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i=0; i<5; i++){
        sum += arr[i];
    }
    float avg = sum/5;
    printf("%.2f",avg);
}