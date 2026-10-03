#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
int main (){
    int choice, n,a,b,c,d,p;
    printf("---------- MENU ----------\n");
    printf("\n");
    printf("1. Even/Odd\n2. Prime check\n3. Factorial\n4. Reverse a number\n5. Palindrome number\n6. Armstrong check\n7. Exit\n");
    while(true){
        printf("\n");
        printf("Enter your choice: ");
        int b1 = scanf("%d",&choice);
        while(getchar() != '\n');
        if(b1!= 1){
            printf("Invalid\n");
            continue;
        }
        else if(choice == 1){
            printf("Enter the value of n: ");
            int b2 = scanf("%d",&n);
            while(getchar() != '\n');
            if(b2  !=  1){
                printf("Invalid\n");
                continue;
            }
            else{
                if(n%2 == 0){
                    printf("%d = Even\n",n);
                }
                else{
                    printf("%d = Odd\n",n);
                }
            }
        }
        else if (choice == 2){
            printf("Enter the value of a: ");
            int b3 = scanf("%d",&a);
            while(getchar() != '\n');
            if(b3 != 1){
                printf("Invalid\n");
            }
            else if(a==0 || a==1){
                printf("%d = Neither prime nor composite\n",a);
            }
            else if(a<0){
                printf("Whole numbers only\n");
            }
            else{
                int count = 0;
                for(int i=1; i<=a; i++){
                    if(a%i == 0){
                        count += 1;
                    }
                    else if (count>3){
                        break;
                    }
                }
                if(count == 2){
                    printf("%d is Prime\n",a);
                }
                else{
                    printf("%d is Composite\n",a);
                }
            }
        }
        else if(choice == 3){
            printf("Enter the value of n: ");
            int b4 = scanf("%d",&b);
            while(getchar() != '\n');
            if(b4 != 1){
                printf("Invalid\n");
            }
            else{
                double a1 = 1;
                if (b>=0){
                    for(int i=1;i<=b;i++){
                        a1 *= i;
                    }
                    printf("The factorial of %d = %.0lf\n",b,a1);
                }
                else{
                    printf("Whole numbers only. \n");
                }
            }
        }
        else if (choice == 4){
            printf("Enter the value of n: ");
            int b5 = scanf("%d",&c);
            char s[100] = "\0";
            sprintf(s, "%d", c);
            while(getchar() != '\n');
            if(b5 != 1){
                printf("Invalid\n");
            }
            else if (c<0){
                printf("Whole numbers only");
            }
            else{
                int ab1 = c;
                char sum[100] = "\0";
                int abc1 = 0;
                for(int i=1; i<=strlen(s); i++){
                    int a2 = c%10;
                    c = c/10;
                    sum[abc1] = a2 + '0';
                    abc1++;
                }
                sum[abc1] = '\0';
                printf("Reverse of %d = %s\n",ab1,sum);
            }
        }
        else if(choice == 5){
            printf("Enter the value of n: ");
            int b6 = scanf("%d",&d);
            char m[100] = "\0";
            sprintf(m, "%d", d);
            while(getchar() != '\n');
            if(b6 != 1){
                printf("Invalid\n");
            }
            else if(d<0){
                printf("Whole numbers only\n");
            }
            else{
                int ab2 = d;
                char summ[100] = "\0";
                int abc2 = 0;
                for(int i=1; i<=strlen(m); i++){
                    int a2 = d%10;
                    d = d/10;
                    summ[abc2] = a2 + '0';
                    abc2++;
                }
                summ[abc2] = '\0';
                if(strcmp(m,summ) == 0){
                    printf("Palindrome\n");
                }
                else{
                    printf("Not Palindrome\n");
                }
            }
        }
        else if (choice == 6){
            printf("Enter the value of n: ");
            int b7 = scanf("%d",&p);
            while(getchar() != '\n');
            char o[100] = "\0";
            if (b7 != 1){
                printf("Invalid\n");
            }
            else if(p<0){
                printf("Whole numbers only\n");
            }
            else{
                sprintf(o, "%d", p);
                int y = p;
                int summm = 0;
                for(int i = 1; i<=strlen(o); i++){
                    int u = p%10;
                    p = p/10;
                    summm += round(pow(u,strlen(o)));
                }
                if(summm == y){
                    printf("Armstrong number\n");
                }
                else{
                    printf("Not armstrong number\n");
                }
            }
        }
        else if(choice == 7){
            printf("Thank you.\n");
            break;
        }
        else{
            printf("Out of Range\n");
        }
    }
}