/*
Hunter Befort
This program prints a user inputed number of triangles of a user inputed length of sides in a vertical column
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

    for (int x = 0; x < triangles; x++) {               //first loop controls for number of triangles
        spaces = side;                                  //resets the number of spaces after each triangle is finished
        for (int y = 0; y < side; y++) {                //second loop controls for number of sides
            for (int z = spaces; z > 1; z--) {          //third loop controls for number of spaces
                printf(" ");
            }
            for (int w = 0; w <= y; w++) {              //fourth loop controls for number of *'s, number of *'s printed based on y
                printf("*");
            }
            printf("\n");
            spaces--;                                   //lowers the number of spaces printed each pass of the triangles loop to reset the triangle
        }
        printf("\n");                                   //prints new line after each triangle for a vertical triangle column
    }
}