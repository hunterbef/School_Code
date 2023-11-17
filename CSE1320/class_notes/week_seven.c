//October 3

    /*
    Unary Operator (*)
        multiplication
        pointer declaration
            pointers must be printed with %p
        dereference operator
            returns the contents of the memory location of a pointer depending on the % operator
                %c, %d, %f, etc.
    */


//October 7

    /*
    makefile
        make is a unix utility designed to start execution of a makefile
        makefile is a special file containing shell commands, that you create and name makefile
        while in the directory of the makefile, typing make will execute the command file
    */


#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int myInt = 123;
    int *ptr  = &myInt;

    printf("Contents of myInt: %d\n", myInt);
    printf("Address of myInt: %p\n", ptr);
    printf("Int dereference of ptr: %d\n", *ptr);
    printf("Char dereference of ptr: %c\n", *ptr);

    int askAgain;

    do
    {
        printf("Please enter a decimal: ");
        scanf("%d", &askAgain);
    } 
    while (askAgain);
    
    char *ptrArray[] = {"cringe", "ahh", "ahh", "boy", ""};
    char **ptrPtr = ptrArray;
    printf("sizeof(ptrArray) = %d\n", sizeof(ptrArray));

    int i = 0;

    /*for(i = 0; i < 4; i++)
    {
        printf("%s\n", ptrArray[i]);
        printf("%c\n", *ptrArray[i]);

        printf("PtrArray[%d] = %s\n", i, ptrArray[i]);
    }

    for (i = 0; i < 4; i++)
    {
        printf("PtrPtr + %d = %s\n", i, *(ptrPtr + i));
    }*/

    do
    {
        printf("PtrPtr + %d = %s\n", i, ptrArray[i]);
        i++;
    } while (ptrArray[i] != "");
    
    
    
    return 0;
}