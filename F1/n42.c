#include<stdio.h>
int main () {
    float balance = 1000,c,d;
    int a;
    printf("---------- SIMPLE ATM ----------");
    printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
    printf("\n");
    
    while(1){
        printf("Enter your choice: ");
        int result = scanf("%d",&a);
        if (result != 1){
            printf("INVALID\n");
            printf("\n");
            while(getchar() != '\n');
            continue;
        }
        else if (a<1 || a>4){
            printf("OUT OF RANGE\n");
            printf("\n");
            continue;
        }
        else{
            if(a == 1){
                printf("Your current balance is %.2f\n\n",balance);
                continue;
            }
            else if (a==2){
                printf("Enter the amount you want to deposit: ");
                if (scanf("%f",&c) != 1){
                    printf("INVALID\n\n");
                    continue;
                }
                else if (c<0){
                    printf("INVALID\n\n");
                    continue;
                }
                else{
                    printf("Deposit successful!\n");
                    balance = balance+c;
                    printf("New balance: %.2f\n\n",balance);
                    continue;
                }
            }
            else if(a==3){
                printf("Enter amount to withdraw: ");
                if (scanf("%f",&d) != 1){
                    printf("INVALID\n\n");
                    continue;
                }
                else if (d<0){
                    printf("INVALID\n\n");
                    continue;
                }
                else if (d>balance){
                    printf("Insufficient balance!\n");
                    printf("Withdrawal failed.\n\n");
                    continue;
                }
                else{
                    printf("Withdrawal successful\n");
                    balance = balance-d;
                    printf("New balance: %.2f\n\n",balance);
                    continue;
                }
            }
            else{
                printf("Thank you for using the ATM.\nGoodbye!");
                break;
            }
        }
    }
}