#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    unsigned short int length = 8;
    time_t t;

    srand((unsigned int)time(NULL));

    while (length--)
    {
        putchar(rand() % 94 + 33);
        srand(rand());
    }

    printf("\n");

    return 0;
}
