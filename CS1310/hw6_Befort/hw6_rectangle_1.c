/*
Hunter Befort
This program prints a rectangle of 3 width and has a height based on user input that runs on a loop until the user enters a number less than 1
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void printRectangle(int height);

int main() {
    int height;

    do {
        printf("Enter height: ");
        scanf("%d", &height);
        printRectangle(height);
    } while (height > 0);                   //stops the loop when a number less than 1 is entered

    printf("Bye\n");
    return 0;
}

void printRectangle(int height) {
    for (int x = 0; x < height; x++) {      //prints a line of 3 stars on a loop forming a rectangle of user inputed height
        printf("***\n");
    }
}