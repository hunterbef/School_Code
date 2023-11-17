#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void get_command_line_parameter(char *argv[], char PName[], char PValue[])
{
    int i = 1;
    while (argv[i] != NULL)
    {
        if (!strncmp(argv[i], PName, strlen(PName)))
        {
            strcpy(PValue, strchr(argv[i], '=') + 1);
        }
        i++;
    }
}

int main(int argc, char *argv[])
{
    /*char buffer1[100] = {"Taxes are due on April 15, 2020."};
    char buffer2[20] = {};
    sscanf(buffer1, "%*s %*s %*s %*s %*s %s %*s", buffer2);
    printf("\n\n%s\n\n\n", buffer2);*/

    /*FILE *Dalmations;
    int Pack = 200;
    char buffer[20] = {};
    Dalmations = fopen("Spot", "w+");
    sprintf(buffer, "%d", Pack >> 1 + 1);
    fprintf(Dalmations, "%s", buffer);*/

    /*char buffer[100];
    int a = 1;
    long b = 2;
    sprintf(buffer, "\n\nThe value of a is %d and the value of b is %ld\n\n\n", a*2, b*3);
    printf("%s", buffer);*/

    /*char x[100] = {};
    char y[100] = {};
    get_command_line_parameter(argv, "CatName=", x);
    get_command_line_parameter(argv, "DogName=", y);
    FILE *Bird = fopen(x, "w+");
    fprintf(Bird, "%s", y);
    fclose(Bird);*/

    /*char filename[100] = {"Hanger.txt"};
    char mode[2] = {"r+"};
    get_command_line_parameter(argv, "FILENAME=", filename);
    get_command_line_parameter(argv, "MODE=", mode);
    printf("\n\n%s%s\n\n\n", filename, mode);*/

    FILE *MyFile;
    char buffer[20];
    MyFile = fopen("taxes2018", "r+");
    strcpy(buffer, "How are you?");
    fputs(buffer, MyFile);
    printf("\n\nThe file pointer is %d ", ftell(MyFile));
    fseek(MyFile, 0, SEEK_SET);
    printf("The file pointer is %d\n\n\n", ftell(MyFile));

    return 0;
}