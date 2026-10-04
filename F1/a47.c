#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d",a);
    }
    else if (b>a && b>c){
        printf("%d",b);
    }
    else if (b==a && b>c){
        printf("%d",b);
    }
    else if(b==a && b<c){
        printf("%d",c);
    }
    else if (b==c && c<a){
        printf("%d",a);
    }
    else if(b==c && c>a){
        printf("%d",c);
    }
    else{
        printf("%d",c);
    }
}   