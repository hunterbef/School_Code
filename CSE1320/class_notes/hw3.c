#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char banan[6] = "Banana";
    //char arr1[100] = "hello";
    //char arr1[100] = "abcdefghi";
    //char arr1[100] = "Bob Smith,Jr|100 Byte Lane|Binary|TX|01010";
    char arr1[100] = "parameter";
    //char arr2[100] = "world";
    //char arr2[100] = "bdfgi";
    //char arr2[100] = "|,";
    char arr2[100] = "meter";
    char *token;
    //char arr[100] = "wonder";
    //char arr[100] = "too";
    char arr[100] = "The quick brown fox";
    char buffer[20] = {};
    char monkey[] = {"BANANABANANA"};
    char mouse[20] = {};
    char ch = 'o';

    //token = strtok(arr1, arr2);

    //*(strchr(arr, ch) + 1) = 'w';
    //printf("\n%s\n", arr);

    //printf("\n%s\n", strcat(arr1, arr2));

    *(strstr(arr1, arr2) - 1) = 'i';
    *(strstr(arr1, arr2) - 3) = 'e';

    printf("\n%s\n", arr1);

    /**(arr + strlen("quick brown") - 2) = '\0';
    printf("\n%s\n\n", arr);

    fgets(monkey, 7, stdin);
    monkey[strlen(monkey)] = ' ';
    printf("\n%s\n", monkey);

    printf("Enter your mouse name: ");
    scanf("%s", mouse);
    printf("\n%s\n", mouse);
    
    char ch = 'o';
    char *first;
    first = strpbrk(arr1, arr2);
    
    //printf("%c\n", *&*(strstr(banan, "ana") - 1));
    //printf("\n%ld\n", strlen(arr1) + strlen(arr2));
    //strcat(arr1, arr2);
    //printf("\n%s\n", arr1);

    //(strchr(arr, ch)) = 'a';
    //printf("\n%s\n", arr);

    if (strcmp(arr1, arr2) == 0)
        printf("\n0\n");
    else if (strcmp(arr1, arr2) > 0)
        printf("\npositive\n");
    else if (strcmp(arr1, arr2) < 0)
        printf("\nnegga tive\n");

    while (first != NULL)
    {
        *first = 'x';
        first = strpbrk(arr1, arr2);
    }
    printf("\n%s\n", arr1);

    fgets(buffer, 10, stdin);
    printf("%s", buffer);

    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, arr2);
    }*/

    return 0;
}