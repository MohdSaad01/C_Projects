#include <stdio.h>
#include <stdbool.h>

float balance=0.00;
void check_balance(){
    printf("Balance: $%.2f\n\n",balance);
}

void deposit_money(){
    float deposited;
    printf("Please enter the amount of money you want to deposit: $");
    scanf("%f",&deposited);
    if(deposited<=0){
        printf("Invalid Amount!\n\n");
    }
    else{
    balance+=deposited;
    printf("Money Deposited!\n\n");
    }
}

void withdraw_money(){
    float withdrawed;
    printf("How much money you want to withdraw: $");
    scanf("%f",&withdrawed);

    if(withdrawed<=0){
        printf("Invalid Amount!\n\n");
    }
    else if(withdrawed<=balance){
        printf("Money Withdrawn!\n\n");
        balance-=withdrawed;
    }
    else{
        printf("Insufficient balance\n\n");
    }
}

int main(){

    bool exit=true;
    do{
        printf("Select an option:-\n");
        printf("1.Check balance\n2.Deposit money\n3.Withdraw money\n4.Exit\n");
        int choice;
        printf("Enter your choice: ");
        scanf("%d",&choice);

        
        switch(choice){
            case 1:
                check_balance();
                break;
            case 2:
                deposit_money();
                break;
            case 3:
                withdraw_money();
                break;
            case 4:
                printf("Thank You for using our service!");
                exit=false;
                break;
            default:
                printf("Invalid Choice!\n\n");
        }
    }while(exit);

    return 0;
}