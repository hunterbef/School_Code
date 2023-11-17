/*
Hunter Befort

This program takes user input for both first and last name, prints the initials, and then prints the total number of characters of both names
*/

#include <stdio.h>
#include <string.h>

int main() {
    int total;                  //variable for total characters
    char first[50];             //establishes the string for the first name
    char last[50];              //establishes the string for the last name

    printf("What is your last name? ");
    scanf("%s", last);
    printf("What is your first name? ");
    scanf("%s", first);

    printf("Your initials are %c%c.\n", first[0], last[0]);         //prints out the first character in both first and last name strings
    total = (strlen(first) + strlen(last));                         //adds the number of characters in both strings together
    printf("Your names together have %d characters.\n", total);

    return 0;
}