#include <stdio.h>
#include <stdlib.h>


//online banking system we can log into our acc and check balance, deposit, withdraw and print receipt//
int accnum;
int pass;
FILE *fptr;
int p;

void deposit(int bal, int depo){
    bal=bal+depo;
    printf("Rs %d Was Successfuly Deposited to your account!\n\n",depo);

}

void withdraw(int bal, int withd){
    bal=bal-withd;
    printf("You Have Successfuly Withdrawed Rs.%d\n\n",withd);
}


int main() {
    printf("***Hello Welcome to ED Online banking system***\n\n");
    printf("Please enter your account details to log into the system :");
    scanf("%d", &accnum);
    switch (accnum) {
        case 1:
            printf("*Hello Anjana, Enter passcode to login :");
            scanf("%d", &pass);
            if (pass == 2002) {
                int bal = 10000;
                int depo;
                int withd;
                printf("\n ***Welcome Anjana, Enter relevant code for your service***\n\n");
                for (int count = 1; count > 0; count++) {
                    printf("Press 1 to Check your Acc balance, Press 2 to Deposit, Press 3 to Withdraw, Press 4 to Print your receipt, Press 5 to exit :");
                    scanf("%d", &p);
                    switch (p) {
                        case 1:
                            printf("Your Current Account Balance is %d due to this day\n\n ", bal);
                            continue;
                        case 2:
                            printf("Enter amount you want to deposit :");
                            scanf("%d", &depo);
                            deposit(bal, depo);
                            bal = bal + depo;
                            continue;
                        case 3:
                            printf("Enter amount you want to withdraw :");
                            scanf("%d", &withd);
                            withdraw(bal, withd);
                            bal = bal - withd;
                            continue;
                        case 4:
                            fptr = fopen("receipt.txt", "w");
                            fprintf(fptr, "Name = Anjana \nAcc Number = %d \nYour Avaliable Balance is Rs.%d", accnum,
                                    bal);
                            fclose(fptr);
                            printf("Printed\n\n");
                            continue;

                        case 5:
                            exit(0);
                    }
                }
            } else {
                printf("Incorrect Passcode, Try again...");
                break;
            }
        case 2:
            printf("*Hello Gagul, Enter passcode to login :");
            scanf("%d", &pass);
            if (pass == 2002) {
                int bal = 20000;
                int depo;
                int withd;
                printf("\n ***Welcome Gagul, Enter relevant code for your service***\n\n");
                for (int count = 1; count > 0; count++) {
                    printf("Press 1 to Check your Acc balance, Press 2 to Deposit, Press 3 to Withdraw, Press 4 to Print your receipt, Press 5 to exit :");
                    scanf("%d", &p);
                    switch (p) {
                        case 1:
                            printf("Your Current Account Balance is %d due to this day\n\n ", bal);
                            continue;
                        case 2:
                            printf("Enter amount you want to deposit :");
                            scanf("%d", &depo);
                            deposit(bal, depo);
                            bal = bal + depo;
                            continue;
                        case 3:
                            printf("Enter amount you want to withdraw :");
                            scanf("%d", &withd);
                            withdraw(bal, withd);
                            bal = bal - withd;
                            continue;
                        case 4:
                            fptr = fopen("receipt.txt", "w");
                            fprintf(fptr, "Name = Gangul \nAcc Number = %d \nYour Avaliable Balance is Rs.%d", accnum,
                                    bal);
                            fclose(fptr);
                            printf("Printed\n\n");
                            continue;

                        case 5:
                            exit(0);
                    }
                }
            } else {
                printf("Incorrect Passcode, Try again...");
                break;
            }
        case 3:
            printf("*Hello Chami, Enter passcode to login :");
            scanf("%d", &pass);
            if (pass == 2002) {
                int bal = 30000;
                int depo;
                int withd;
                printf("\n ***Welcome Chamilka, Enter relevant code for your service***\n\n");
                for (int count = 1; count > 0; count++) {
                    printf("Press 1 to Check your Acc balance, Press 2 to Deposit, Press 3 to Withdraw, Press 4 to Print your receipt, Press 5 to exit :");
                    scanf("%d", &p);
                    switch (p) {
                        case 1:
                            printf("Your Current Account Balance is %d due to this day\n\n ", bal);
                            continue;
                        case 2:
                            printf("Enter amount you want to deposit :");
                            scanf("%d", &depo);
                            deposit(bal, depo);
                            bal = bal + depo;
                            continue;
                        case 3:
                            printf("Enter amount you want to withdraw :");
                            scanf("%d", &withd);
                            withdraw(bal, withd);
                            bal = bal - withd;
                            continue;
                        case 4:
                            fptr = fopen("receipt.txt", "w");
                            fprintf(fptr, "Name = Chamilkavc \nAcc Number = %d \nYour Avaliable Balance is Rs.%d", accnum,
                                    bal);
                            fclose(fptr);
                            printf("Printed\n\n");
                            continue;

                        case 5:
                            exit(0);
                    }
                }
            } else {
                printf("Incorrect Passcode, Try again...");
                break;
            }
            return 0;
    }
}

