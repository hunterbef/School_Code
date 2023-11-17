/*
Hunter Befort

This program takes a user inputed number, squares it, cubes it, and then prints out both solutions into a formatted table
*/

#include <stdio.h>
#include <math.h>                       // needed for the pow function

int main() {
    float num, num2, num3;

    printf("Enter N: ");
    scanf("%f", &num);                    // reads user input for N

    num2 = pow(num, 2);                   //squares N   
    num3 = pow(num, 3);                   //cubes N
    
    printf("+----------+--------+\n");
    printf("|         N|%7.1f |\n", num);  //prints out N alligned to the right for 7 spaces, with 1 decimal point and a space at the end for formatting
    printf("+----------+--------+\n");
    printf("| N squared|%8.2f|\n", num2);  //prints out N squared formatted for 8 spaces with 2 decimal points
    printf("+----------+--------+\n");
    printf("|   N cubed|%8.2f|\n", num3);  //prints out N cubed formatted for 8 spaces with 2 decimal points
    printf("+----------+--------+\n");
    printf("Good Bye\n");

    return 0;
}