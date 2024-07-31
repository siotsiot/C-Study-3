// 9장 예제 #1
// 파일 Chapter9ex1.c

/* 이 예제 프로그램은 산술 연산자와
나눗셈 연산의 여러가지 경우를 설명한다. */

#include <stdio.h>
main()
{
    // 동일한 값들을 부동소수점 변수와 정수 변수로 준비한다.
    float a = 19.0;
    float b = 5.0;
    float floatAnswer;

    int x = 19;
    int y = 5;
    int intAnswer;

    // 2개의 float 변수를 사용하면 3.8로 계산된다.
    floatAnswer = a / b;
    printf("%.1f 나누기 %.1f 은 %.1f\n", a, b, floatAnswer);

    floatAnswer = x / y; // 수식의 계산값은 3.0이 된다.
    printf("%.1f 나누기 %.1f 은 %.1f\n", a, b, floatAnswer);

    // 이것도 3이 되는데 소수점 이하는 없어진다.(반올림되지 않는다.)
    intAnswer = a / b;
    printf("%.1f 나누기 %.1f 은 %d\n", a, b, intAnswer);

    intAnswer = x % y; // 나머지 4가 계산된다.
    printf("%d 모듈러스 (즉 나머지 연산) %d 은 %d\n", x, y, intAnswer);

    return 0;
}
