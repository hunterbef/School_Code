/*
Hunter Befort
This program reads three numbers from user input and prints the largest one out
    runs this function twice
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

void run1();

int main() {
    run1();                                 //runs the function twice
    run1();

    return 0;
}

void run1() {
    int num1, num2, num3, max;
    printf("Enter 3 integers separated by a space: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if ((num1>num2) && (num1>num3)) {       //trys to find if the first number is the max
        max = num1;
    }
    else if ((num2 > num3)) {               //if first number isnt max, tries second number
        max = num2;
    }
    else {                                  //if neither of the first two numbers are the max, that means the third one is by default
        max = num3;
    }

    printf("The max is: %d\n", max);        //prints out the max
}