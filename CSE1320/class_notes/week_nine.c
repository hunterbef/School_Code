//October 17

    /*
    Strings again
        strlen(string)
            counts characters until it finds a null terminator
        strcopy(buffer, string)
            copies string into buffer
        strcat(buffer, string)
            concatenates <string> into the end of the current string in <buffer>
                in other words, it combines 2 strings together by adding <string> to the end of <buffer>
        strncat(buffer, string, num)
            concatinates <num> amount of characters of <string> into the end of <buffer>
        strcomp(string1, string2)
            compares 2 strings and returns which one has a greater ascii value
            returns a value of type int
                0               - both strings are the same
                positive int    - <string1> is more than <string2>
                negative int    - <string1> is less than <string2> 
        strncomp(string1, string2, n)
            compares 2 strings to a certain index, <n>, and returns which has a greater ascii value
        strchr(string, ch)
            looks for the first occurance of <ch> in <string>
            returns a pointer value to the first occurance of <ch>
        strstr(string1, string2)
            find the first occurance of <string2> in <string1>
            returns a pointer value to the first occurance of <string2>
        strpbrk(string, char_set)
            finds the first occurance of amy of a set of characters in a string
            returns a pointer the characters youre looking for
        strtok(buffer, delimiters)
            separates a string into different tokens based on the location of delimiter(s)
            the parsing function
                lets make a string "dog, cat, bird"
                if you set the delimiter to ',' then the string gets split at the commas, and the 3 words become separate tokens
                ex)   char *delimiters = "{}|"
                    strtok will look to split a string at '{' '}' and '|'
                variables must be created to store tokens
                    ex)     char *token = NULL;       token = strtok(string, delimiters)
    */



//October 19

    /*
        continued string functions and worked on strtok
    */



//October 21

    /*
    Families
        is() family - all return true (1) or false (0) depending on whether variable char fills the criteria
            islower(char)
                checks for lowercase
            isupper(char)
                checks for uppercase
            isalpha(char)
                c
            isalnum(char)
                checks for alphanumeric (letters and numbers)
            isdigit(char)
                checks for numbers
            ispunct(char)
                checks for punctuation
            isspace(char)
                checks for space
        to() family
            tolower(char)
                returns lowercase version of char
            toupper(char)
                returns uppercase version of char
        mem() family
            memcpy()
                just like strcpy() except it doesnt rely on null terminator
            memcmp()
                just like strcmp() except it doesnt rely on null terminator
            memset(*str, int, )
                used to alter an array after its been initialized
                    ie) testArray[] = {"ABCDE"};     memset(testArray, 'A', sizeof(testArray));    testArray = {"AAAAAA"}
                            using memset with sizeof() whipes out the null terminator at the end and replaces is with the char\
                parameters
                    *str - 
                    int  - 
                    s
        atoi() and atof()
            belong to <stdlib.h> library
            atoi()
                takes a null terminated string and converts the numbers in the string to an int
            atof()
                takes a null terminated string and converts the numbers in the string to a floating point number
    */


#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

#define MAX_INPUT 40

int main(void)
{
    //code block to find multiple instances of a character in a string
    char userString[100] = {};
    char ch;
    char *firstOccur;

    printf("\nEnter a line of text (max of %d)\n\n", MAX_INPUT - 1);
    fgets(userString, MAX_INPUT - 1, stdin);

    printf("\nEnter a character\n\n");
    scanf(" %c", &ch);

    firstOccur = strchr(userString, ch);
    while (firstOccur != NULL)
    {
        *firstOccur = '-';
        firstOccur = strchr(userString, ch);
    }

    printf("\n%s\n", userString);

    return 0;
}