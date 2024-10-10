#include <stdio.h>

int main()
{
    struct struction
    {
        
        int a;

        int b;

        int c;

    };


    struct struction struction_1;

    struction_1.a = 1;

    struction_1.b = 1;

    struction_1.c = struction_1.a + struction_1.b;

    printf("%d",struction_1.c);

}