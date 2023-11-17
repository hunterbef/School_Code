/*
Hunter Befort
1001181638
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "DrawTool.h"

int main(void)
{
    char map[MAXMAPSIZE][MAXMAPSIZE] = {};
	char command[20] = {};
	char *buffer;
	int mapSize, from, to, numOf, stopper = 0;
	char upper;
	char lineType[2] = {};
	char mark[2] = {};
	char *delimiters = "(),"; 
	char *token = NULL;

	InitializeMap(map, &mapSize);

	PrintInstructions();

	while (stopper == 0) 
	{
		PrintMap(map, mapSize);
		printf("\n\nEnter a draw command (enter Q to quit):  ");
		buffer = fgets(command, MAXMAPSIZE - 1, stdin);

		token = strtok(command, delimiters);
		strcpy(lineType, token);
		upper = toupper(lineType[0]);

		if (upper == 'Q')
		{
			stopper++;
		}
		else
		{
			token = strtok(NULL, delimiters);
			from = atoi(token);
			token = strtok(NULL, delimiters);
			to = atoi(token);
			token = strtok(NULL, delimiters);
			numOf = atoi(token);
			token = strtok(NULL, delimiters);
			if (*token == '\n')
			{
				mark[0] = 'X';
			}
			else
			{
				strcpy(mark, token);
			}

			if((upper == 'H') || (upper == 'V'))
			{
				if (from > mapSize)
				{
					printf("\nThat draw command is out of range\n\n");
				}
				else if (to > mapSize)
				{
					printf("\nThat draw command is out of range\n\n");
				}
				else if (numOf > mapSize)
				{
					printf("\nThat draw command is out of range\n\n");
				}
				else
				{
					DrawLine(map, from, to, upper, numOf, mark[0]);
				}
			}
			else if(upper == 'P')
			{
				if (from > mapSize)
				{
					printf("\nThat draw command is out of range\n\n");
				}
				else if (to > mapSize)
				{
					printf("\nThat draw command is out of range\n\n");
				}
				else
				{
					DrawLine(map, from, to, upper, 1, mark[0]);
				}
			}
			else
			{
				printf("\n\nInvalid Command, try again\n");
			}
		}
	}

	return 0;
}