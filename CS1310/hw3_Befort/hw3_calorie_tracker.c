/*
Hunter Befort
This program reads user input for 2 days worth of meals and calculates the total calories consumed from both days
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int day_calories();                             //declares function

int main() {
    int total = 0;                              //I'm more comfortable initializing total since the calorie counts will be added to it

    printf("This program will read the calories from each meal over 2 day, and print the total\n");
    total += day_calories();                    //calls for first day calorie counts and adds them into total
    total += day_calories();                    //calls for second day calorie counts and adds them into total
    printf("The total calories over the last two days are: %d\n", total);

    return 0;
}

int day_calories() {                            //function definition that reads user input for daily calorie counters for meals
    int breakfast, lunch, dinner, dayTotal;

    printf("Enter the breakfast calories: ");
    scanf("%d", &breakfast);                    //reads user input for breakfast calories
    printf("Enter the lunch calories: ");
    scanf("%d", &lunch);                        //reads user input for lunch calories
    printf("Enter the dinner calories: ");
    scanf("%d", &dinner);                       //reads user input for dinner calories

    dayTotal = breakfast + lunch + dinner;
    return dayTotal;
}