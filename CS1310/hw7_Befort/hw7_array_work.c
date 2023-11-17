/*
Hunter Befort
This program creates an array whose size is determined by user input, and whose contents are also determined by user input
    the program then prints the array (formatted for 5 spaces), reverses it and prints, then takes each value and adds 10 to each and prints
        and then takes each value and adds 100 to each (total adding 110 to each value in the array) 
*/
#include <stdio.h>

void user2array(int N, int arr[]);
void print_array(int N, int arr[]);
void reverse(int N, int arr[]);
void add_val(int N, int arr[], int val);

int main(){
    int N, mx, value;

    printf("Enter N: ");
    scanf("%d", &N);

    int arr[N];

    user2array(N, arr);

    print_array(N, arr);

    reverse(N,arr);
    printf("\nAfter reversing the array is:\n");
    print_array(N,arr);

    value = 10;
    add_val(N, arr, value);
    printf("\nAfter adding value %d to every element in it: \n", value);
    print_array(N, arr);

    value = 100;
    add_val(N, arr, value);
    printf("\nAfter adding value %d to every element in it: \n", value);
    print_array(N, arr);
}

// Write code for the missing functions.
void user2array(int N, int arr[]) {
    printf("Enter %d integers: ", N);
    for (int x = 0; x < N; x++) {
        scanf("%d", &arr[x]);       //scans each number entered and places each inputed number in the corresponding index of the array
    }
}

void print_array(int N, int arr[]) {
    printf("The array is:\n");
    for (int x = 0; x < N; x++) {
        printf("%5d,", arr[x]);     //prints each number within the array in order
    }
}

void reverse(int N, int arr[]) {
    int temp;
    for (int x = 0; x < N/2; x++) {     //runs a loop that halves the size of the array
        temp = arr[x];                  //creates a placeholder variable to hold the number in the array at that certain point
        arr[x] = arr[N - 1 - x];        //sets the array at inddx x to the point directly opposite of index x (array size 10, index 1 opposite would be index 8)
        arr[N - 1 - x] = temp;          //then sets the opposite side of the array to the placeholder number that was initially in the array at index x
    }
}

void add_val(int N, int arr[], int val) {
    for (int x = 0; x < N; x++) {
        arr[x] += val;                  //simply adds a given value to each number at index x in the given array
    }
}