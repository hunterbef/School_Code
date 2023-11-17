/*
    Hunter Befort
    1001181638
*/

#include <stdio.h>

int main(void)
{
    int i, j, k;                                        //variables used in the actual loop
    int iStart, iEnd, jStart, jEnd, kStart, kEnd;       //input variables to determine the length of the loop

    printf("Enter i's starting value: ");
    scanf("%d", &iStart);
    printf("Enter i's ending value: ");
    scanf("%d", &iEnd);
    printf("Enter j's starting value: ");
    scanf("%d", &jStart);
    printf("Enter j's ending value: ");
    scanf("%d", &jEnd);
    printf("Enter k's starting value: ");
    scanf("%d", &kStart);
    printf("Enter k's ending value: ");
    scanf("%d", &kEnd);

    printf("\n");                                   //examples given in the pdf has the boxes starting 2 lines after the prompt, but the first loop only starts 1 new line

    for (i = iStart; i < iEnd; i++)                 //first loop, determines total number of printed boxes based on input numbers
    {
        printf("\n");
        for (j = jStart; j < jEnd; j++)             //second loop, determines the length of the printed box based on input numbers
        {
            for (k = kStart; k < kEnd; k++)         //third loop, prints out the number of stars to form the box(es) based on input numbers
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}