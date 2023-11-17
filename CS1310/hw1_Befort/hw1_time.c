/*
Hunter Befort
This program computes the time to arrive to a destination by taking
    user input on distance and speed, and then prints time to arrive
*/

#include <stdio.h>

int main() {
    float distance, speed;

    printf("Enter the distance (miles): ");
    scanf("%f", &distance);                         //reads user input for the distance
    printf("Enter the car speed (miles/hour): ");
    scanf("%f", &speed);                            //reads user input for the speed
    
    printf("Travel time: %f\n", distance/speed);    //calculates and then prints the time traveled
    return 0;
}