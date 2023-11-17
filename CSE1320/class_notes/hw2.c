#include <stdio.h>

int main()
{
    int count = 0;
    int aus = 7, jo = 13, shade = 9, appa = 8, syl = 8;

    for(aus = 2, jo = 3; shade < 67; shade*=2, appa-=3, syl/=2) 
    {
        count++;
    }
    printf("aus(%d) jo(%d) shade(%d) appa(%d) syl(%d)", aus, jo, shade, appa, syl);

    return 0;
}