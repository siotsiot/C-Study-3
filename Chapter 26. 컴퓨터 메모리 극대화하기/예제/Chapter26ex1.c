// 26장 예제 #1
// 파일 Chapter26ex1.c

/* 이 프로그램은 난수들을 탐색한다.
먼저 배열을 할당하고 1부터 500까지의 난수로 배열을 채운다.
그리고 반복 루프를 돌면서 최솟값, 최댓값, 평균값을 계산한다.
끝나면 히프 메모리를 해제한다. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int i, aSize;

    int *randomNums;

    time_t t;

    double total = 0;
    int biggest, smallest;
    float average;

    srand(time(&t));

    printf("얼마나 많은 난수를 원하십니까? ");
    scanf(" %d", &aSize);

    // 사용자가 요청한 개수만큼의 정수를 할당받는다.

    randomNums = (int *)malloc(aSize * sizeof(int));

    // 할당이 제대로 되었는지를 검사한다.

    if (!randomNums)
    {
        printf("메모리 할당이 실패하였습니다!\n");
        exit(1);
    }

    // 루프를 돌면서 배열의 각 요소에 1부터 500 사이의 난수를 할당한다.

    for (i = 0; i < aSize; i++)
    {
        randomNums[i] = (rand() % 500) + 1;
    }

    // 비교를 위하여 최댓값 변수와 최솟값 변수를 초기화한다.

    biggest = 0;
    smallest = 500;

    // 루프를 돌면서 난수를 검사한다. 최댓값, 최솟값, 그리고 평균을 계산하기 위하여
    // 모든 난수를 더한다.

    for (i = 0; i < aSize; i++)
    {
        total += randomNums[i];
        if (randomNums[i] > biggest)
        {
            biggest = randomNums[i];
        }

        if (randomNums[i] < smallest)
        {
            smallest = randomNums[i];
        }
    }

    average = ((float)total) / ((float)aSize);

    printf("최댓값은 %d.\n", biggest);
    printf("최솟값은 %d.\n", smallest);
    printf("평균값은 %.2f.\n", average);

    // malloc()을 사용한 후에는 반드시, free()를 호출한다.

    free(randomNums);

    return (0);
}
