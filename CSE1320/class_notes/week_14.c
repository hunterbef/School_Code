//November 28

    /*
    Recursion

    */


//November 30

    /*
    Trees

    */

//December 2

    /*

    */


//December 5

    /*
    
    */

#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int factorial(int n);

struct week_14
{
    /* data */
};

typedef struct node
{

}
node;

typedef struct QNODE
{

}
QNODE;

//FEQ3
void AddNode(int NewNodeNumber, node **LinkedListHead)
{

}

void DisplayLinkedList (node *LinkedListHead)
{

}

//FEQ4
void enQueue()
{

}

void deQueue()
{

}

//FEQ5
void AddBSTNode()
{
    
}


int main()
{
    int input, output;

    printf("joe mama:  ");
    scanf("%d", input);

    output *= factorial(input);

    printf("\n%d\n", output);


    


    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

