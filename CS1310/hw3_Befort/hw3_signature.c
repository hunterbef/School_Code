/*
Hunter Befort
This program prints out two signatures, an official signature and an unofficial one, both of which have 
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

void unofficial_s();          //unofficial signature function declaration

void official_s();            //official signature function declared

int main(){ 
    printf("This program will print my two email signatures.\n"); 
 
    printf("This is my unofficial email signature:\n\n"); 
    unofficial_s();                                       //call here the function that prints your unofficial signature 
 
    printf("\n\nThis is my official email signature:\n\n"); 
    official_s();                                         //call here the function that prints your official signature 
 
    printf("\nBye\n"); 
    return 0; 
}

void unofficial_s() {                                     //unofficial signature function definition
    printf("Best\nHunter\n");
}

void official_s() {                                       //official signature function definition
    printf("Hunter Befort\nAssociate Professor of Instruction\nComputer Science and Engineering\nUniversity of Texas at Arlington\n");
}