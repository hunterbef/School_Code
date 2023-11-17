//September 12, char functions

    /*
    getchar()
        int getchar(void)
        int i = getchar();
        grabs a character from the standard input
    putchar()
        int putchar(int c)
        putchar(i);
        prints the character that getchar() grabs

    CTRL-D signals end of file (EOF)
    EOF is a pre-defined variable of null or -1

    Boolean Operators 
        with || operator, whichever is greater will print
        with &&, the first variable prints
        xor (^)
            works like the normal || (or) operator except only true if one or the other is true, not both (eg 1 || 1 = TRUE, 1 ^ 1 = FALSE)

    short int (short) and long int (long)
        use to avoid issues with normal int
        behave like int 
        difference is the bytes capable of being stored in either
    
    sizeof() gives the storage size of the given operator
        can be a type name, variable type, or expression, but will always print based on variable type
            sizeof(short) = 2       sizeof(shortVar) = 2
            sizeof(int) = 4         sizeof(intVar) = 4
            sizeof(long) = 8        sizeof(longVar) = 8
    */


//September 14, unsigned types and base conversions

    /*
    Unsigned types
        int, short, long are signed types
        adding unsigned in front doubles the capacity of variables by removing the negatives
            unsigned int
                can store up to 65535 but negatives are a no go
        to print an unsigned type, add a u
            %hu     unsigned short
            %u      unsigned int
            %lu     unsigned long
    limits.h
        define INT_MIN      -2147483648
        define INT_MAX      2147483647
            adding one goes into overflow
    field width specifier
        %5d = 5 spaces designated for the output, eg) %5d of 15 prints (___)15
        basic formatting within the printf statements
    Floating Point Types
        float - single precision
            float floatVar = 3.14;
            sizeof(float) = 4
        double - double precision
            double doubleVar = 3.14159;
            sizeof(doouble) = 8
        long double - extra precision
            long double longdoubleVar = 3.14159....L(!!!);
                The L at the end is NECESSARY for long doubles
            sizeof(long double) = 16
    Unit Conversion
    */


//September 16, bit operations

    /*
    action items
        %c
            adding a space in front of the %c tells the program so skip whitespace and special characters
        
    Bit operations
        bitwise negation
            ~(expression)
                ~0001 becomes 1110
        shift right 
            >>(expression)
                >>0110 becomes 0011
                used for division
        shift left
            <<(expression)
                <<0110 becomes 1100
                used for multiplication
        bitwise AND
            &(expression)
                1110 & 0101 becomes 0100
                used for subtraction
        bitwise OR
            |(expression)
                1110 | 0101 becomes 1111
                used for addition
        bitwise XOR
            ^(expression)
                1110 ^ 0101 becomes 1011
    Bit mask
        detects whether a certain bit is on or off
        determinate based on binary, for example 345 -> 0000000101011001
        to do a mask, use the binary number for each digit
            need to find the 4th bit? do the number with the and operator (&) with 16 (the 4th digit in binary, 4th bit)
                so if 123 & 16 returns 0, then the 4th bit is off
        
    */

#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>



int main(void)
{
    printf("Test your code on gcc 9.4 on the VM fool\nCTRL + D to end the getchar\n");

    int i = 0, j = 0;

    int iochar;
    int loopCount = 0, enterCount = 0, charCount = 0;

    while (iochar != EOF)
    {
        iochar = getchar();
        putchar(iochar);

        if (iochar == '\n')
        {
            enterCount++;
        }
        else
        {
            charCount++;
        }

        loopCount++;
    }

    printf("Enter Count: %d\nChar Count: %d\nLoop Count: %d\n", enterCount, charCount, loopCount);



    return 0;
}