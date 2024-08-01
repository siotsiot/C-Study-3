#include <stdio.h>

main()
{
    int i, sum = 0;

    for (i = 1; i <= 1000; i++)
    {
        if (i % 3 == 0 || i % 8 == 0)
            sum += i;
    }
    printf("sum = %d", sum);
    return 0;
}
