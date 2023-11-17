//January 26

    /*
    
    */



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/*
int * mem_1_in(int x)
{                               // line 1
      x = x + 2;                // line 2
      return &x;                // line 3
}*/

/*
void mem_3()
{                               // line 1
    int *p = 25;                // line 2
    printf("p = %d\n", *p);     // line 3
}*/

/*
void mem_4()
{                               // line 1
    double d;                   // line 2
    double *p;                  // line 3
    p = &d;                     // line 4
    *p = 7;                     // line 5
}*/

/*void mem_5()
{                               // line 1
    int * p;                    // line 2
    p = (int*)malloc(sizeof(int));   // line 3
    p = 7;                      // line 4
    free(p);                    // line 5
}*/

/*
void test1(int v)
{
    v = 20;
    printf("test 1: v = %d\n", v);
}

void test2(int * v1)
{   
    *v1 = 10;
    printf("test 2: v1 = %d\n", *v1);
}

void test3(int * v1)
{   
    v1 = (int*)malloc(sizeof(int));
    *v1 = 15;
    printf("test 3: v1 = %d\n", *v1);
}*/

typedef struct node *nodePT;
struct node
{
    int data;
    struct node *next;
};

void printLL(nodePT L);
void printLLRec(nodePT L);
void printLLRevRec(nodePT L);

int main(int argc, char** argv) 
{
    /*int v = 0;
    printf("main, 1, v = %d\n", v);
    test1(v);
    printf("main, 2, v = %d\n", v);

    int* v1;
    v1 = (int*)malloc(sizeof(int));
    *v1 = 5;
    printf("--------------------\n");
    printf("main, 3, v1 = %d\n", *v1);
    printf("main, 4, v1 = %d\n", v1);

    printf("--------------------\n");
    test2(v1);
    printf("main, 5: v1 = %d\n", *v1);

    printf("--------------------\n");
    test3(v1);
    printf("main, 6: v1 = %d\n", *v1);
    free(v1);*/

    

    return 0;
}

void printLL(nodePT L)
{
    nodePT curr = L;
    
    while(curr != NULL)
    {
        printf("%d", curr->data);
        curr = curr->next;
    }
}

void printLLRec(nodePT L)
{
    if (L == NULL)
        return;

    printf("%d", L->data);
    printLLRec(L->next);
    
}

void printLLRevRec(nodePT L)
{
    if (L == NULL)
        return;

    printLLRevRec(L->next);
    printf("%d", L->data);
}

