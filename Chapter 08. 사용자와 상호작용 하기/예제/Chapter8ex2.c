// 8장 예제 #2
// 파일 Chapter8ex2.c

/* 사용자에게 기본적인 몇 가지 사항을 질문하고
무엇이 입력되었는지 화면에 출력한다. */

#include <stdio.h>
main()
{
    char topping[24];
    int slices;
    int month, day, year;
    float cost;

    // 첫 번째 scanf()는 부동소수점수를 피자의 가격으로 입력받는다.
    // 사용자가 가격 앞에 $을 입력하지 않으면 문제가 발생한다.
    printf("여러분의 지역에서는 피자가 얼마나 하나요?");
    printf("($XX.XX와 같이 입력하시오)\n");
    scanf(" $%f", &cost);

    // 피자 토핑은 문자열이다. 따라서 scanf()에 엠퍼샌드가 없어도 된다.
    printf("제일 좋아하는 피자 토핑(한 단어)?\n");
    scanf(" %s", topping);

    printf("얼마나 많은 %s 피자의 슬라이스를 먹을 수 있나요?", topping);
    printf("한 자리에?\n");
    scanf(" %d", &slices);

    printf("오늘의 날짜를 입력하시오. (MM/DD/YY 형식으로).\n");
    scanf(" %d/%d/%d", &month, &day, &year);

    printf("\n\n%d/%d/%d일 저녁에 ", month, day, year);
    printf("\n%s 피자의 %d개 슬라이스를 먹으면 어때요!\n", topping, slices);
    printf("가격도 $%.2f밖에 안하는데요!\n\n\n", cost);

    return 0;
}
