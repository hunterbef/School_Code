/* 
Hunter Befort
Program that demonstrates function calls and formatted printing.  
*/ 
 
#include <stdio.h> 
 
void print_row(int qty, float price);           //function declaration of type void
 
int main(){ 
    int qty1, qty2; 
    float price1, price2; 
    printf("Enter first item price: "); 
    scanf("%f", &price1); 
    printf("Enter first item count: "); 
    scanf("%d", &qty1); 
    printf("Enter 2-nd item price: "); 
    scanf("%f", &price2); 
    printf("Enter 2-nd item count: "); 
    scanf("%d", &qty2); 
    printf("Summary:\n"); 
    print_row(qty1, price1); 
    print_row(qty2, price2); 
    return 0; 
} 
 
void print_row(int qty, float price) {                      //function declaration for print_row for type void
    float total = qty * price;                              //calculates the total price

    printf("|%8.2f|%5d|%15.3f|\n", price, qty, total);      //prints out the variables given by user input and the total price and formats it
    printf("--------------------------------\n");

} 