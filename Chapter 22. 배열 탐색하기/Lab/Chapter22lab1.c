#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

main()
{
    int values[SIZE];
    int i, max, min;

    srand((unsigned int)time(NULL));

    for (i = 0; i < SIZE; i++)
    {
        values[i] = rand() % 100;
        printf("%d ", values[i]);
    }
    printf("\n");

    max = values[0];
    min = values[0];

    for (i = 1; i < SIZE; i++)
    {
        if (values[i] > max)
            max = values[i];
        if (values[i] < min)
            min = values[i];
    }

    printf("최댓값은 %d, 최솟값은 %d입니다.\n", max, min);

    return 0;
}
