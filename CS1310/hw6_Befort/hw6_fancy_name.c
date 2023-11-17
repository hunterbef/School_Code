/*
Hunter Befort
This program prints a user inputed first and last name one letter at a time in a cascading pyramid format with stars on each side of the letter printed
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    int totalChar, z = 0;                           //z variable for going through last name entered
    char firstName[101], lastName[101];

    printf("Please enter your FIRST name (one word): ");
    scanf("%s", firstName);
    printf("Please enter your LAST name (one word): ");
    scanf("%s", lastName);

    totalChar = strlen(firstName) + strlen(lastName) + 1;   //total characters PLUS the one space in between each name

    for (int x = 0; x < totalChar; x++) {           //runs through the total characters entered by a user plus the space to go through the strings and print the characters
        for (int y = 0; y < x; y++) {
            printf(" ");                            //prints out spaces based on which position we are in the char, creates cascading effect
        }
        if (x < strlen(firstName)) {
            printf("* %c *\n", firstName[x]);       //prints first name one letter at a time
        }
        else if (x == strlen(firstName)) {
            printf("*   * \n");                     //space in between the first and last name
        }
        else {
            printf("* %c *\n", lastName[z]);        //z variable gets used to run through the last name string
            z++;
        }
        
    }

    return 0;
}