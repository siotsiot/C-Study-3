#include <stdio.h>

main()
{
    int value = 42;

    int *x;
    int *y;

    x = &value;
    y = &value;

    *y = 13;
    return 0;
}
