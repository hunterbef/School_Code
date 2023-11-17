//September 19, random numbers, arrays

    /*
    int rand(void)
        psuedo random number in the range of 0 to RAND_MAX
        RAND_MAX is a constant hose default value
        call rand() and then use modulo (%) to keep it in a range
            for example, random number between 0 and 49 would be:
                rand() % 50
                (rand() % 50) + 1
                    this returns a random number from 1 to 50
        only psuedo random, each random call will print out the same number every time
            unless you seed the random number generator with srand()
            pass time(0) to srand() to get a true random number generator
    
    One Dimensional Arrays
        arrays are an aggregate type
        if you bitwise or a uppercase letter it will become lowercase
            char MyCharArray[3] = {'A', 'B', 'C'};
            MyCharArray | 32;       this makes MyCharArray[] = {'a','b','c'}
        if you bitwise xor a lowercase letter it becomes uppercase

        %p prints memory address
    */


//September 21, Arrays, twos compliment

    /*
    Arrays as parameters
        can an array be returned from a function?
            no, use a void function to change an array in a function
    Twos complement
        representing negative numbers in binary
            positive 5 in binary: 0101
            negative 5 with twos complement: 1011
        replace the 4th bit that represents 8 to represent a negative sign, 0 is also removed
            1111 is -1
            no -0, 1000 is -8

    */



#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;

    srand(time(0));

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", rand() % 50);
    }

    return 0;
}