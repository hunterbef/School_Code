//October 31

    /*
    Structures (structs)
        a struct can comcurrently hold multiple data values of different types
        struct is a keyword - it signals the declaration of a structure
        a variable in a structure type can be initialized at the same time that the struct is declared
        Restrictions on the types of the members of the structures
            a member of a structure cannot be a function
            a structure may not nest a structure of its own type
        individual fields of a struct can be accessed with this syntax
            var_name.member_name
            mytshirt.price

    */


//November 4

    /*
    typedefs
        storage class to associaye an identifier with atype
            typedef old_type new_type;
        similar to a define - both define data types
            differences
                typedef - processed by the compiler
                    only used to dfine data types
                define - processed by the processor
                    can be used to define constants macros and other entities
        structs are great for typedefs
    
    math library
        using the math library requires an extra compiler command
    when to use character pointer and character arrays
        
    */


#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

typedef short myShort;
typedef int myInt;
typedef long myLong;
typedef short velma;
typedef int daphne;
typedef long fred;
typedef char shaggy[100];
typedef char scooby;

struct tshirt
{
    //int functionx(void);          NOT ALLOWED BANNED BY THE HIGH COUNCIL
    //struct tshirt nobodyTshirt    BANNED, FORBIDDEN, EXCOMMUNICATED, REGULATED
    char size[5];
    char color[10];
    char design[100];
    char fittype;
    float price;
    int inventory_level;
}
ourTshirts;

struct box
{
    int height;
    int length;
    int depth;
    float weight;
    char size[2];
    char strength[10];
    int codel;
    int inventory_level;
};

typedef struct
{
    float radius;
} 
CIRCLE;

typedef struct
{
    float side;
}
SQUARE;

typedef struct 
{
    float side1;
    float side2;
}
RECTANGLE;

typedef struct 
{
    float base;
    float height;
}
TRIANGLE;


union shape
{
    CIRCLE circle;
    SQUARE square;
    RECTANGLE rectangle;
    TRIANGLE triangle;
};



int main(void)
{
    struct tshirt myTshirts = {"XS", "BLUE", "DISNEY", 'A', 11.10, 20};
    struct tshirt yourTshirts, theirTshirts;

    myShort x = 0;
    myInt y = 1;
    myLong z = 2;

    velma dinkley;
    daphne blake;
    fred jones;
    shaggy rogers;
    scooby doo;

    dinkley = 10;

    union shape EnteredShape;
    int myShape;

    printf("Find the area of");


    switch (myShape)
    {
        
    }

    return 0;
}