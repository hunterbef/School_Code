/*
problem: algebraic expression to solve a word problem
write a program that takes sam's age and prints judy's and anne's age given that
sam is x, anne is 3 years younger than sam and anne is also twice as old as judy.

Sample run:
Enter sam's age: 15
Judy is: 6
Anne is: 12
*/

#include <stdio.h>
#include <string.h>     //needed for strlen() function

int main() {
    /* //Algebraic expressions
    float sam, judy, anne;

    printf("Enter Sam's age: ");
    scanf("%f", &sam);
    anne = sam - 3;
    judy = anne / 2;

    printf("Judy is: %.1f\n", judy);
    printf("Anne is : %.1f\n", anne);           //.1 means only one decimal point from the float will be printed
    */
    
    
    //strings
    int N = 0;
    char letter = 'A';
    char word[51] = {};      //h1 = 1 (special at the end) + 50 characters that i want to be able to use
    //{} initializes it to an empty string
    printf("Enter a word: ");
    scanf("%s", word);          // word doesnt need an & because it is the memory address where the 51 characters will be saved
    printf("You said: %s\n", word);
    N = strlen(word);           //strlen() = string length, needs #include <string.h>
    printf("Your word is %d characters long.\n", N);

    return 0;
}