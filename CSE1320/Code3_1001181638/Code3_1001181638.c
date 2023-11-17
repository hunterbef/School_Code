/*
Hunter Befort
1001181638
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void fillCard(int card[5][5]);
void printCard(int card[5][5]);
int bingoNumber(int nums[75], int counter);
int checkMark(int card[5][5], int newNum);
void markCard(int card[5][5], int newNum);
int checkRow(int card[5][5]);
int checkCol(int card[5][5]);
int checkDia(int card[5][5]);

int main (void)
{
    int card[5][5] = {};
    int usedNum[75] = {};
    int x, y, nextNum;
    int row = 0, col = 0, dia = 0;
    char userIO, letter;
    int bingo = 0, pickNumCtr = 0, markCheck;

    fillCard(card);
    printCard(card);

    do
    {
        nextNum = bingoNumber(usedNum, pickNumCtr);
        if (nextNum <= 15)
        {
            letter = 'B';
        }
        else if (nextNum > 15 && nextNum < 31)
        {
            letter = 'I';
        }
        else if (nextNum > 30 && nextNum < 46)
        {
            letter = 'N';
        }
        else if (nextNum > 45 && nextNum < 61)
        {
            letter = 'G';
        }
        else
        {
            letter = 'O';
        }

        printf("\nThe next number is %c-%d\n", letter, nextNum);

        printf("\nDo you have it? (Y/N) ");
        scanf(" %c", &userIO);

        if(userIO == 'Y' || userIO == 'y')
        {
            markCheck = checkMark(card, nextNum);
            if (markCheck == 0)
            {
                printf("\nThat value is not on your BINGO card - are you trying to cheat??\n");
            }
            else
            {
                markCard(card, nextNum);
            }
        }

        printCard(card);
        pickNumCtr++;

        bingo = checkRow(card);
        if (bingo > 0)
        {
            row++;
        }

        if (bingo == 0)
        {
            bingo = checkCol(card);
            if (bingo > 0)
            {
                col++;
            }
        }

        if (bingo == 0)
        {
            bingo = checkDia(card);
            if (bingo > 0)
            {
                dia++;
            }
        }
    } while (bingo == 0);

    if (row > 0)
    {
        printf("\nYou filled out a row - BINGO!!!\n\n");
    }
    else if (col > 0)
    {
        printf("\nYou filled out a column - BINGO!!!\n\n");
    }
    else if (dia > 0)
    {
        printf("\nYou filled out a diagonal - BINGO!!!\n\n");
    }

    return 0;
}


void fillCard(int card[5][5])
{
    int b, i, n, g, o;
    int y, randNum;
    srand(time(0));

    for (b = 0; b < 5; b++)
    {
        randNum = (rand() % 15) + 1;
        for (y = 0; y < 6; y++)
        {
            if (randNum == card[y][0])
            {
                randNum = (rand() % 15) + 1;
                y = 0;
            }
        }
        card[b][0] = randNum;
    }

    for (i = 0; i < 5; i++)
    {
        randNum = (rand() % 15) + 16;
        for (y = 0; y < 6; y++)
        {
            if (randNum == card[y][1])
            {        
                randNum = (rand() % 15) + 16;
                y = 0;
            }
        }
        card[i][1] = randNum;
    }

    for (n = 0; n < 5; n++)
    {
        randNum = (rand() % 15) + 31;
        for (y = 0; y < 6; y++)
        {
            if (randNum == card[y][2])
            {
                randNum = (rand() % 15) + 31;
                y = 0;
            }
        }
        card[n][2] = randNum;
    }

    card[2][2] = 0;

    for (g = 0; g < 5; g++)
    {
        randNum = (rand() % 15) + 46;
        for (y = 0; y < 6; y++)
        {
            if (randNum == card[y][3])
            {
                randNum = (rand() % 15) + 46;
                y = 0;
            }
        }
        card[g][3] = randNum;
    }

    for (o = 0; o < 5; o++)
    {
        randNum = (rand() % 15) + 61;
        for (y = 0; y < 6; y++)
        {
            if (randNum == card[y][4])
            {
                randNum = (rand() % 15) + 61;
                y = 0;
            }
        }
        card[o][4] = randNum;
    }
}

void printCard(int card[5][5])
{
    int x, y;

    printf("\n--------------------------\n");
    printf("|  B    I    N    G    O |\n");
    printf("--------------------------\n");

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
           if (card[x][y] == 0)
            {
                printf("|  X ");
            }
            else
            {
                printf("| %2d ", card[x][y]);
            }
        }
        printf("|\n");
        printf("--------------------------\n");
    }
}

int bingoNumber(int nums[75], int counter)
{                                                                      
    int nextNum;
    int x, y;
    nextNum = (rand() % 75) + 1;

    for (x = 0; x < counter; x++)
    {
        if (nums[x] == nextNum)
        {
            nextNum = (rand() % 75) + 1;
            x = 0;
        }
    }
    nums[counter] = nextNum; 
    
    return nextNum;
}

int checkMark(int card[5][5], int newNum)    //by the time i got here i realized i made this way harder than it needed to be but didnt want
{                                           //to completely redo the code since it was still working properly and followed the rubric
    int x, y, count = 0;
    
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            if (card[x][y] == newNum)
            {
                count++;
            }
        }
    }

    return count;
}

void markCard(int card[5][5], int newNum)
{
    int x, y;

    for(x = 0; x < 5; x++)
    {
        for(y = 0; y < 5; y++)
        {
            if (card[x][y] == newNum)
            {
                card[x][y] = 0;
            }
        }
    }
}

int checkRow(int card[5][5])
{
    int x, y, counter = 0, result = 0;
    for (x = 0; x < 5; x++)
    {
        if (card[x][0] == 0)
        {
            for (y = 0; y < 5; y++)
            {
                if (card[x][y] == 0)
                {
                    counter++;
                }
            }
            if (counter == 5)
            {
                x = 5;
                result++;
            }
            else 
            {
                counter = 0;
            }
        }
    }

    return result;
}

int checkCol(int card[5][5])
{
    int x, y, counter, result = 0;
    for (x = 0; x < 5; x++)
    {
        if (card[0][x] == 0)
        {
            for (y = 0; y < 5; y++)
            {
                if (card[y][x] == 0)
                {
                    counter++;
                }
            }
            if (counter == 5)
            {
                x = 5;
                result++;
            }
            else
            {
                counter = 0;
            }
        }
    }
    
    return result;
}

int checkDia(int card[5][5])
{
    int x, counter = 0, result = 0;

    for (x = 0; x < 5; x++)
    {
        if (card[x][x] == 0)
        {
            counter++;
        }
    }

    if (counter == 5)
    {
        result++;
    }
    else
    {
        counter = 0;
        for (x = 0; x < 5; x++)
        {
            if (card[x][4 - x] == 0)
            {
                counter++;
            }
        }
        if (counter == 5)
        {
            result++;
        }
    }
    
    return result;
}