// 11장 예제 #2
// 파일 Chapter11ex2.c

/* 이 프로그램은 사용자에게 출생 연도를 질문하여 현재의 나이를 계산한다.
또 날짜가 잘못 입력되어서 미래의 날짜가 입력됐는지도 검사한다.
사용자가 윤년에 태어났으면 이를 알려준다. */

#include <stdio.h>
#define CURRENTYEAR 2014

main()
{
    int yearBorn, age;

    printf("몇 년에 태어나셨습니까?\n");
    scanf(" %d", &yearBorn);

    // if 문장은 데이터 검증을 하는 데 사용된다.
    // 사용자가 입력한 탄생 연도가 올바른지를 검사한다.
    // 이 문장은 yearBorn이 2014년 이후일 경우에만 실행된다.
    if (yearBorn > CURRENTYEAR)
    {
        printf("진짜요? 아직 태어나지 않으셨다고요?\n");
        printf("시간 여행을 축하합니다!\n");
    }
    else
    {
        age = CURRENTYEAR - yearBorn;
        printf("\n따라서 금년 생일이 지나면 %d살이 되시는군요!\n", age);

        // 두 번째 if 문장은  사용자가 태어난 연도가 윤년인지를 검사한다.
        // 윤년일 경우에만 if의 몸체가 실행된다.
    }

    if ((yearBorn % 4) == 0)
    {
        printf("\n윤년에 태어나셨군요--쿨하시네요!\n");
    }

    return 0;
}
