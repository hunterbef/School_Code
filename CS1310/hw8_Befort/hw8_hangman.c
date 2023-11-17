/*
Hunter Befort
This program is a hangman game that reads a file full of words to play the game with, the player will guess the word with individual letters
    but can only be incorrect 6 times. The game has an easy, mwedium and hard difficulty setting that the user can choose, and can play as long
    as they want to.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // for call to rand() and srand()
#include <time.h>   // for call to time() in srand(time(NULL))

#define DEBUG 1  // 1-development mode, prints more info; 0 - user mode, prints less
#define MAX_WRONG 6
#define MAX_WORDS 2500
#define MAX_LENGTH 49

void read_file(char guessWords[][MAX_LENGTH], int difficulty);
void play_game(char guessWords[][MAX_LENGTH], int randomNum, char attempts[]);
void draw_game(int counter);


int main() {
    int cont, diff, max;
    char enter;
    char guessWords[MAX_WORDS][MAX_LENGTH];

    if (DEBUG == 1) {
        srand(1);  // the same sequence of random numbers will be generated for each run
    }
    else {
        srand(time(NULL));  // a different sequence of random numbers will be generated with each run
    }

    printf("Do you want to play? Enter your choice (1-yes, 0-no): ");
    scanf("%d", &cont );
    while (cont!=0){                
        int correctOption = 0;
        while (correctOption == 0) {
            printf("Choose difficulty (1 to 3): ");
            scanf("%d", &diff);

            if ((diff > 0) && (diff < 4)) {         //checks if the difficulty is 1 to 3
                read_file(guessWords, diff);        //calls the read file function
                correctOption = -1;
                switch (diff) {                     //sets max for random number based on difficulty choice
                    case 3 :
                        max = 2024;
                        break;
                    case 2 : 
                        max = 2500;
                        break;
                    case 1 :
                        max = 500;
                        break;
                }
            }
            else {
                printf("That is not an option, try again.\n");
            }
        }
        int r = ((rand() % max) + 1);
        char attempts[MAX_LENGTH] = {};
        play_game(guessWords, r, attempts);        
		printf("Do you want to play again? Enter your choice (1-yes, 0-no): ");
        scanf("%d", &cont);
    }
    printf("\nThank you for playing our game! Goodbye!\n");
}


void read_file (char guessWords[][MAX_LENGTH], int difficulty) {
    char diff[12];

    switch (difficulty) {           //depending on difficulty setting, runs through each case and sets the difficulty array to each corresponding level
        case 1 :
            strcpy(diff, "easy.txt");
            break;

        case 2 :
            strcpy(diff, "medium.txt");;
            break;
        
        case 3 :
            strcpy(diff, "hard.txt");
            break;
    }

    FILE * wordFile = NULL;
    wordFile = fopen(diff, "r+");       //opens file based on the text file name

    if (wordFile == NULL) {
        printf("could not open file\n");
        exit(0);
    }

    for (int x = 0; x < MAX_WORDS; x++) {
        fscanf(wordFile, "%s", guessWords[x]);      //reads the strings from the file into the guessWords 2d array
    }
}

void play_game(char guessWords[][MAX_LENGTH], int randomNum, char attempts[]) {         //this ones a bit jumbled, had to redo a few times
    int wrongGuess = 0, guessNum = 0, correctGuess = 0, missingLetters; //counts the wrong and right guesses separately, and the total guesses through the loop
    int wordLength = strlen(guessWords[randomNum]);                 //easier than writing the whole thing out a bunch of times
    char standIn[MAX_LENGTH] = {};                                  //this is where the hidden word will reside

    for (int i = 0; i < wordLength; i++) {
        standIn[i] = '-';                                           //hidden word, just sets each spot covering the length of the word with a dash
    }

    do {
        int val = 0; 
        missingLetters = 0;                                                //variable that decides whether the guess is right or wrong

        draw_game(wrongGuess);                                      //calls the draw game function with the case of how many wrong guesses

        printf("Used letters: %s\n", attempts);                     //used letters printed
        printf("Number of bad guesses: %d (out of 6)\n", wrongGuess);   //wrong guesses printed
        printf("%s\n", standIn);                                    //hidden word along with revealed letters printed

        if (wrongGuess < 6) {      //the actual guessing part of the code, wont run if the game is already won/lost
            printf("\nEnter a letter: ");
            scanf(" %c", &attempts[guessNum]);                      //sets guessed numbers to user input

            for (int x = 0; x < wordLength; x++) {
                if (guessWords[randomNum][x] == attempts[guessNum]) {
                    standIn[x] = attempts[guessNum];
                    val++;    //basically, this loop checks if the entered char is present in the random word, and if so the "hidden" letters are shown and
                }               //value is changed from 0 to signal that correct guess variable MAY go up one
            }
        
            for (int y = 0; y < guessNum; y++) {
                if (attempts[guessNum] == attempts[y]) {
                    val = 0;    //this loop runs through the attempts already taken, and checks if the guessed char was used already
                    break;          //if so, resets val to 0 and breaks the loop so wrong guess variable goes up one
                }
            }
        }

        for (int i = 0; i < wordLength; i++) {
            if (standIn[i] == '-') {
                missingLetters++;       //this loop checks for dashes in the "hidden" word array, if theres a dash that means there are still 
                break;                  //missing letters that need to be guessed, will break if one is found because its unnecessary to go further in the loop
            }
        }

        if (wrongGuess == 6) {      //number of wrong attemps limited to 6, pretty basic, you reach 6 wrong guesses then game over
            printf("\nSorry. You lost. Better luck next time.\n");
            printf("The word was: %s\n", guessWords[randomNum]);    //displays the random word
        }
        else if (missingLetters == 0) { //if all the dashes in standIn are gone then the word has successfully been guessed
            draw_game(wrongGuess);      //i couldve just figured out what to do to loop once more but my brain hurty i just wanna be done
            printf("Used letters: %s\n", attempts);                     
            printf("Number of bad guesses: %d (out of 6)\n", wrongGuess);   
            printf("%s\n", standIn);
            printf("\nYou won!\n");
            break;      //breaks the while loop
        }

        if (val == 0) {     //if val was not given a value from the earlier loop then there was a wrong guess, add to the counter
            wrongGuess++;
        }
    
        guessNum++;         // normal counter meant to keep track of the attempts array
    } while (wrongGuess <= 6);  //will run one more time after losing to print out the hangman one more time 
}

void draw_game(int counter) {
    switch (counter) {                  //prints out the actual hangman depending on the number of wrong guesses
        case 1 :
            printf("\n------|\n");
            printf("|     |\n");
            printf("|     O\n");
            printf("|\n");
            printf("|\n");
            printf("|\n");
            printf("|\n");
            printf("-----------\n");
            break;

        case 2 :
            printf("\n------|\n");
            printf("|     |\n");
            printf("|     O\n");
            printf("|     |\n");
            printf("|     |\n");
            printf("|     |\n");
            printf("|\n");
            printf("-----------\n");
            break;

        case 3 :
            printf("\n------|\n");
            printf("|     |\n");
            printf("|     O\n");
            printf("|     |\n");
            printf("|    /|\n");
            printf("|     |\n");
            printf("|\n");
            printf("-----------\n");
            break;

        case 4 :
            printf("\n------|\n");
            printf("|     |\n");
            printf("|     O\n");
            printf("|     |\n");
            printf("|    /|\\\n");
            printf("|     |\n");
            printf("|\n");
            printf("-----------\n");
            break;

        case 5 :
            printf("\n------|\n");
            printf("|     |\n");
            printf("|     O\n");
            printf("|     |\n");
            printf("|    /|\\\n");
            printf("|     |\n");
            printf("|    /\n");
            printf("-----------\n");
            break;

        case 6 : 
            printf("\n------|\n");
            printf("|     |\n");
            printf("|     O\n");
            printf("|     |\n");
            printf("|    /|\\\n");
            printf("|     |\n");
            printf("|    / \\\n");
            printf("-----------\n");
            break;

        default :
            printf("\n------|\n");
            printf("|     |\n");
            printf("|\n");
            printf("|\n");
            printf("|\n");
            printf("|\n");
            printf("|\n");
            printf("-----------\n");
            break;
    }
}
