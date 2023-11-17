/*
Hunter Befort
This program determines the doneness of a steak based on the temperature given through user input
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void print_info(int temp);

int main() {
    int temp1,temp2,temp3,temp4,temp5; 
    printf("This program will call 5 times a function that prints a message about the doneness level of steak given the internal temperature.\n"); 
    printf("Enter 5 temperatures (int) separated by spaces: "); 
    scanf("%d%d%d%d%d", &temp1,&temp2,&temp3,&temp4,&temp5); //reads 5 user inputs that are separated by spaces
    print_info(temp1); 
    print_info(temp2); 
    print_info(temp3);  //3rd, 4th, and 5th function calls, all based on the user input
    print_info(temp4);
    print_info(temp5);
    return 0; 
}

void print_info(int temp) {     //determines the steak doneness based on temp provided in function call
    printf("The measured meat temperature is %d.\n", temp);

    if(temp < 120) {    //for if temp is lower than 120
        printf("Start the fire!\n");
    }
    else if(temp < 130) {   //for if temp is lower than 130
        printf("Rare.\n");
    }
    else if(temp < 140) {   //temp lower than 140
        printf("Medium Rare.\n");
    }
    else if(temp < 150) {   //temp lower than 150
        printf("Medium.\n");
    }
    else if(temp < 160) {   //temp lower than 160
        printf("Medium Well\n");
    }
    else {              //for if temp is greater than 160
        printf("What have you done?!\n");
    }
}