#include <stdio.h>

#define DAYS_PER_WEEK 7
//must be below the include, cant be inside the main

int main() {
    int days = 3 * DAYS_PER_WEEK;
    printf("%d weeks have %d days.\n", 3, days);
    //DAYS_PER_WEEK = 10;       syntax error, does not compile
    //cannot change a constant

    int y, x = 3;

    y = (x * 2.6);
    printf("y = %d\n");


    //abs(x) - absolute value of x
    //sqrt(x) - square root of x
    //round(x) - the rounding (up or down) of x
    //ceil(x) - rounding up to nearest whole number of x
    //floor(x) - rounding down to nearest whole number of x

    return 0;
}