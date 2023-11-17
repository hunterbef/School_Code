#include <math.h>
#include <stdio.h>
#include <string.h>

float my_div(int top, int bottom) {
    float res = top/(float)bottom;
    return res;
}

int main() {
    int n=60, x=3;
    float ans;

    ans = my_div(n, x);
    printf("|%8.2f |\n", ans);

    return 0;
}