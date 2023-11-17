//November 7

    /*
    Command Line Parameters
        sequence of strings used to pass information to a c program at execution time
        separated by white space
        accessd vja arguments to main
            main(int argc, char *argv[])
                argc and argv are traditional names but can be anything
                    argc is the count of parameters on the command line
                        is always at least 1
                    argv is an array of pointers to characters
                        point to the strings that appear on the command line
                        is indexed from 0 to (argc - 1) and terminated with a null pointer
        running a program with command line parameters
            a.out clp1 clp2 clp3
        running a program in debug with command line parameters
            gdb --args a.out clp1 clp2 clp3
                --args is NECESSARY to run debug with command line parameters
    File Handling
        c does not impose structure on a file, a file is just a sequence of data
        the concept of a record in a file does not exist
        the application using the file imposes the structure/record on file
        c views each file as a sequence of bytes
        when a file is opened for use in a program, the programmer mst declare a new variable of type FILE *
            FILE *myfile, *yourfile;
            myfile = fopen("filename", "mode");
                myfile = fopen("it.txt", "r");
        after opening a file it should be closed as soon as possible to prevent conflicts with other processes
            fclose(FileHandle);
                fclose(myfile);
        "r" - open a file to read
        "w" - open a file to write
    */


//November 9

    /*
    File Handling
        myfilehandle = fopen("filename", "mode");
            mode = how to handle the file after opening
                "r"  - reading the file only
                "w"  - write to the file only
                "w+" - read and write the file
        formatted input and output
            fprintf() and fscanf()
                do formatted inpuy and output to and from a file
            sprintf() and sscanf()
                write and read to a string
        two types of access in file handling
            sequential access (VHS, analogy)
                proceeds through file in a sequential manner
            random access (DVD)

                fseek(fp, offset, start);
                ftell(fp);
    */


//November 11

    /*
    File Handling
        Two types of access
            Sequential Access
                move through the file sequentially
            Random Access
                move to any point in the file you want to
                2 library functions to help with random access of files
                    fseek(fp, offset, start);
                        fp - file handle
                        offset - long variable that represents the 
                        start - beginning position for the file pointer (must be 0, 1, or 2)
                    ftell(fp);
                SEEK_SET
                SEEK_CUR
                SEEK_End
        sscanf(buffer, control string, args)
        sprintf(buffer, control string, args)
    */

#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>



int main(int argc, char *argv[])
{
    FILE *FH;

    char filename[100] = {};
    char fileline[100] = {};

    printf("Enter the file name: ");
    scanf("%s", filename);

    FH  = fopen(filename, "a+");

    if (FH == NULL)
    {
        printf("file didnt open...");
        exit(0);
    }

    /*if (argc == 3)
    {
        strcpy(filename1, argv[1]);
        strcpy(filename2, argv[2]);
    }*/

    while (fgets(fileline, sizeof(fileline) - 1, FH))     //fgets returns null when it reaches the end of the file a file
    {

    }
    
    return 0;
}