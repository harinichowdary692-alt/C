#include<stdio.h>
int main () {
    int n,a;

    printf("1. Check if a number is prime\n2. Print a multiplication table\n3. Reverse a number\n4. Check if a number is palindrome\n5. Print a pattern (pyramid / triangle - user picks)\n6. Find factorial\n7. Exit\n");
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
                    while(getchar() != '\n');
                }
                printf("\n");
                else{
                int count = 0;
                for(int i=1; i<=a; i++){
                    if (a%i == 0) {
                        count +=1;
                    }
                }


                if (count>2) {
                    printf("Composite \n");
                } 
                else {
                    printf("Prime \n");
                    break;
                }
            }
        }


    }
    }
}

