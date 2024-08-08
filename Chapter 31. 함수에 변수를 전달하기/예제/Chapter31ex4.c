// 31장 예제 #4
// 파일 Chapter31ex4.c

/* 이 프로그램은 여러 개의 변수를 함수에 전달하는 방법을 보여준다.
 */

#include <stdio.h>

// 다음 문장은 32장에서 설명될 것이다.
changeSome(int i, float *newX, int iAry[5]);

main()
{
    int i = 10;
    int ctr;
    float x = 20.5;
    int iAry[] = { 10, 20, 30, 40, 50 };

    puts("함수를 호출하기 전의 변수의 값: ");

    printf("i는 %d\n", i);
    printf("x는 %.1f\n", x);

    for (ctr = 0; ctr < 5; ctr++)
    {
        printf("iAry[%d]는 %d\n", ctr, iAry[ctr]);
    }

    // changeSome() 함수를 호출하고 i의 값을 전달하고
    // x의 주소를 전달한다.(따러서 &를 붙였다.)

    changeSome(i, &x, iAry);

    puts("\n\n함수를 호출한 후의 변수의 값:");
    printf("i는 %d\n", i);
    printf("x는 %.1f\n", x);

    for (ctr = 0; ctr < 5; ctr++)
    {
        printf("iAry[%d]는 %d\n", ctr, iAry[ctr]);
    }

    return (0); // 프로그램을 종료한다.
}

/*************************************************************************/

changeSome(int i, float *newX, int iAry[5])
{
    // 모든 변수가 변경된다. 하지만 main()으로 복귀할 때,
    // float와 배열만 변경된다.

    int j;

    i = 47;
    *newX = 97.6; // main()에서 x의 주소와 같다.
    for (j = 0; j < 5; j++)
    {
        iAry[j] = 100 + 100 * j;
    }

    return; // main()으로 복귀한다.
}
