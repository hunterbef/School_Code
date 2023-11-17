/*
Hunter Befort

This program reads the initial bank balance, 2 transactions, and then prints out the balance before and after each transaction in a formatted table
*/

#include <stdio.h>
#include <math.h>

int main() {
    float balance, x1, x2;                                          //establishes the balance, and the two transactions as float variables

    printf("This program will simulate 2 bank transactions.\n");
    printf("Enter the original amount of money in the bank: ");
    scanf("%f", &balance);                                          //reads the balance from user input
    printf("Enter the 1st transaction: ");
    scanf("%f", &x1);                                               //read the first transaction
    printf("Enter the 2nd transaction: ");
    scanf("%f", &x2);                                               //reads the second transaction

    printf("---------------------------\n");
    printf("| Transaction |  Account  |\n");
    printf("|             |%10.2f |\n", balance);                   //prints out the balance in the formatted table
    balance += x1;                                                  //processes the frist transaction through the balance
    printf("|%12.2f |%10.2f |\n", x1, balance);
    balance += x2;                                                  //processes the second transaction from the new balance
    printf("|%12.2f |%10.2f |\n", x2, balance);
    printf("---------------------------\n");

    return 0;
}