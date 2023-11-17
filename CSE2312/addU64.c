#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

extern uint64_t addU64(uint64_t x, uint64_t y);
extern uint32_t even(uint32_t x);

int main(void)
{
    uint64_t x = 17;
    uint64_t y = 3;
    uint64_t z = add64(x, y);

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    return 0;
}