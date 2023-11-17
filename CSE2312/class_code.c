#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

extern uint32_t add32(uint32_t a, uint32_t b)
{
    return a + b;
}

///*        feb 6th
int main(void)
{
    uint32_t x = 17;
    uint32_t y = 3;
    uint32_t z = add32(x, y);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    
    return 0;
}
//*/

