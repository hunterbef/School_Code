#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>



enum Smurfs
{
    handy = 11, lazy = 2, grouchy, brainy = 6, hefty, clumsy
}
lilBlueMen;

enum musketeers
{   
    athos = -1, porthos, aramis
};

/*struct Mouse
{
    char shoe_color[10];
    char glove_size[5];
    struct Mouse Minnie;
}
Mickey;*/

typedef struct
{
    char color[10];
    int sweetness;
}
APPLE;

struct car
{
    char make[50];
    char model[50];
    int year;
};

struct Mouse
{
    char shoe_color[10];
    char glove_size[5];
}
Mickey;

union Taco
{
    int lettuce;
    int tomato;
    long hamburger;
    long long cheese;
};

struct Fruit
{
    char name[20];
    char color[13];
    char edible;
    char peelable;
}
Apple[5], Orange[6];

struct tshirt
{
    char design[20];
    int inventory;
};

struct Bunny
{
    char color[10];
    char breed[10];
    int age;
};


int main()
{
    int threemusk = athos + porthos + aramis;
    //printf("\n%d\n", clumsy);
    //printf("\n%d\n", threemusk);

    //int Chicken[4] = {7, 5, 9, 1};
    //printf("\n%d\n\n", *(Chicken + 3));

    //char myletter[3] = "012";
    //int mynum = 0;
    //mynum = atoi(myletter);
    //printf("\n%d\n\n", mynum);

    /*APPLE gala = {"red", 10};
    APPLE granny = {"green"};
    printf("\n%s%d\n\n", gala.color, granny.sweetness);*/

    /*struct car MyCar, YourCar, HerCar, HisCar;
    strcpy(MyCar.make, "HONDA");
    strcpy(MyCar.model, "ODYSSEY");
    MyCar.year = 2001;
    YourCar = MyCar;
    printf("\nYour car is a %d %s %s\n\n", YourCar.year, YourCar.make, YourCar.model);*/

    /*struct Mouse *Minnie = &Mickey;
    memcpy(Minnie->shoe_color, "YELLOW", 6);
    Minnie->shoe_color[strlen("GREEN")-1] = '\0';
    printf("\n%s\n\n", Mickey.shoe_color);*/

    /*union Taco Crunchy;
    Crunchy.lettuce = 99;
    Crunchy.tomato = 108;
    Crunchy.hamburger = -31;
    Crunchy.cheese = -928;
    printf("\n%ld\n\n", Crunchy.hamburger);*/

    /*int PeasInAPod[6] = {8,-5,-7,12,-6,5};
    int i, count = 0;
    for (i = 0; i < *&*&*&*&*&*&*(PeasInAPod+5); i++)
    {
        count += *&*&*(PeasInAPod+i);
    }
    printf("How many peas are in pod?\n");
    printf("\n%d\n\n", count);*/

    /*enum CostumeColors {Black, Grey, Yellow, Red=13, Blue, Orange, Green};
    typedef int Man;
    Man Bat = Grey + Black;
    Man Super = Blue + Red + Yellow;
    Man Aqua = Orange + Green + Yellow;
    printf("\n%d%d%d\n\n", Bat, Super, Aqua);*/

    /*enum Family {Son, Daughter};
    int You = Son ^ Daughter;
    int *Mom = &You;
    int **Grandma = &Mom;
    printf("\n%d\n\n", **Grandma);*/

    /*struct Fruit Banana[7] = {{"APPLE","YELLOW",'Y','Y'},
                             {"CAVENDISH","YELLOW",'Y','Y'},
                             {"LADY FINGER","YELLOW", 'Y','Y'}};
    printf("\n%s\n\n", strstr(Banana[2].name, "ING"));*/

    /*char ch;
    printf("Enter a character ");
    scanf(" %c", &ch);
    if (islower(ch)) printf("e");
    if (isupper(ch)) printf("f");
    if (isalpha(ch)) printf("g");   
    if (isalnum(ch)) printf("h");
    if (isdigit(ch)) printf("i");   
    if (ispunct(ch)) printf("j");*/

    //struct Bunny Bugs = {"GREY", "WABBIT"};
    //printf("\n%d\n\n", Bugs.age);

    /*enum Smurfs
    {

        Handy,Lazy,Grouchy,Brainy,Hefty,Clumsy
    }
    LittleBluePeople;
    printf("%d", Clumsy);*/

    //union Taco Crunchy;
    //printf("%ld", sizeof(Crunchy));

    //char matrix[][4] = {{"kdos"}, {"uqnx"}, {"edhd"}};
    //printf("\n%c%c%c\n\n", *(*(matrix + 1) + 2)^32, *(*(matrix + 2) + 0), *(*(matrix + 0) + 2));

    /*char camel[] = "Caravan";
    *(camel + 3) = '&';
    *(camel + 4) ^= 32;
    printf("%s", camel);*/

    /*char rab = 'r';
    char bun = 'B';
    bun = tolower(bun);
    rab = toupper(rab);
    printf("\n%c%c%c%c\n\n", bun, rab, toupper(bun), tolower(rab));*/

    /*char Cup[20] = "half ";
    char Glass[20] = "fullhouse";
    char Optimist[20] = {};
    strncat(Optimist, Cup, 5);
    memcpy(&Optimist[5], Glass, 4);
    printf("\n%s\n\n", Optimist);*/

    //char *sb = "So sad...Spring Break is over";
    //printf("\n%c%c%c\n\n", *sb, (*(sb+9)-18)|32, (*(sb+16)+2)|32);

    int bears[] = {3,2,6,8,2};
    int *ptr1 = bears;
    int *ptr2 = ptr1 +3;
    printf("%d\n\n", ptr1 - ptr2);

    return 0;
}


void UpdateInventory(struct tshirt *TShirtPointer)
{
    printf("Enter the new inventory level for the %s design TShirt ", TShirtPointer->design);
    scanf("%d", &TShirtPointer->inventory);
    return;
}