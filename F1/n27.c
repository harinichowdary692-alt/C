#include<stdio.h>
int main () {
    int count = 0;
    for(int i=1; i<6; i++){
        for(int j=1; j<6; j++){
            if ((i+j)%2==0){
                count += 1;
            }
        }
    }
    printf("%d",count);
}