/*
Hunter Befort

This program calculates the number of hours Bhavna needs to study on both Saturday and Sunday
*/

#include <stdio.h>
#include <math.h>

#define FRI 2.0                     //friday will always be 2 hours, establishes friday as a constant variable

int main() {
    float h, sat, sun, total;

    printf("This program test that the formula (h-2)/4 is correct for the given problem.\n");
    printf("Enter h: ");
    scanf("%f", &h);                //reads number of hours wanted to study

    sun = ((h - 2) / 4);            //uses the formula to calculate sundays hours
    sat = (sun * 3);                //saturday is exactly 3 hours more than sundays hours studied
    total = FRI + sat + sun;        //total number of hours studied over the weekend

    printf("Number of hours to study on Sunday:%8.2f\n", sun);
    printf("Number of hours to study on Saturday:%6.2f\n", sat);
    printf("Number of hours to study on Friday:%8.2f\n", FRI);

    printf("%.3f + %.3f + %.3f = %.3f\n", sun, sat, FRI, total);
    printf("Good bye.\n");

    return 0;
}