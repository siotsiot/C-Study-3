// 10장 예제 #2
// 파일 Chapter10ex2.c

/* 카운터를 1부터 5까지 증가시켜서 출력한다.
다시 1까지 감소시키고 출력한다.
여기서는 복합연산자를 사용한다. */

#include <stdio.h>
main()
{
    int ctr = 0;

    ctr += 1; // 카운터를 1로 증가한다.
    printf("카운터의 값은 %d.\n", ctr);

    ctr += 1; // 카운터를 2로 증가한다.
    printf("카운터의 값은 %d.\n", ctr);

    printf("카운터의 값은 %d.\n", ctr += 1);
    ctr+= 1; // 카운터를 4로 증가한다.
    printf("카운터의 값은 %d.\n", ctr);

    printf("카운터의 값은 %d.\n", ctr += 1);
    ctr -= 1; // 카운터를 4로 감소한다.

    printf("카운터의 값은 %d.\n", ctr);
    printf("카운터의 값은 %d.\n", ctr -= 1);
    printf("카운터의 값은 %d.\n", ctr -= 1);
    printf("카운터의 값은 %d.\n", ctr -= 1);

    return 0;
}
