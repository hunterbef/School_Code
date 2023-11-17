/*
Hunter Befort
This program 
*/

#include <stdio.h>

int main() {
    int width, height, windows, totalArea;
    int price = 50;                  //the price per sq ft is constant $50

    printf("This program calculates area and cost of windows given size and count.\n");
    printf("The price for one square foot of new window is 50 $\n");
    printf("Enter window width (in feet): ");
    scanf("%d", &width);                 //reads user input for window width and assigns it to variable width
    printf("Enter window height (in feet): ");
    scanf("%d", &height);                //reads user input for the window height and assigns it to variable height
    printf("Enter number of windows: ");
    scanf("%d", &windows);               //reads user input for number of windows and assigns it to variable windows

    totalArea = width * height * windows;            //calculates the total area in sq ft of the windows by multiplying width, height, and number of windows

    printf("Your total is: $%d, for %d sq ft.\n", totalArea*price, totalArea);      //prints out the total price and total square footage of the windows

    return 0;
}