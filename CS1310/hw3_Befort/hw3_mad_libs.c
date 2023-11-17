/*
Hunter Befort
This program allows the user to play a mad libs game twice, where it reads the input of the user toplay the game
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_LENGTH 30

void fill_in(char adj1[], char verb[], char adj2[], char noun[]);       //function declaration of fill_in

void play1();               //function declaration of play1

int main() {
    printf("This program will allow you to play a Mad Lib game 2 times.\n");

    play1();                //calls play1 function to play a game
    play1();

    return 0;
}

void fill_in(char adj1[], char verb[], char adj2[], char noun[]) {      //takes the strings and prints them into the mad lib game
    printf("Our school cafeteria has really %s food. Just thinking about it makes my stomach %s. The spaghetti is %s and tastes like %s.\n", adj1, verb, adj2, noun);
}

void play1() {
    char a1[MAX_LENGTH] = {}, verb[MAX_LENGTH] = {}, a2[MAX_LENGTH] = {}, noun[MAX_LENGTH] = {};    //creates empty strings for user inputed words

    printf("\nEnter an adjective (all uppercase): ");
    scanf("%s", a1);            //reads user input for an adjective
    printf("Enter a verb (all uppercase): ");
    scanf("%s", verb);          //reads user input for a verb
    printf("Enter an adjective (all uppercase): ");
    scanf("%s", a2);            //reads user input for another adjective
    printf("Enter a noun (all uppercase): ");
    scanf("%s", noun);          //reads user input for a noun

    fill_in(a1, verb, a2, noun);        //calls fill_in to print out the mad lib game with the user provided strings
}