// 23장 예제 #1
// 파일 Chapter23ex1.c

/* 이 프로그램은 10개의 난수를 생성하여 정렬한다. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int ctr, inner, outer, didSwap, temp;
    int nums[10];
    time_t t;

    // 이 문장을 포함시키지 않으면 항상 동일한 난수가 생성된다.
    srand(time(&t));

    // 첫 번째 단계는 배열을 1부터 100 사이의 난수로 채우는 것이다.

    for (ctr = 0; ctr < 10; ctr++)
    {
        nums[ctr] = (rand() % 99 + 1);
    }

    // 정렬하기 전의 배열을 출력한다.

    puts("\n정렬 전의 리스트:");

    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }

    // 배열을 정렬한다.

    for (outer = 0; outer < 9; outer++)
    {
        didSwap = 0; // 리스트가 아직 정렬되지 않았으면 1(true)
        for (inner = outer; inner < 10; inner++)
        {
            if (nums[inner] < nums[outer])
            {
                temp = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    // 정렬 후의 리스트를 출력한다.

    puts("\n정렬 후의 리스트:");

    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }

    return (0);
}
