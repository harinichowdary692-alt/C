#include<stdio.h>
#include<string.h>
int main () {
    int n,a,b,c,r,d,o,p,l,z,t;
    char e, v = ' ',x = '*';

    printf("1. Check if a number is prime\n2. Print a multiplication table\n3. Reverse a number\n4. Check if a number is palindrome\n5. Print a pattern (pyramid / triangle)\n6. Find factorial\n7. Exit\n");
    printf("\n");
    while(1) {
        printf("Choose: ");
        if(scanf("%d",&n) != 1){
            printf("Invalid\n");
            printf("\n");
            while(getchar() != '\n');
        }
        else{


            if (n == 1) {
                printf("\n");
                printf("---- PRIME OR COMPOSITE ----\n");
                printf("Enter: ");

                if (scanf("%d",&a) != 1) {
                    printf("Invalid \n");
                    printf("\n");
                    while(getchar() != '\n');
                }
                else if (a <= 1) {
                    printf("Neither prime nor composite! \n");
                }
                else{
                int count = 0;
                for(int i=1; i<=a; i++){
                    if (a%i == 0) {
                        count +=1;
                    }
                }


                if (count>2) {
                    printf("Composite \n\n");
                } 
                else {
                    printf("Prime \n\n");
                }
            }
        }

        else if (n == 2) {
            printf("\n");
            printf("---- MULTIPLICATION TABLE ----\n");
            printf("Enter: ");
            if (scanf("%d",&b) != 1){
                printf("Invalid \n");
                printf("\n");
                while(getchar() != '\n');
            }
            else {
                printf("\n");
                for(int j = 1; j<=10; j++){
                    printf("%d x %d = %d \n",b,j,b*j);
                }
                printf("\n");
            }
        }

        else if (n==3){
            printf("\n");
            printf("---- REVERSE A NUMBER ---- \n");
            printf("Enter: ");
            if (scanf("%d",&c) != 1){
                printf("Invalid \n");
                printf("\n");
                while(getchar() != '\n');
            }
            else {
                int rev = 0;
                while (c != 0) {
                    r = c % 10;
                    rev = rev * 10 + r;
                    c = c/10;
                }
                printf("Reverse: %d \n",rev);
                printf("\n");
            }
        }


        else if (n==4){
            printf("\n");
            printf("---- PALINDROME ----\n");
            printf("Enter: ");
            if (scanf("%d",&d) != 1){
                printf("Invalid \n");
                printf("\n");
                while(getchar() != '\n');
            }
            else{
                o = d;
                int w = 0;
                while(o!=0){
                    p = o % 10;
                    w = w * 10 + p;
                    o = o /10;
                }
                if (d == w){
                    printf("Palindrome \n");
                }
                else {
                    printf("Not Palindrome \n");
                }
                printf("\n");
            }
        }

        else if (n==5){
            printf("\n");
            printf("---- PATTERN ----\n");
            printf("Enter (T = Triangle or P = Pyramid): ");
            scanf(" %c",&e);
            if (e == 't' || e == 'T') {
                printf("Number: ");
                scanf("%d",&l);
                printf("\n"); 
                for(int z=1; z<=l; z++){
                    for(int q=1; q<=z; q++) {
                        printf("*",q);
                    }    
                    printf("\n"); 
                }  
                printf("\n");
            }
            else if (e == 'P' || e == 'p') {
                printf("Number: ");
                scanf("%d",&z);
                int u = z;
                for(int m=0; m<z; m++){
                    for(int n=1; n<u; n++){
                        printf("%c",v);
                    }
                    u--;
                    for(int s=1; s<=2*m+1; s++){
                        printf("%c",x);
                    }
                    printf("\n");
                }
            }
            else{
                printf("Invalid");
                while(getchar() != '\n');
            }

            printf("\n");
        }

        else if (n==6){
            printf("\n");
            printf("---- FACTORIAL ----\n");
            printf("Enter: ");
            if(scanf("%d",&t) != 1){
                printf("Invalid\n");
                printf("\n");
                while(getchar() != '\n');
            }
            else{
                if (t<0) {
                    printf("Invalid: Factorial undefined for -ve numbers \n");
                }
                else{
                    int total = 1;
                    for(int y=t; y>=1; y--){
                        total*=y;
                    }
                    printf("Factorial: %d\n",total);
                }
            }
            printf("\n");
        }

        else if (n==7) {
            printf("Thank you!!");
            break;
        }

        else{
            printf("Invalid \n");
            printf("\n");
        }
    }
    }
}


