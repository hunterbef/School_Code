/*
Hunter Befort
This program prints out a user inputed grade as well as a comment dependent on the grade, which can be entered in both upper and lower case
*/

#include <stdio.h>

void run_switch();

int main () {
   run_switch();
   run_switch();    //3 functions calls, should have 3 different outputs dependent on user input
   run_switch();
   return 0;
}
void run_switch() {
   /* local variable definition */
   char grade = 'B';
   printf("Enter student grade (uppercase): ");
   scanf(" %c", &grade);  // " %c" skips the white spaces: space, Tab, ENter
   printf("Your grade is  %c\n", grade );
   switch (grade) {
      case 'A' :
      case 'a' :        //case for the lowercase A
         printf("Excellent!\n" );
         break;  // makes the flow of control get out of switch
      case 'B' :
      case 'b' :
      case 'C' :
      case 'c' :    //upper and lower cases are provided as a catch for user error
         printf("Well done\n" );
         break;
      case 'D' :
      case 'd' :
         printf("You passed, but remember that you need C or higher to enroll in CSE 1320.\n" );
         break;
      case 'F' :
      case 'f' :
         printf("Better try again\n" );
         printf("Make sure to attend lectures and start homework as soon as it is posted.\n");
         break;
      default :  // catch all other situations
         printf("Invalid grade\n" );
   }
   printf("Function finished\n");
}