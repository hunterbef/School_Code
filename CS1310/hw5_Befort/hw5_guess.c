/*
Hunter Befort
This program gives the user a random number to guess, and the user plays a game where they have unlimited tries to guess the number
    the user can give up by giving -1 as an input
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void play1();

int main() {
    srand(0);

    int cont = 1;

    do {
        play1();

        printf("\nDo you want to play another game? Enter 1 for YES, and 0 (or any other number) for NO: ");
        scanf("%d", &cont);
    } while (cont == 1);                        //do while loop that continues to run the play1 function under the condition that the user wants to continue playing

    return 0;
}

void play1() {
    int num = (rand() % 201), guess;            //random number from 0 to 200

    printf("This program implements a guessing game.\nIn each game, the computer picks a random number between 0 and 200 inclusive and the user must guess it.\n");
    printf("The program will allow the user to play as many games as they want (until they chose not to continue).\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);                    //user inputs their guess

        if (guess == -1) {
            printf("I am sorry you gave up. Better luck next time. The hidden number was %d.\n", num);
            break;                          //if the user decides to quit, gives the hidden number and breaks the loop
        }
        else {
            if (guess == num) {                 //if else statements for the outputs depending on the users guess
                printf("You got it!\n");
            }
            else if (guess > num) {
                printf("your guess is too big\n");
            }
            else {
                printf("your guess is too small\n");
            }
        }

    } while(guess != num);                  //do while loop that continues to let you guess as long as you dont guess the number
}