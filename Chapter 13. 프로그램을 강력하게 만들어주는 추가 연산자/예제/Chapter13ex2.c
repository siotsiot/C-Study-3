// 13장 예제 #2
// 파일 Chapter13ex2.c
/* 이 프로그램은 카운터의 값을 1에서 5까지 증가하고 값을 출력하며
다시 1로 카운트 다운한다.
이번에는 증가와 ㄱ마소 연산자를 사용한다. */

#include <stdio.h>
main()
{
    int ctr = 0;

    printf("카운터는 %d입니다.\n", ++ctr);
    printf("카운터는 %d입니다.\n", ++ctr);
    printf("카운터는 %d입니다.\n", ++ctr);
    printf("카운터는 %d입니다.\n", ++ctr);
    printf("카운터는 %d입니다.\n", ++ctr);
    printf("카운터는 %d입니다.\n", --ctr);
    printf("카운터는 %d입니다.\n", --ctr);
    printf("카운터는 %d입니다.\n", --ctr);
    printf("카운터는 %d입니다.\n", --ctr);

    return 0;
}
