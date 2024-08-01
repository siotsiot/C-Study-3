// 14장 예제 #1
// 파일 Chapter14ex1.c

/* 이 프로그램은 카운터의 값을 1에서 5까지 증가하고 값을 출력하며 다시 1로 카운트 다운한다.
이번에는 while 루프와 증가, 감소 연산자를 사용한다. */

#include <stdio.h>

main()
{
    int ctr = 0;
    while (ctr < 5)
    {
        printf("카운터는 %d입니다.\n", ++ctr);
    }
    while (ctr > 1)
    {
        printf("카운터는 %d입니다.\n", --ctr);
    }
    return 0;
}
