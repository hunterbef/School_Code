/*
Hunter Befort
This program reads from the user the number of side and prints them back
*/

#include <stdio.h>

int main(void) {
    int sides;
    printf("How many sides does your polygon have? ");
    scanf("%d", &sides);                               //the amp (&) was missing in front of the sides variable
    printf("Your answer was: %d\n", sides);            //I added the \n just for compiling and running purposes, apologies if that is an unwelcome edit
    return 0;
}