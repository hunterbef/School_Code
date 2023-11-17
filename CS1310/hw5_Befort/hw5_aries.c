/*
Hunter Befort
This program determines whether or not someone is an aries based on their user inputed birthday
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int month, day;

    printf("--- Sample Run:\n");

    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the day: ");
    scanf("%d", &day);

    if((month==3)||(month==4)) {                        //checks if the month is march or april
        if((month==3) && ((day>20) && (day<32))) {      //checks if the date in march is within range of aries (21st to 31st)
            printf("Aries.");
        }
        else if((month==4) && ((day>0) && (day<20))) {  //checks if the date in april is within range of aries (1st to 19th)
            printf("Aries.");
        }
        else {                              
            printf("Not Aries.");                       //returns not aries when date is not within aries range
        }
    }
    else {
        printf("Not Aries.");                           //returns not aries when month is not march or april
    }

    return 0;
}