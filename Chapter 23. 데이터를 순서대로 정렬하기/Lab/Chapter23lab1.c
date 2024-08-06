#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int distances[10];
    int temp, inner, outer, didSwap, i; // 정렬을 위하여 필요하다.
    time_t t;

    // 실행할 때마다 달라지는 난수값을 만들기 위하여 필요하다.
    srand(time(&t));

    printf("distances[] = [ ");
    for (i = 0; i < 10; i++)
    {
        distances[i] = rand() % 100;
        printf("%d ", distances[i]);
    }
    printf("]\n");

    for (outer = 0; outer < 9; outer++)
    {
        didSwap = 0; // 리스트가 아직 정렬되지 않았으면 1(true)
        for (inner = outer; inner <10; inner++)
        {
            if (distances[inner] < distances[outer])
            {
                temp = distances[inner]; // 배열 요소 교환
                distances[inner] = distances[outer];
                distances[outer] = temp;
                didSwap = 1; // 교환이 발생하였(true)
            }
        }

        if (didSwap == 0)
        {
            break;
        }
    }

    printf("shortest path=%d\n", distances[0]);
    return 0;
}
