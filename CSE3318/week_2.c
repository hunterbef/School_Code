//Feb 7
    /*

    */


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

void destroy_list(nodePT L)
{
    nodePT next;
    nodePT curr = L;
    while(curr)
    {
        next = curr->next;
        free(curr);
        curr = next;
    }
}

int main(void)
{

}