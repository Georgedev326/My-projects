/*
NAME: GEORGE KIMANI
REG: CT100/G/26222/25
DESCRIPTION: A simple bank ATM withdrawal program
DATE: 15/10/2026*/
# include <stdio.h>
int main(){

    printf("BANK ATM WITHDRAWAL PROGRAM\n");
   // the program starts with a balance of 10000 and allows the user to withdraw money until the balance reaches 0
   
    double balance = 10000, amount;

    while(balance >0){
        printf("Enter the amount to withdraw: ");//The user here is prompted to enter amount to withdraw
        scanf("%lf", &amount);
        balance = balance -amount; //subtracts the amount from the balance
        printf("Your new balance is: %.2lf\n", balance);//this shows the new balance after the withdrawal
    }
    printf("===============================\n");
    printf("Your Balance is 0. Please deposit money to continue.\n");
}