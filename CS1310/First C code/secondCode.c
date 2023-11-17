#include<stdio.h>
int main() {        //also okay: int main(void)
    int x = 0;
    int age = -1;
    int count = 0, sum = 8, time;
    int box = sum + 7;
    x = 12;
    x = x + 3;

    float price = 12.99;

    char letter = 'B';

    printf("age = %d , x = %d\n", age, x);
    printf("price = %f\n", price);
    printf("your grade is: %c. Good Job!\n", letter);
    //int x;
    //x = 10;
    count = 9; //update cont
    printf("2\n");

    //read data from the user
    printf("What is your age? ");
    scanf("%d", &age);
    printf("So, your age is %d? Cringe.\n", age);

    return 0;
}