/*
Hunter Befort
This program prints a user inputed number of triangles of a user inputed length of sides in a horizontal row
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void run1();

int main() {
    printf("This program will print a number of triangles of length given from the user.\n");

    run1();
    run1();

    return 0;
}

void run1() {
    int side, triangles, spaces;

    printf("Enter one triangle side: ");
    scanf("%d", &side);
    printf("Enter the number of triangles: ");
    scanf("%d", &triangles);

    for (int x = 0; x < side; x++) {                    //first loop goes until the number of sides inputed is reached
        for (int y = 0; y < triangles; y++) {           //second loop runs until the inputed number of triangles is reached on the single line
            spaces = side - 1;                          //number of spaces needed minus so the last row doesnt have a space
            for (int z = spaces; z > x; z--) {          //third loop prints out the number of spaces needed according to number of sides minus 1
                printf(" ");
            }
            for (int w = 0; w <= x; w++) {              //fourth loop prints out number of stars according to which number in the sides loop is on
                printf("*");
            }
            printf(" ");                                //prints a single space after each loop to separate each triangle
        }

        printf("\n");
    }
}