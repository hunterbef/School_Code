//October 24

    /*
    CRLF vs LF vs CR (carriage returns, all coded as \n)
        CRLF - windows
        LF - Unix
        CR - Mac
    Automatic Variables (auto)
        default storage class
        automatic variables are created each time its function is called and destroyed when the execution of its function terminates
        scope
            inside function - local
            default initial value - contain garbage until explicitly initialized
            lifespan - created when the function is called and destroyed when the function exits
            storage location - stack
    Static Variables (static)
        if static is not included the variable defaults to an auto variable
        static variables exist the whole time the program is executing
        memory space is allocated when program starts and is deallocated when program engs
        static variables are given a default initial value of 0
        scope 
            inside function - local
            default initial value - 0
            lfiespan - created when program starts and ends when program ends
            storage location - data segment
    Auto vs Static

    */


//October 26

    /*
    Omega server
        a general purpose linux/unix server
        configured as a learning enviornment
        I have my own personal account in omega
        omega uses an old version of c
            to start, set up the VPN
            download filezilla - tool for moving files between your computer and the server
            download putty (ideal as you can restart session very easily)
            omega password is same as netid password
            in terminal, type "ssh hxb1638@omega.uta.edu"
        omega will disconnect automatically if idle for too long
    Pointer dereferencing in a loop
        for (i = 0; i < max_cells; i++)
            *(pointerDereference + i);
    */


//October 28

    /*
    Pointer Arithmetic
        pointers can be incrfemented and decremented
            char cat[] = "dog"
                removing the brackets gives a pointer rather than a char value
                    eg, cat[2] = g
                    but cat = d
                    and cat++ = o
                    cat++ = g
                    cat-- = o 
                    cat-- = d
            increments and decrements is just moving through the pointer array by moving through the memory location of the array
        pointer addition
            adding 2 pointers together
            not allowed and doesnt give you anything
            you can add integers but not pointers
    Finding both uper and lowercase letters in a single string
        upper the whole string through a loop
            while (string[i] != null)
                string[i] = toupper(string[i])
                i++
    Enumerated types
        scalar types inc and are used to declare a set of integer constants
            words that represent numbers, not actual numbers
        enum boolean - name of enumeration
        {
            false, true - identifiers that are integral constants
        }
        enum boolean

        enum colors { red, orange, yellow, (etc.) } rainbow;
            default values are assigned to the variables starting at 0
                (in other words red = 0, orange = 1, yellow = 2 and so on)
                these values can be reassigned, and if a variable is unassigned it takes the next int value
                    eg if red was assigned 5 but orange was unassigned, orange = 6
                use a switch for the next coding assignment

    */


#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    return 0;
}