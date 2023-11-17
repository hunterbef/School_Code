/*
Sort complexities

    -Insertion sort
        Best case:      O(N)
        Worst Case:     O(N^2)

    -Bucket Sort
        Best Case:      O()
        Worst Case:     O()

    -Count Sort
        Best Case:      O()
        Worst Case:     O()
*/


//idx(i) = (i - min)(number of nodes) / (1 + max - min)



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct node *nodePT;

struct node
{
    int data;
    struct node *next;
};

void countSort()
{

}

void bucketSort(int *A, int n)      
{

}

int main(void)
{
    int j;
    int arr[] = {5, 1, 8};
    nodePT listArr[5];
    
    for(j = 0; j < 5; j++)
    {
        listArr[j] = NULL;
    }

    //listArr[0] = new node(5);
    //listArr[2] = ;

    return 0;
}