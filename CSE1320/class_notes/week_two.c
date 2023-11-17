//Hunter Befort, 1001181638
//August 29th, UNIX and C stuff
    
    /* UNIX (CASE SENSATIVE, no commas)
        ls      - lists the contents of the current working directory
        ls -a   - lists hidden files (space necessary)
        ls -l   - lists files and more information about them
        rm      - deletes a file
        touch   - creates a new file
        mkdir   - makes subdirectories
        cd      - change directory; returns to home directory if used without a flag
        cd -    - returns you to the directory you were last
        cd ..   - backs up one folder in directory
        pwd     - prints the working directory
        cp      - makes a copy of a file
        mv      - renames a file
        rmdir   - deletes/removes a directory
        cat     - display the entire contents of a file at once
        more    - displays contents of a file one line at a time
        clear   - clears the screen/command prompt; doesn't fully clear on omega
        apropos - used to display any command that references xxx; ex: "apropos clear" shows all commands with clear in it
        man     - displays the manual built into unix for commands; ex) "man clear" displays the manual for clear
        gcc     - 
        tips
            history             - 
            tab completion      - code2_1001181638 is the file name, but UNIX will recognize code2(TAB) as the file
            UP arrow history    - 
    */


//August 31, C programs

    /*
    Language Levels
        low level - assembly languages - used to write operating systems, harder to port between systems
        intermediate level -  (C)
        high level - makes programs easier to port between systems (Java, C++, Python)
    ASCII (must know, memorize)
        A - 65, Z - 90
        a - 97, z - 122
        0 - 48, 9 - 57
        Space - 32
    
    */


//September 2, character set and C

    /*
    Rehash of Memorizing ASCII
        A - 65
        a - 97
        0 - 48
        [Space] - 32
    Name and ID must be at top in comments of each program
    Libraries
        stdio.h
            printf()
        math.h
            sin()
            ceil()
        string.h
            strlen()
            strcopy()
            strcat()
            strcomp()
            memcopy()
    Can use ASCII with backslash, \065 prints '5'
    DO NOT ADD A \n NEXT TO AN IDENTIFIER, eg) dont do "%d\n"
    NO GLOBAL VARIABLES
    
    Structured Programming
        Write source Code that is/has
            modular
            easily modifiable
            robust
            readable
            single task functions, name should describe what the function does
            write functions that dont need much modification
    */

#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>



int main(void)
{
    printf("Ricadoo moment\n");
    return 0;
}