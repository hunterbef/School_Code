/*
Hunter Befort
This program prints out a user inputed grade as well as a comment dependent on the grade, which can be entered in both upper and lower case
    The output for and A grade changes based on the string provided in the function call
*/

#include <stdio.h>

void run_switch(char messageA[]);           //string is included to be called for A grades

int main () {
   run_switch("Keep up the excellent work!\n"); //the string will be printed if an 'A' is enterred 
   run_switch("Awesome! You made an A!\n");
   run_switch("Way to go!\n");
   return 0;
}
void run_switch(char messageA[]) {
   /* local variable definition */
   char grade = 'B';
   printf("Enter student grade (uppercase): ");
   scanf(" %c", &grade);  // " %c" skips the white spaces: space, Tab, ENter
   printf("Your grade is  %c\n", grade );
   switch (grade) {
      case 'A' :
      case 'a' :        //case for the lowercase A
         printf("%s", messageA);  //this time it prints out the string that was provided in the function call
         break;  // makes the flow of control get out of switch
      case 'B' :
      case 'b' :
      case 'C' :
      case 'c' :    //upper and lowercase provided
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