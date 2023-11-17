//September 28

    /*
    GDB commands
        list - lists your code
            list 1 - first 10 lines
            list n - show 5 lines before n and 4 lines after
            list x,y - shows lines x thru y
            list (function name) - show 4 lines before the function and 5 after
            list - shows next 10 lines
        help
            help - list all commands
            help (command) - lists all forms of a command
        break
            break main - set break point to main()
            break (function) - set break point to a function
            break (line number) - set break point to certain line
            info break - lists set breakpoints
        print
            print (variable) - print value stored in variable
            print /t (variable) - print integer value in binary
            print /x (variable) - print integer value in hex
            print (*ArrayNameArrayLength) - 
        step
            executes the current line of code and displays the next line of code to be executed
            if the current line is a function, step will start the cunction at the first line of the function
        clear
            clear - delete breakpoint
            clear 
        next
            executes the current line of code and displays the next line of code to be executed
            if the current line is a function, next eecutes the whole function and stops at the next line after the function
        watch
            set watchpoint for expression
            GDB will break when the expression is written into by the program and its value changes
        quit
            exit gdb
        finish
            execute the current function

    Starting gdb
        break main
        run - start program execution from the beginning of the program
        c - continue
    */


//September 30

    /*
    Pointers
        many different sizes
        each pointer has a unique address
        %p - used to print memory addresses
            never write code that will rely on memory code, memory will change each run of the program
        a way to store the address of a memory location
        pointer variable points to another variable
            stores the address of the memory location allocated for values of the other variable
            just tells you where the variable "lives"
        pointer is a data type
            every data type has a corresponding pointer type (int has *int, char has *char)
            can even have a pointer to a pointer since a pointer holds a memory address
        system recognizes whether an '*' is a pointer or an expression based on code context
        viable ways to use a pointer
            int *ptr
            int* ptr
            int*ptr
        '*' does not carry over, if initializing multiple pointers each variable must have the '*'
            int *ptr1, ptr2, ptr3;      only ptr1 is a pointer
            int *ptr1, *ptr2, *ptr3;    all 3 are pointers
        Initializing null pointer
            int *varPtr = NULL;
        
    */




#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int varA = 123;
    int *varAPtr = &varA;

    printf("The contents of varA:\t\t%d\n", varA);
    printf("The address of varA:\t\t%p\n", &varA);
    printf("The address stored in varAPtr:\t%p\n", varAPtr);


    return 0;
}