// 20장 예제 #1
// 파일 Chapter20ex1.c

/* 이 프로그램은 math.h에서의 정의된 산술 라이브러리 함수들을 사용한다.
따라서 여러분들은 숙제를 빠르게 할 수 있다. */

#include <stdio.h>
#include <string.h>
#include <math.h>

main()
{
    printf("수학 숙제할 시간입니다!");

    printf("\n\n섹션 1: 제곱근\n");
    printf("49.0의 제곱근은 %.1f\n", sqrt(49.0));
    printf("149.0의 제곱근은 %.1f\n", sqrt(149.0));
    printf(".149의 제곱근은 %.2f\n", sqrt(.149));

    printf("\n\n섹션 2: 지수\n");
    printf("4의 3승은 %.1f\n", pow(4.0, 3.0));
    printf("7의 5승은 %.1f\n", pow(7.0, 5.0));
    printf("34의 1/2승은 %.1f\n", pow(34.0, .5));

    printf("\n\n섹션 3: 삼각함수\n");
    printf("60도의 코사인값은 %.3f\n", cos((60 * (3.14159 / 180.0))));
    printf("90도의 사인값은 %.3f\n", sin((90 * (3.14159 / 180.0))));
    printf("75도의 탄젠트값은 %.3f\n", tan((75 * (3.14159 / 180.0))));
    printf("45도의 아크코사인값은 %.3f\n", acos((45 * (3.14159 / 180.0))));
    printf("30도의 아크사인값은 %.3f\n", asin((30* (3.14159 / 180.0))));
    printf("30도의 아크탄젠트값은 %.3f\n", atan((15* (3.14159 / 180.0))));

    printf("\n\n섹션 4: 로그 함수\n");
    printf("e의 2승은 %.3f\n", exp(2));
    printf("5의 자연로그값은 %.3f\n", log(5));
    printf("5의 상용로그값은 %.3f\n", log10(5));

    return 0;
}
