/*
Hunter Befort
This program uses the function print_shape to determine the shape of a polygon based on the number of sides 
    Two outputs are hard coded and one is based on user input
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void print_shape(int edgesNo);

int main() {
    printf("--- Sample run:\n");

    print_shape(4);             //hard coded function call for 4 sides
    print_shape(7);             //hard coded function call for 7 sides

    int sides = 0;

    printf("How many edges does your polygon have? ");
    scanf("%d", &sides);        //user inputs number of sides

    print_shape(sides);         //function call that determines shape based on user input

    return 0;
}

void print_shape(int edgesNo) {         //function definition that determines shape based on number of sides
    if(edgesNo == 3) {
        printf("This is a triangle.\n");
    }
    else if(edgesNo == 4) {
        printf("This is a rectangle.\n");
    }
    else if(edgesNo == 5) {
        printf("This is a pentagon.\n");
    }
    else if(edgesNo == 6) {
        printf("This is a hexagon.\n");
    }
    else {
        printf("Shape not recognized.\n");
    }
}