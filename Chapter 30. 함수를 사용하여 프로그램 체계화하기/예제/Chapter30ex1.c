// 30장 예제 #1
// 파일 Chapter30ex1.c

/* 이 프로그램은 전역 변수와 지역 변수의 차이점을 보여준다. */

#include <stdio.h>

int g1 = 10;

main()
{
    float l1;

    l1 = 9.0;

    printf("%d %.2f\n", g1, l1); // 첫 번째 전역 변수와
                                 // 첫 번째 지역 변수를 출력한다.

    prAgain(); // 첫 번째 함수를 호출한다.

    return 0;
}

float g2 = 19.0;

prAgain()
{
    int l2 = 5;

    // l1은 출력할 수 없는데 main()의 지역 변수이기 때문이다.
    printf("%d %.2f %d\n", l2, g2, g1);

    return ;
}
