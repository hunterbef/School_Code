//November 14

    /*
    Memory Allocation
        malloc(number of items * size) - manual allocation of memry
            does not initialize the memory allocation
            use if performance is more important
        calloc(number of items, size of each item) - clean allocation of memory
            does the same thing as malloc, except memory allocated is automatically initialized to 0
            use if initializing memory is more important
        realloc(*ptr, new size of the block in bytes) - reallocation of memory
        free(*ptr) - frees the memory to avoid memory leaks
            *ptr = pointer to the allocated space
            do not use mempry
            if you free memory, set the pointer back to NULL
                free(arrayptr1);
                arrayptr1 = NULL;
    */


//November 16

    /*
    Memory Allocation
        realloc(*ptr, new size) - adds extra memory
            *ptr is what is returned by malloc or calloc
            newly allocated memory is not initialized
            new memory is always added at the end
    Linked Lists
        linear data structure that consists of groups of nodes in a sequence
            nodes are structs that contained that are malloced
        each node holds its own data and address of the next node
        advantages of linked lists
            dynamic: can allocate memory when needed
            insertion and deletion operations are easily executed
            stacks and queues are easily executed
        disadvantages
            sequential access

        Linked list example
            |Head| -> |Data|Pointer| -> |Data|Pointer| -> NULL
                          NODE              NODE
        can insert and delete a node with malloc and free
    */


//November 18

    /*
    Linked Lists

    */


#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

//using dynamic memory allocation to read a file with variable length fields
typedef struct
{
    char *category;
    char *name;
    char *whatsincluded;
}
TACOBELL;

struct node
{
    int node_number;
    struct node *next_ptr;
};




int main(int argc, char *argv[])
{
    /*int *arrayptr1 = NULL;
    int arraysize = 0;
    int i = 0;

    printf("How big is the array you want to create?: ");
    scanf("%d", &arraysize);
    
    arrayptr1 = malloc(arraysize * sizeof(int));

    for (i = 0; i < arraysize; i++)
    {
        *(arrayptr1 + i) = i + 65;
    }

    for (i = 0; i < arraysize; i++)
    {
        printf("element[%d] = %c\n", i, *(arrayptr1 + i));
    }

    TACOBELL Menu[20] = NULL;
    char *token = NULL;
    char filename[20];
    char FileLine[200] = NULL;
    FILE *FH = NULL;
    int MenuCount = 0;
    int i;

    strcpy(filename, argv[1]);



    while (fgets(FileLine, sizeof(FileLine) - 1, FH))
    {
        token = strtok(FileLine, "|");
        Menu[MenuCount].category = malloc(strlen(token) * sizeof(char) + 1);
        strcpy(Menu[MenuCount].category, token);
        
        token = strtok(NULL, "|");
        Menu[MenuCount].name = malloc(strlen(token) * sizeof(char) + 1);
        strcpy(Menu[MenuCount].name, token);

        token = strtok(NULL, "|");
        Menu[MenuCount].whatsincluded = malloc(strlen(token) * sizeof(char) + 1);
        strcpy(Menu[MenuCount].whatsincluded, token);

        MenuCount++;
    }

    for (i = 0; i < MenuCount; i++)
    {

    }*/

    struct node *LinkedListHead;
    LinkedListHead = NULL;

    /*struct node *newNode;
    newNode = malloc(sizeof(struct node));

    newNode->node_number = 11;  //the node number to add, in this case its 11
    newNode->next_ptr = NULL;

    if (LinkedListHead == NULL)
    {
        LinkedListHead = newNode;
    }

    struct node *TempPtr, *NewNode;

    NewNode = malloc(sizeof(struct node));
    NewNode->node_number = 12;
    NewNode->next_ptr = NULL;

    TempPtr = LinkedListHead;
    while(TempPtr->next_ptr != NULL)
    {
        TempPtr = TempPtr->next_ptr;
    }
    TempPtr->next_ptr = NewNode;*/

    struct node *TempPtr, *NewNode, *PrevPtr;
    PrevPtr = NULL;
    TempPtr = LinkedListHead;

    while (TempPtr != NULL && TempPtr->node_number < 33)        //The 33 is a standin for whatever the node number to insert is
    {
        PrevPtr = TempPtr;
        TempPtr = TempPtr->next_ptr;
    }

    NewNode = malloc(sizeof(struct node));
    NewNode->node_number = 33;                                  //same as above
    NewNode->next_ptr = TempPtr;

    if (PrevPtr == NULL)
    {
        LinkedListHead = NewNode;
    }
    else
    {
        PrevPtr->next_ptr = NewNode;
    }



    return 0;
}