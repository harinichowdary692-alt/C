#include<stdio.h>
void printnumbers(int arr[], int n);
int main (){
    int arr[] ={1,2,3,4};
    printnumbers(arr, 4); 
}
void printnumbers(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d\n",arr[i]);
    }
}