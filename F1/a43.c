#include<stdio.h>
int main (){
    int n,m;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the power of n: ");
    scanf("%d",&m);
    if(m>0){
        int power = n;
        for(int i=1; i<m; i++){
            power *= n;
        }
        printf("%d",power);
    }
    else if( m == 0){
        printf("1");
    }
    else{
        float power = n;
        for(int i=m; i<-1; i++){
            power *= n;
        }
        printf("%.2f",1/(power));
    }
}