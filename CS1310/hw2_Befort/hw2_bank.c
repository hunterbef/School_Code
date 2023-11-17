/*
Hunter Befort

This program reads the bank balance and 2 bank transactions from the user and calculates the impact on the balance that was read
*/

#include <stdio.h>
#include <math.h>

int main() {
    float balance, current, x1, x2;                 //where the read balance, transactions, and current balance will be stored

    printf("This program will simulate 2 bank transactions.\n");
    printf("Enter the original amount of money in the bank: ");
    scanf("%f", &balance);
    current = balance;                              //differentiates the initial balance from the changing balance after transactions

    printf("Enter the first transaction: ");
    scanf("%f", &x1);
    current += x1;                                  //processes the first transaction through the current balance variable
    printf("Current amount: %.2f\n", current);

    printf("Enter the second transaction: ");
    scanf("%f", &x2);
    current += x2;                                  //processes the second transaction through the current balance variable
    printf("Current amount: %.2f\n", current);

    printf("The original amount was: %.2f\n", balance);     //prints out the original balance that was read from the user

    return 0;
}