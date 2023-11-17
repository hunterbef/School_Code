/*
Hunter Befort
This program prints two rectangles of a length based on user input, one rectangle will be filled and the other empty in the middle
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void fullBar(int length);
void emptyBar(int length);

int main() {
    int sideL;
    for (int x = 1; x <= 3; x++) {          //runs the loop 3 times for 3 different rectangles
        printf("----- Sample run %d\nThis program will display a full and an empty square given the side length.\n", x);
        printf("Enter the side length: ");
        scanf("%d", &sideL);
        for (int x = 0; x < sideL; x++) {   //will continue to print out rows of stars in the shape of a rectangle until it goes through all the sides
            fullBar(sideL);
            printf("  ");
            if (x == 0) {                   //checks if its the top of the rectangle, if so prints a full bar for the top of the second rectangle
                fullBar(sideL);
            }
            else if (x == (sideL - 1)) {    //checks if its the bottom of the rectangle, if so prints a full bar for the bottom of the second rectangle
                fullBar(sideL);
            }
            else {                          //if it is not the top or bottom of the rectangle then it prints the middle of an empty rectangle
                emptyBar(sideL);
            }
            printf("\n");
        }
        printf("Bye\n");
    }
    return 0;
}

void fullBar(int length) {
    for (int x = 0; x < length; x++) {          //prints a line of stars based on the length given
        printf("*");
    }
}

void emptyBar(int length) {
    printf("*");
    for (int x = 0; x < (length - 2); x++) {    //prints a line of spaces with two stars at each end based on the length given
        printf(" ");
    }
    printf("*");
}