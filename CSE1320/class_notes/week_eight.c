//October 10



//October 12

    /*
    Header files
        #include guard
            void Fun1(int []);      function prototypes that acts as an include guard
            void Fun2(int []);      
        #ifndef (if not defined)    
            basically an if statement in the header file
        #define
            if you have 2 defines of the same name, one will cancel out the other
                use the file name instead
        #endif

        idempotent

    More make file 
        make -b
            forces recompile
    Passing parameters to functions
    
    Strings
        no String data type in c, only a character set array
        a string in c is terminated by a null character array '\0'
        strings must have a null character at the end
        printf() prints strings until it finds a null

    */


//October 14

    /*
    Strings
        when initiating a char array with " ", automatically initializes as a null terminated array
            *(StringArray + 8) is the same as getting the 8th value in the char array (StringArray[7])
        fgets(inbuff, n, fp)
            accepts input of a string f maximum length n-1 from one line of the file fp
            parameters
                inbuff
                    address of the buffer that will hold the string
                n
                    an int representing the max length of the buffer
                fp
                    a FILE * representing the open file from which input is to come
            returns a char* value (the address of inbuff) or NULL in case of an error or end of file
        fgets() vs gets()
            fgets() reads from a file or standard input (stdin)
            gets() always reads from standard input (stdin) and has no maximum input limiter
            use fgets(), dont use gets() ever
            fgets() reads enter as a character and gets added into the string (\n)
            strlen of fgets() "dog" returns 4 because it reads the enter key being pressed
        String library functions
            strlen(string)- returns length of string
            strcopy()- copies one string into another
            strcat()- concatinates 2 strings
        
    */


#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

#define MAX_INPUT 40

int main(void)
{
    char MyString[MAX_INPUT];
    char first[MAX_INPUT] = {};
    char middle[MAX_INPUT] = {};
    char last[MAX_INPUT] = {};
    char *MyStringPtr;

    /*printf("\nEnter a line of text (max of %d)\n\n", MAX_INPUT-1);

    MyStringPtr = fgets(MyString, MAX_INPUT - 1, stdin);*/

    printf("Enter your first name: ");
    fgets(first, MAX_INPUT, stdin);
    first[strlen(first) - 1] = '\0';

    printf("Enter your middle name: ");
    fgets(middle, MAX_INPUT, stdin);
    middle[strlen(middle) - 1] = '\0';

    printf("Enter your last name: ");
    fgets(last, MAX_INPUT, stdin);
    last[strlen(last) - 1] = '\0';



    return 0;
}