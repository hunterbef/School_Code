#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint.h>

extern uint32_t sumU32(const uint32_t x[], uint32_t count);

#define COUNT 3
int main()
{
    uint32_t x[COUNT] = {10, 20, 30};
    uint32_t sum = sumU32(x, COUNT);
    printf("Sum of elements x is: %"PRIu32"\n", sum);

    return EXIT_SUCCESS;
}