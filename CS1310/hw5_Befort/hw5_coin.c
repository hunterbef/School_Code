/*
Hunter Befort
This program flips an unbiased coin, and a biased coin a number of times entered through user input
    the bias of the second coin is based on user input
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void coin_toss_N(int N);
void coin_toss_N_biased(int N, int bias_head);

int main() {
    srand(0);                                                           //random seed so that the numbers are always the same

    int tosses = 0, bias = 0;

    printf("This program will simulate N coin tosses.\n");

    printf("Enter N: ");
    scanf("%d", &tosses);

    coin_toss_N(tosses);                                                //calls a normal coin game with user inputed number of flips

    printf("Now a biased coin will be simulated. Enter biased probability of head.\nIt should be a number between 0 and 100 inclusive. The probability of getting head will be equal to the number you give: ");
    scanf("%d", &bias);
    printf("Enter number of tosses, N: ");
    scanf("%d", &tosses);

    coin_toss_N_biased(tosses, bias);                                   //calls a biased coin game that inputs the user given bias and number of tosses

    return 0;
}


void coin_toss_N(int N) {
    int toss;
    int headCount = 0, tailCount = 0;                                   //assigns 0 to both counters since they will both start at zero

    for (int x = 1; x <= N; x++) {
        toss = (rand()%101);                                            //random number that is between 0 and 100
        if (toss < 50) {                                        
            printf("toss: %3d, random number: %3d: head\n", x, toss);
            headCount++;                                                //adds one to the heads count if heads if flipped
        }
        else {
            printf("toss: %3d, random number: %3d: tail\n", x, toss);
            tailCount++;                                                //adds one to the tails count if tails is flipped
        }
        
    }

    printf("heads: %d and tails: %d\n", headCount, tailCount);
    if (headCount > tailCount) {                                        //finds which counter was greater to determine which one won
        printf("head wins\n");
    }
    else {
        printf("tail wins\n");
    }
}

void coin_toss_N_biased(int N, int bias_head) {
    int toss;
    int headCount = 0, tailCount = 0;

    for (int x = 1; x <= N; x++) {                                      //function is identical to coin_toss_N with one change for bias
        toss = (rand()%100);
        if (toss < bias_head) {                                         //determines which side is flipped based on the user given bias
            printf("toss: %3d, random number: %3d: head\n", x, toss);
            headCount++;
        }
        else {
            printf("toss: %3d, random number: %3d: tail\n", x, toss);
            tailCount++;
        }
        
    }

    printf("heads: %d and tails: %d\n", headCount, tailCount);
    if (headCount > tailCount) {
        printf("head wins\n");
    }
    else {
        printf("tail wins\n");
    }
}