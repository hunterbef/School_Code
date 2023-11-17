#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


void insertion_sort(int A[], int N)
{
    int j, k, key;
    for(j = 0; j < N; j++)
    {
        key = A[j];
        k = j - 1;
        while((k >= 0) && (A[k] > key))
        {
            A[k + 1] = A[k];
            k = k - 1;
        }
        A[k + 1] = key;
    }
}

int search(int A[], int N, int v)
{
    int left, right;
    left = 0, right = N - 1;
    while(left <= right)
    {
        int m = (left+right)/2;
        if(v == A[m])
            return m;
        if(v < A[m])
            right = m - 1;
        else
            left = m + 1;
    }

    return -1;
}


int main(void)
{
    int data[7] = {5, 3, 7, 8, 5, 0, 4};
    int idxs[7] = {0, 1, 2 , 3, 4, 5, 6};
    int N = 7;
    int j, k, key;

    for(j = 0; j < N; j++)
    {
        key = data[j];
        k = j - 1;
        while((k >= 0) && (data[k] > key))
        {
            data[k + 1] = data[k];
            k = k - 1;
        }
        data[k + 1] = key;
    }

    return 0;
}